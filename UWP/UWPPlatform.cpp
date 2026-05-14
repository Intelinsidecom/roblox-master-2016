#include "stdafx.h"
#include "UWPPlatform.h"
#include "UserInput.h"

#include "util/standardout.h"

#include "v8datamodel/GameSettings.h"
#include "v8datamodel/StarterPlayerService.h"
#include "v8datamodel/PlayerScripts.h"
#include "V8DataModel/GameBasicSettings.h"
#include "v8datamodel/DebugSettings.h"
#include "v8datamodel/Lighting.h"
#include "v8datamodel/Sky.h"
#include "v8datamodel/Workspace.h"
#include "v8datamodel/ContentProvider.h"
#include "util/ContentId.h"
#include "v8datamodel/BasicPartInstance.h"
#include "v8datamodel/Camera.h"
#include "v8datamodel/UserInputService.h"
#include "script/IScriptFilter.h"
#include "script/script.h"
#include "script/LuaSourceContainer.h"
#include "v8xml/Serializer.h"
#include "util/RunStateOwner.h"
#include "NetworkSettings.h"
#include "Network/Players.h"
#include "Network/Player.h"
#include "Server.h"
#include "Client.h"
#include "rbx/TaskScheduler.h"
#include "script/ScriptContext.h"

#include "GfxBase/ViewBase.h"
#include "GfxBase/RenderSettings.h"
#include "GfxBase/FrameRateManager.h"
#include "RenderJob.h"
#include "SDLGameController.h"

#include <SDL.h>

#include <string>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <thread>
#include <fstream>
#include <Windows.h>
#include <boost/filesystem.hpp>
#include <algorithm>

namespace FFlag { extern bool DebugD3D11DebugMode; }

#include <Unknwn.h>
#include <guiddef.h>
#include <dxgi.h>
#include <windows.ui.xaml.media.dxinterop.h>

// Needed for X64 builds
#ifndef IID_IUnknown
extern "C" const GUID IID_IUnknown = { 0x00000000, 0x0000, 0x0000, { 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 } };
#endif

static Windows::UI::Xaml::Controls::SwapChainPanel^ g_swapChainPanel = nullptr;

static std::atomic<unsigned int> g_cachedFbWidth{0};
static std::atomic<unsigned int> g_cachedFbHeight{0};
static std::atomic<float> g_cachedCompScaleX{1.0f};
static std::atomic<float> g_cachedCompScaleY{1.0f};
static std::atomic<bool> g_isWindowsPhone{ false };

extern "C" bool isUWPWindowsPhone()
{
    return g_isWindowsPhone.load(std::memory_order_relaxed);
}

// logic moved to initialize()

class UWPPlatform;

extern "C" IUnknown* getUWPSwapChainPanel()
{
    if (g_swapChainPanel)
    {
        Microsoft::WRL::ComPtr<IUnknown> unknown;
        HRESULT hr = reinterpret_cast<IUnknown*>(g_swapChainPanel)->QueryInterface(IID_IUnknown, &unknown);
        if (SUCCEEDED(hr))
        {
            IUnknown* result = unknown.Detach();
            return result;
        }
    }
    return nullptr;
}

extern "C" void getUWPFramebufferSize(unsigned int* width, unsigned int* height)
{
    static std::string deviceFamily = []() {
        try {
            auto family = Windows::System::Profile::AnalyticsInfo::VersionInfo->DeviceFamily;
            std::wstring wfamily(family->Begin(), family->End());
            return std::string(wfamily.begin(), wfamily.end());
        } catch (...) {
            return std::string("Windows.Desktop");
        }
    }();

    if (deviceFamily == "Windows.Xbox")
    {
        if (width)  *width  = 1920;
        if (height) *height = 1080;
        return;
    }

    unsigned int w = g_cachedFbWidth.load(std::memory_order_relaxed);
    unsigned int h = g_cachedFbHeight.load(std::memory_order_relaxed);

    if (w == 0 || h == 0)
    {
            auto displayInfo = Windows::Graphics::Display::DisplayInformation::GetForCurrentView();
            if (displayInfo)
            {
                auto bounds = Windows::UI::Core::CoreWindow::GetForCurrentThread()->Bounds;
                float scale = displayInfo->RawPixelsPerViewPixel;
                w = static_cast<unsigned int>(bounds.Width * scale);
                h = static_cast<unsigned int>(bounds.Height * scale);
            }
    }

    if (width)  *width  = w;
    if (height) *height = h;
}

extern "C" void getUWPCompositionScale(float* scaleX, float* scaleY)
{
    if (scaleX) *scaleX = g_cachedCompScaleX.load(std::memory_order_relaxed);
    if (scaleY) *scaleY = g_cachedCompScaleY.load(std::memory_order_relaxed);
}

extern "C" void setSwapChainOnUIThread(IUnknown* swapChain)
{
    if (!g_swapChainPanel || !swapChain)
        return;

    swapChain->AddRef();

    g_swapChainPanel->Dispatcher->RunAsync(
        Windows::UI::Core::CoreDispatcherPriority::High,
        ref new Windows::UI::Core::DispatchedHandler([swapChain]()
        {
            ISwapChainPanelNative* panelNative = nullptr;
            HRESULT hr = reinterpret_cast<IUnknown*>(g_swapChainPanel)->QueryInterface(IID_PPV_ARGS(&panelNative));
            if (SUCCEEDED(hr) && panelNative != nullptr)
            {
                IDXGISwapChain* dxgiSwapChain = nullptr;
                hr = swapChain->QueryInterface(IID_PPV_ARGS(&dxgiSwapChain));
                if (SUCCEEDED(hr) && dxgiSwapChain != nullptr)
                {
                    panelNative->SetSwapChain(dxgiSwapChain);
                    dxgiSwapChain->Release();
                }
                panelNative->Release();
            }
            swapChain->Release();
        }));
}

static const char* const kBaseUrl = "https://www.freblx.xyz/";

static RBX::CRenderSettings g_renderSettings;

// -----------------------------------------------------------------------------

UWPPlatform::UWPPlatform()
    : m_marshaller(nullptr)
    , m_game(nullptr)
    , m_dataModel()
    , m_view(nullptr)
    , m_renderJob()
    , m_context()
    , m_sdlWindow(nullptr)
    , m_dispatcher(nullptr)
    , m_initializationComplete(false)
    , m_cachedIsWindowsPhone(false)
    , m_sdlInitialized(false)
{
}

UWPPlatform::~UWPPlatform()
{
    shutdown();
}

void UWPPlatform::initialize()
{
    m_marshaller = new Marshaller();
    initializeLogging();
    initializeSettings();

    if (g_swapChainPanel)
        m_dispatcher = g_swapChainPanel->Dispatcher;
    else
    {
        try { m_dispatcher = Windows::UI::Core::CoreWindow::GetForCurrentThread()->Dispatcher; }
        catch (...) {}
    }

    if (g_swapChainPanel)
    {
        float scaleX = static_cast<float>(g_swapChainPanel->CompositionScaleX);
        float scaleY = static_cast<float>(g_swapChainPanel->CompositionScaleY);
        unsigned int w = static_cast<unsigned int>(g_swapChainPanel->ActualWidth * scaleX);
        unsigned int h = static_cast<unsigned int>(g_swapChainPanel->ActualHeight * scaleY);

        if (w == 0 || h == 0)
        {
            try {
                auto bounds = Windows::UI::Core::CoreWindow::GetForCurrentThread()->Bounds;
                auto displayInfo = Windows::Graphics::Display::DisplayInformation::GetForCurrentView();
                float rawScale = displayInfo ? displayInfo->RawPixelsPerViewPixel : 1.0f;
                w = static_cast<unsigned int>(bounds.Width * rawScale);
                h = static_cast<unsigned int>(bounds.Height * rawScale);
            } catch (...) {}
        }

        g_cachedFbWidth.store(w,  std::memory_order_release);
        g_cachedFbHeight.store(h, std::memory_order_release);
        g_cachedCompScaleX.store(scaleX, std::memory_order_release);
        g_cachedCompScaleY.store(scaleY, std::memory_order_release);
    }


    bool currentIsMobile = []() -> bool {
        try {
            auto family = Windows::System::Profile::AnalyticsInfo::VersionInfo->DeviceFamily;
            std::wstring wf(family->Begin(), family->End());
            return std::string(wf.begin(), wf.end()) == "Windows.Mobile";
        }
        catch (...) { return false; }
    }();
    m_cachedIsWindowsPhone.store(currentIsMobile);
    g_isWindowsPhone.store(currentIsMobile);

    if (m_swapChainPanel)
    {
        m_swapChainPanel->SizeChanged +=
            ref new Windows::UI::Xaml::SizeChangedEventHandler(
                [this](Platform::Object^, Windows::UI::Xaml::SizeChangedEventArgs^ args)
                {
                    auto sz = args->NewSize;
                    if (sz.Width > 0 && sz.Height > 0)
                    {
                        float scaleX = static_cast<float>(m_swapChainPanel->CompositionScaleX);
                        float scaleY = static_cast<float>(m_swapChainPanel->CompositionScaleY);
                        unsigned int w = static_cast<unsigned int>(sz.Width * scaleX);
                        unsigned int h = static_cast<unsigned int>(sz.Height * scaleY);

                        g_cachedFbWidth.store(w,  std::memory_order_release);
                        g_cachedFbHeight.store(h, std::memory_order_release);

                        if (m_userInput)
                            m_userInput->setViewportSize(static_cast<int>(sz.Width),
                                                         static_cast<int>(sz.Height));
                    }
                });

        m_swapChainPanel->CompositionScaleChanged +=
            ref new Windows::Foundation::TypedEventHandler<
                Windows::UI::Xaml::Controls::SwapChainPanel^, Platform::Object^>(
                [](Windows::UI::Xaml::Controls::SwapChainPanel^ panel, Platform::Object^)
                {
                    float scaleX = static_cast<float>(panel->CompositionScaleX);
                    float scaleY = static_cast<float>(panel->CompositionScaleY);
                    g_cachedCompScaleX.store(scaleX, std::memory_order_release);
                    g_cachedCompScaleY.store(scaleY, std::memory_order_release);
                    unsigned int w = static_cast<unsigned int>(panel->ActualWidth * scaleX);
                    unsigned int h = static_cast<unsigned int>(panel->ActualHeight * scaleY);
                    if (w > 0 && h > 0)
                    {
                        g_cachedFbWidth.store(w,  std::memory_order_release);
                        g_cachedFbHeight.store(h, std::memory_order_release);
                    }
                });
    }

    SDL_SetMainReady();
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    SDL_SetHint(SDL_HINT_XINPUT_ENABLED, "1");
    if (SDL_Init(SDL_INIT_VIDEO) == 0)
        m_sdlInitialized = true;
    else
        onLogMessage("SDL_Init failed - input may not function correctly");

    updateLoadingStatus("Starting...");

    Windows::System::Threading::ThreadPool::RunAsync(
        ref new Windows::System::Threading::WorkItemHandler(
            [this](Windows::Foundation::IAsyncAction^)
            {
                initializeBackground();
            }),
        Windows::System::Threading::WorkItemPriority::Normal,
        Windows::System::Threading::WorkItemOptions::TimeSliced);
}

void UWPPlatform::shutdown()
{
    RBX::GlobalBasicSettings::singleton()->saveState();
    RBX::GlobalAdvancedSettings::singleton()->saveState();

    if (m_renderJob)
    {
        m_renderJob->stop();
        m_renderJob.reset();
    }

    if (m_view)
    {
        delete m_view;
        m_view = nullptr;
    }

    if (m_game)
    {
        m_game->shutdown();
        delete m_game;
        m_game = nullptr;
        m_dataModel.reset();
    }

    if (m_sdlWindow)
    {
        SDL_DestroyWindow(m_sdlWindow);
        m_sdlWindow = nullptr;
    }

    if (m_userInput)
    {
        m_userInput->shutdown();
        m_userInput.reset();
    }

    if (m_standardOutConnection.connected())
        m_standardOutConnection.disconnect();

    if (m_marshaller)
    {
        delete m_marshaller;
        m_marshaller = nullptr;
    }
}

void UWPPlatform::tick()
{
    if (!m_marshaller)
        return;

    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        try
        {
            switch (event.type)
            {
            case SDL_QUIT:
                if (m_dataModel)
                    m_dataModel->close();
                break;
            case SDL_CONTROLLERDEVICEADDED:
            case SDL_CONTROLLERDEVICEREMOVED:
            case SDL_CONTROLLERAXISMOTION:
            case SDL_CONTROLLERBUTTONDOWN:
            case SDL_CONTROLLERBUTTONUP:
                if (m_gameController)
                    m_gameController->handleEvent(event);
                break;
            case SDL_KEYDOWN:
            case SDL_KEYUP:
                if (m_userInput)
                    m_userInput->processKeyboardEvent(event.key);
                break;
            case SDL_MOUSEBUTTONDOWN:
            case SDL_MOUSEBUTTONUP:
            case SDL_MOUSEMOTION:
            case SDL_MOUSEWHEEL:
                if (m_userInput)
                    m_userInput->processMouseEvent(event);
                break;
            }
        }
        catch (const std::exception& e)
        {
            char buf[512];
            sprintf_s(buf, "Exception in event processing: %s", e.what());
            onLogMessage(buf);
        }
        catch (...) { onLogMessage("Unknown exception in event processing"); }
    }

    if (m_gameController)
        m_gameController->updateControllers();

    m_marshaller->process();

    if (m_renderJob)
    {
        RBX::TaskScheduler::Job::Stats stats(*m_renderJob, RBX::Time::nowFast());
        m_renderJob->step(stats);
    }
}

void UWPPlatform::onLogMessage(const std::string& message)
{
    std::lock_guard<std::mutex> lock(m_logMutex);

    std::wstring wmsg(message.begin(), message.end());
    wmsg += L"\n";
    OutputDebugStringW(wmsg.c_str());

    if (m_logCallback)
        m_logCallback(message);
}

void UWPPlatform::onStandardOutMessage(const RBX::StandardOutMessage& message)
{
    std::string prefix;
    switch (message.type)
    {
        case RBX::MESSAGE_OUTPUT:    prefix = "[OUTPUT] "; break;
        case RBX::MESSAGE_INFO:      prefix = "[INFO] ";   break;
        case RBX::MESSAGE_WARNING:   prefix = "[WARNING] "; break;
        case RBX::MESSAGE_ERROR:     prefix = "[ERROR] ";  break;
        case RBX::MESSAGE_SENSITIVE: prefix = "[SENSITIVE] "; break;
        default:                     prefix = "[UNKNOWN] "; break;
    }
    onLogMessage(prefix + message.message);
}

void UWPPlatform::setLogCallback(std::function<void(const std::string&)> callback)
{
    std::lock_guard<std::mutex> lock(m_logMutex);
    m_logCallback = callback;
}

void UWPPlatform::setRenderingInitializedCallback(std::function<void()> callback)
{
    m_renderingInitializedCallback = callback;
}

void UWPPlatform::setLoadingStatusCallback(std::function<void(const std::string&)> callback)
{
    std::lock_guard<std::mutex> lock(m_logMutex);
    m_loadingStatusCallback = callback;
}

void UWPPlatform::setSwapChainPanel(Windows::UI::Xaml::Controls::SwapChainPanel^ panel)
{
    m_swapChainPanel = panel;
    g_swapChainPanel = panel;

    if (panel != nullptr && m_userInput != nullptr)
        m_userInput->setViewportSize(static_cast<int>(panel->ActualWidth),
                                      static_cast<int>(panel->ActualHeight));
}

void UWPPlatform::updateLoadingStatus(const std::string& status)
{
    std::function<void(const std::string&)> cb;
    {
        std::lock_guard<std::mutex> lock(m_logMutex);
        cb = m_loadingStatusCallback;
    }
    if (cb) cb(status);
}

void UWPPlatform::initializeLogging()
{
    m_standardOutConnection = RBX::StandardOut::singleton()->messageOut.connect(
        [this](const RBX::StandardOutMessage& msg) { onStandardOutMessage(msg); }
    );
}

void UWPPlatform::initializeSettings()
{
    RBX::GameBasicSettings::singleton();
    RBX::NetworkSettings::singleton();
    RBX::DebugSettings::singleton();

#if defined(_DEBUG) && !defined(_M_ARM64) && !defined(_M_ARM) 
    FFlag::DebugD3D11DebugMode = true;
#else
    FFlag::DebugD3D11DebugMode = false;
#endif

    {
        Platform::String^ installPath = Windows::ApplicationModel::Package::Current->InstalledLocation->Path;
        std::wstring wInstall(installPath->Begin(), installPath->End());

        boost::filesystem::path packagePath(wInstall);
        boost::filesystem::path contentPath = packagePath / "content";

        boost::system::error_code ec;
        if (boost::filesystem::exists(contentPath, ec))
        {
            std::string localBaseUrl = "file:///" + contentPath.string() + "/";
            std::replace(localBaseUrl.begin(), localBaseUrl.end(), '\\', '/');
            ::SetBaseURL(localBaseUrl);
            RBX::ContentProvider::setAssetFolder(contentPath.string().c_str());
        }
        else
        {
            RBX::ContentProvider::setAssetFolder("content");
        }
    }

    RBX::TaskScheduler::singleton().setThreadCount(RBX::TaskScheduler::Auto);
    RBX::GameBasicSettings::singleton().setStudioMode(true);
}

void UWPPlatform::initializeBackground()
{
    try
    {
        updateLoadingStatus("Initializing engine...");
        RBX::Game::globalInit(false);
        updateLoadingStatus("Creating data model...");
        std::string baseUrl = ::GetBaseURL();
        m_game = new RBX::UnsecuredStudioGame(nullptr, baseUrl.c_str(), false, false);
        m_dataModel = m_game->getDataModel();
		if (!isUWPWindowsPhone()) {
			updateLoadingStatus("Creating renderer...");
		}
		else {
			updateLoadingStatus("Creating renderer... Will take a while. Be patient.");
		}
        initializeRendering();
        updateLoadingStatus("Initializing input...");
        initializeInput();
        updateLoadingStatus("Setting up world...");
        initializeGameWorld();

        if (m_view)
        {
            m_renderJob.reset(new RenderJob(m_view, m_marshaller));
            RBX::TaskScheduler::singleton().add(m_renderJob);
        }

        m_initializationComplete.store(true, std::memory_order_release);
        updateLoadingStatus("Ready!");

        if (m_dispatcher)
        {
            m_dispatcher->RunAsync(
                Windows::UI::Core::CoreDispatcherPriority::Normal,
                ref new Windows::UI::Core::DispatchedHandler([this]()
                {
                    if (m_renderingInitializedCallback)
                        m_renderingInitializedCallback();
                }));
        }
    }
    catch (const std::exception& e)
    {
        onLogMessage(std::string("Background initialization failed: ") + e.what());
        updateLoadingStatus("Initialization failed!");
    }
    catch (...)
    {
        onLogMessage("Unknown error during background initialization");
        updateLoadingStatus("Initialization failed!");
    }
}

void UWPPlatform::initializeRendering()
{
    try
    {
        if (!m_swapChainPanel)
        {
            onLogMessage("initializeRendering: No SwapChainPanel set");
            return;
        }

        RBX::ViewBase::InitPluginModules();

        m_context.hWnd = (HWND)this;

        {
            int waitedMs = 0;
            while (g_cachedFbWidth.load(std::memory_order_acquire)  == 0 ||
                   g_cachedFbHeight.load(std::memory_order_acquire) == 0)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(16));
                waitedMs += 16;
                if (waitedMs >= 5000)
                {
                    if (m_cachedIsWindowsPhone.load())
                    { g_cachedFbWidth.store(360); g_cachedFbHeight.store(640); }
                    else
                    { g_cachedFbWidth.store(800); g_cachedFbHeight.store(600); }
                    break;
                }
            }
        }

        m_context.width  = static_cast<int>(g_cachedFbWidth.load(std::memory_order_acquire));
        m_context.height = static_cast<int>(g_cachedFbHeight.load(std::memory_order_acquire));
        m_view = RBX::ViewBase::CreateView(RBX::CRenderSettings::Direct3D11, &m_context, &g_renderSettings);

        if (!m_view)
        {
            onLogMessage("initializeRendering: CreateView returned null");
            return;
        }

        // NOTE: On Qualcomm ARM (Lumia 950 / Adreno) initResources() compiles
        // shaders via qcdx11compiler8994.dll.  Even with precompiled shader pakcs the
        // Qualcomm driver must still translate DXBC -> GLSL -> Adreno ISA at runtime.
        // This step takes 20-40 s on ARM.  Running it here (background thread) keeps
        // the UI thread free so the XAML loading screen stays animated and the
        // Marshaller queue keeps draining.
		// TODO: Find a way to drastically speed it up.
        m_view->initResources();
        m_view->bindWorkspace(m_dataModel);

    }
    catch (Platform::Exception^ e)
    {
        std::wstring wmsg(e->Message->Begin(), e->Message->End());
        onLogMessage("Platform exception in initializeRendering: "
                     + std::string(wmsg.begin(), wmsg.end()));
        if (m_view) { delete m_view; m_view = nullptr; }
    }
    catch (const std::exception& e)
    {
        onLogMessage(std::string("Exception during rendering initialization: ") + e.what());
        if (m_view) { delete m_view; m_view = nullptr; }
    }
    catch (...)
    {
        onLogMessage("Unknown exception during rendering initialization");
        if (m_view) { delete m_view; m_view = nullptr; }
    }
}

void UWPPlatform::initializeInput()
{
    try
    {

        if (m_dataModel)
        {
            if (RBX::UserInputService* uis = RBX::ServiceProvider::find<RBX::UserInputService>(m_dataModel.get()))
            {
                bool isPhone = m_cachedIsWindowsPhone.load();
                uis->setTouchEnabled(isPhone);
                uis->setKeyboardEnabled(!isPhone);
                uis->setMouseEnabled(!isPhone);
            }
        }

        if (m_dataModel)
        {
            if (!m_cachedIsWindowsPhone.load())
            {
                m_gameController.reset(new SDLGameController(m_dataModel));
            }

            m_userInput.reset(new UserInput(m_dataModel.get(), m_marshaller, [this](const std::string& msg) { onLogMessage(msg); }));

            if (m_userInput)
            {
                m_userInput->setViewportSize(
                    static_cast<int>(g_cachedFbWidth.load(std::memory_order_relaxed)),
                    static_cast<int>(g_cachedFbHeight.load(std::memory_order_relaxed)));
            }

            if (m_dispatcher)
            {
                std::mutex mtx;
                std::condition_variable cv;
                bool done = false;

                m_dispatcher->RunAsync(
                    Windows::UI::Core::CoreDispatcherPriority::Normal,
                    ref new Windows::UI::Core::DispatchedHandler([this, &mtx, &cv, &done]()
                    {
                        m_userInput->initialize();
                        {
                            std::lock_guard<std::mutex> lk(mtx);
                            done = true;
                        }
                        cv.notify_one();
                    }));

                std::unique_lock<std::mutex> lk(mtx);
                cv.wait(lk, [&done]() { return done; });
            }
            else
            {
            }
        }
    }
    catch (const std::exception& e)
    {
        onLogMessage(std::string("Exception during input initialization: ") + e.what());
    }
}

void UWPPlatform::initializeGameWorld()
{
    try
    {
        RBX::DataModel::LegacyLock lock(m_dataModel.get(), RBX::DataModelJob::Write);
 
        RBX::Security::Impersonator impersonate(RBX::Security::RobloxGameScript_);

        try 
        {
            m_dataModel->startCoreScripts(true, "StarterScript");
        } 
        catch(const std::exception& e) 
        {
            onLogMessage(std::string("startCoreScripts threw: ") + e.what());
        }
 
        if (RBX::ScriptContext* sc = RBX::ServiceProvider::find<RBX::ScriptContext>(m_dataModel.get()))
        {
            sc->setRobloxPlace(false);
        }
        try 
        {
            m_dataModel->loadContent(RBX::ContentId("rbxasset://TestPlace.rbxl"));
        }
        catch(const std::exception& e)
        {
            onLogMessage(std::string("Failed to loadContent: ") + e.what());
        }
 
        if (RBX::Network::Players* players = RBX::ServiceProvider::create<RBX::Network::Players>(m_dataModel.get()))
{
    try {
        auto player = RBX::Instance::fastSharedDynamicCast<RBX::Network::Player>(
            players->createLocalPlayer(1));
        
        if (player)
        {
            player->loadCharacter(true, "");
 
            RBX::StarterPlayerScripts* starterPlayerScripts = nullptr;
            if (RBX::StarterPlayerService* sps = RBX::ServiceProvider::find<RBX::StarterPlayerService>(m_dataModel.get()))
            {
                sps->setupPlayerScripts();
                starterPlayerScripts = sps->findFirstChildOfType<RBX::StarterPlayerScripts>();
            }
 
            if (starterPlayerScripts)
            {
                starterPlayerScripts->requestDefaultScriptsServer(player);
            }

            if (RBX::Workspace* workspace = RBX::ServiceProvider::find<RBX::Workspace>(m_dataModel.get()))
            {
                if (RBX::Camera* camera = workspace->getCamera())
                {
                    if (RBX::ModelInstance* character = player->getCharacter())
                    {
                        camera->setCameraSubject(character);
                        camera->setCameraType(RBX::Camera::FOLLOW_CAMERA);
                    }
                }
            }
        }
    } catch (const std::exception& e) {
        onLogMessage(std::string("Exception during player initialization: ") + e.what());
    }
}

        if (RBX::RunService* runService = RBX::ServiceProvider::create<RBX::RunService>(m_dataModel.get()))
            runService->run();
 
        m_dataModel->gameLoaded();
 
        if (m_userInput)
            m_userInput->sendFocusEvent(true);
    }
    catch (const std::exception& e)
    {
        onLogMessage(std::string("Exception during game world setup: ") + e.what());
    }
}
