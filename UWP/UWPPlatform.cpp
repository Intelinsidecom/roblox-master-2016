#include "pch.h"
#include "UWPPlatform.h"

#include <atomic>
#include <cmath>
#include <string>
#include <utility>

#include <wrl.h>

#include <Windows.h>

#include <windows.ui.xaml.media.dxinterop.h>
#include <dxgi.h>

#include <windows.system.h>
#include <windows.ui.xaml.h>
#include <windows.ui.core.h>

#include "util/standardout.h"
#include "util/Http.h"
#include "rbx/rbxTime.h"

#include "PlaceLauncher.h"
#include "RobloxView.h"
#include "Screens/AppShell.xaml.h"

#include "util/MemoryStats.h"
#include "GfxBase/ViewBase.h"
#include "RenderView.h"

#include "Roblox\RobloxSettings.h"
#include "Roblox\AuthStorage.h"
#include "util/Statistics.h"

namespace
{
Windows::UI::Xaml::Controls::SwapChainPanel^ g_swapChainPanel = nullptr;

std::atomic<unsigned int> g_cachedFbWidth{ 0 };
std::atomic<unsigned int> g_cachedFbHeight{ 0 };
std::atomic<float> g_cachedCompScaleX{ 1.0f };
std::atomic<float> g_cachedCompScaleY{ 1.0f };
std::atomic<bool> g_isWindowsPhone{ false };
std::atomic<bool> g_isLowMemoryDevice{ false };
std::atomic<bool> g_isLowMemoryDeviceKnown{ false };

static double getPhysicalRamBytes();

static bool computeIsLowMemoryDevice()
{
    try
    {
        auto limit = Windows::System::MemoryManager::AppMemoryUsageLimit;
        if (limit > 0)
            return limit <= (384ull * 1024 * 1024);
    }
    catch (Platform::Exception^) { }

    double gb = getPhysicalRamBytes() / (1024.0 * 1024.0 * 1024.0);
    return gb <= 1.0;
}

std::atomic<bool> g_gameReadyFired{ false };

const float kRenderScaleMin      = 0.5f;
const float kRenderScaleMax      = 2.0f;
const float kRenderScaleOverride = 0.0f;

#pragma comment(lib, "OneCoreUAP.lib")
struct MemoryStatusExLocal
{
    DWORD     dwLength;
    DWORD     dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
};

extern "C" __declspec(dllimport) BOOL WINAPI GlobalMemoryStatusEx(MemoryStatusExLocal* lpBuffer);

static double getPhysicalRamBytes()
{
    MemoryStatusExLocal status;
    status.dwLength = sizeof(status);
    if (!GlobalMemoryStatusEx(&status))
        return 0.0;
    return static_cast<double>(status.ullTotalPhys);
}

static double getAvailablePhysicalRamBytes()
{
    MemoryStatusExLocal status;
    status.dwLength = sizeof(status);
    if (!GlobalMemoryStatusEx(&status))
        return 0.0;
    return static_cast<double>(status.ullAvailPhys);
}

void applyLowMemTuning()
{
    if (!UWPPlatform::GetInstance().IsLowMemoryDevice())
        return;

    FLog::SetValue("StreamingMemoryUsagePercent", "10");
    FLog::SetValue("StreamingSafeMemWatermarkMB", "90");
    FLog::SetValue("StreamingLowMemWatermarkMB", "60");
    FLog::SetValue("StreamingCriticalLowMemWatermarkMB", "40");
    FLog::SetValue("RenderTextureManagerBudget", "16");
    FLog::SetValue("RenderTextureManagerBudgetFor4k", "256");
    FLog::SetValue("RenderTextureManagerMaxTextureSize", "512");
    FLog::SetValue("RenderTextureCompositorBudget", "4");
    FLog::SetValue("RenderTextureCompositorDisabled", "1");

}

static float getRecommendedRenderScale()
{
    double gb = getPhysicalRamBytes() / (1024.0 * 1024.0 * 1024.0);
    if (gb <= 0.0)
        gb = 2.0;

    double scale;
    if (gb <= 0.5)
        scale = 0.5;
    else if (gb <= 1.0)
        scale = 0.5 + (gb - 0.5);
    else if (gb <= 3.0)
        scale = 1.0 + 0.25 * (gb - 1.0);
    else
        scale = 1.5 + 0.5 * (gb - 3.0);
    if (scale > kRenderScaleMax) scale = kRenderScaleMax;
    if (scale < kRenderScaleMin) scale = kRenderScaleMin;
    return static_cast<float>(scale);
}

static float computeEffectiveScale(float compositionScale)
{
    float effectiveMax = kRenderScaleOverride > 0.0f
        ? kRenderScaleOverride
        : getRecommendedRenderScale();
    if (effectiveMax > compositionScale)
        effectiveMax = compositionScale;
    float eff = compositionScale;
    if (eff > effectiveMax) eff = effectiveMax;
    if (eff < kRenderScaleMin) eff = kRenderScaleMin;
    return eff;
}
} // namespace

extern "C" bool isUWPWindowsPhone()
{
    return g_isWindowsPhone.load(std::memory_order_relaxed);
}

extern "C" IUnknown* getUWPSwapChainPanel()
{
    if (g_swapChainPanel)
    {
        Microsoft::WRL::ComPtr<IUnknown> unknown;
        HRESULT hr = reinterpret_cast<IUnknown*>(g_swapChainPanel)->QueryInterface(IID_PPV_ARGS(&unknown));
        if (SUCCEEDED(hr) && unknown)
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
        }
        catch (...) {
            return std::string("Windows.Desktop");
        }
    }();

    if (deviceFamily == "Windows.Xbox")
    {
        if (width)  *width = 1920;
        if (height) *height = 1080;
        return;
    }

    unsigned int w = g_cachedFbWidth.load(std::memory_order_relaxed);
    unsigned int h = g_cachedFbHeight.load(std::memory_order_relaxed);

    if (w == 0 || h == 0)
    {
        try
        {
            auto bounds = Windows::UI::Core::CoreWindow::GetForCurrentThread()->Bounds;
            w = static_cast<unsigned int>(bounds.Width);
            h = static_cast<unsigned int>(bounds.Height);
        }
        catch (...)
        {
        }
    }

    if (w == 0) w = 800;
    if (h == 0) h = 600;

    if (width)  *width = w;
    if (height) *height = h;
}

extern "C" void getUWPCompositionScale(float* scaleX, float* scaleY)
{
    float x = g_cachedCompScaleX.load(std::memory_order_relaxed);
    float y = g_cachedCompScaleY.load(std::memory_order_relaxed);
    if (scaleX) *scaleX = x;
    if (scaleY) *scaleY = y;
}

extern "C" void setSwapChainOnUIThread(IUnknown* swapChain)
{
    if (!g_swapChainPanel || !swapChain)
        return;

    g_gameReadyFired.store(false, std::memory_order_release);

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

            auto gameReadyTimer = ref new Windows::UI::Xaml::DispatcherTimer();
            gameReadyTimer->Interval = Windows::Foundation::TimeSpan{ 15000000 }; // 1.5s in 100ns units
            gameReadyTimer->Tick +=
                ref new Windows::Foundation::EventHandler<Platform::Object^>(
                    [gameReadyTimer](Platform::Object^, Platform::Object^)
                    {
                        gameReadyTimer->Stop();
                        if (!g_gameReadyFired.exchange(true, std::memory_order_acq_rel))
                            UWPPlatform::GetInstance().fireGameReady();
                    });
            gameReadyTimer->Start();
        }));
}

extern "C" void uwpNotifyFramePresented()
{
    bool expected = false;
    if (!g_gameReadyFired.compare_exchange_strong(expected, true, std::memory_order_acq_rel))
        return;

    UWPPlatform::GetInstance().fireGameReady();
}

UWPPlatform::UWPPlatform()
    : m_initialized(false)
    , m_swapChainPanel(nullptr)
    , m_memUsageIncreasedToken{ 0 }
    , m_memLimitChangingToken{ 0 }
    , m_memPressureTimer(nullptr)
    , m_memPressureStarted(false)
    , m_lastPressureGc()
{
}

UWPPlatform::~UWPPlatform()
{
}

UWPPlatform& UWPPlatform::GetInstance()
{
    static UWPPlatform instance;
    return instance;
}

bool UWPPlatform::IsLowMemoryDevice() const
{
    if (!g_isLowMemoryDeviceKnown.load(std::memory_order_acquire))
    {
        g_isLowMemoryDevice.store(computeIsLowMemoryDevice(), std::memory_order_release);
        g_isLowMemoryDeviceKnown.store(true, std::memory_order_release);
    }
    return g_isLowMemoryDevice.load(std::memory_order_acquire);
}

void UWPPlatform::initialize()
{
    if (m_initialized)
        return;

    RBX::FunctionMarshaller::GetWindow();

    initializeLogging();

    {
        Platform::String^ baseUrl = Roblox::RobloxSettings::GetInstance()->GetBaseURL();
        if (baseUrl != nullptr && !baseUrl->IsEmpty())
        {
            std::wstring w(baseUrl->Begin(), baseUrl->End());
            std::string url(w.begin(), w.end());
            if (!url.empty() && url[url.length() - 1] != '/')
            {
                url.push_back('/');
            }
            ::SetBaseURL(url);
        }
    }

    RBX::Http::rbxUserAgent = "Roblox/UWP";

    if (Roblox::AuthStorage::HasSession())
    {
        Platform::String^ sessionCookie = Roblox::AuthStorage::SessionCookie();
        if (sessionCookie != nullptr && !sessionCookie->IsEmpty())
        {
            std::wstring wCookie(sessionCookie->Begin(), sessionCookie->End());
            std::string cookie(wCookie.begin(), wCookie.end());

            std::string cookieDomain = GetBaseURL();
            size_t schemeEnd = cookieDomain.find("://");
            if (schemeEnd != std::string::npos)
                cookieDomain.erase(0, schemeEnd + 3);
            while (!cookieDomain.empty() && cookieDomain[cookieDomain.size() - 1] == '/')
                cookieDomain.resize(cookieDomain.size() - 1);
            if (cookieDomain.compare(0, 4, "www.") == 0)
                cookieDomain.erase(0, 4);
            cookieDomain = "." + cookieDomain;

            RBX::Http::setCookiesForDomain(cookieDomain, ".ROBLOSECURITY=" + cookie + "; ");
        }
    }

    bool isMobile = []() -> bool {
        try
        {
            auto family = Windows::System::Profile::AnalyticsInfo::VersionInfo->DeviceFamily;
            std::wstring wf(family->Begin(), family->End());
            return std::string(wf.begin(), wf.end()) == "Windows.Mobile";
        }
        catch (...)
        {
            return false;
        }
    }();
    g_isWindowsPhone.store(isMobile);

    m_initialized = true;
}

void UWPPlatform::initializeLogging()
{
    m_standardOutConnection = RBX::StandardOut::singleton()->messageOut.connect(
        [this](const RBX::StandardOutMessage& msg) { onStandardOutMessage(msg); }
    );
}

void UWPPlatform::onStandardOutMessage(const RBX::StandardOutMessage& message)
{
    if (!IsDebuggerPresent())
        return;

    std::string prefix;
    switch (message.type)
    {
        case RBX::MESSAGE_OUTPUT:    prefix = "[OUTPUT] ";   break;
        case RBX::MESSAGE_INFO:      prefix = "[INFO] ";     break;
        case RBX::MESSAGE_WARNING:   prefix = "[WARNING] ";  break;
        case RBX::MESSAGE_ERROR:     prefix = "[ERROR] ";    break;
        case RBX::MESSAGE_SENSITIVE: prefix = "[SENSITIVE] "; break;
        default:                     prefix = "[UNKNOWN] ";  break;
    }

    std::string full = prefix + message.message;
    std::wstring wmsg(full.begin(), full.end());
    wmsg += L"\n";
    OutputDebugStringW(wmsg.c_str());
}

void UWPPlatform::tick()
{
    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (marshaller)
        marshaller->ProcessMessages();
}

void UWPPlatform::setSwapChainPanel(Windows::UI::Xaml::Controls::SwapChainPanel^ panel)
{
    m_swapChainPanel = panel;
    g_swapChainPanel = panel;

    if (!panel)
        return;

    float scaleX = static_cast<float>(panel->CompositionScaleX);
    float scaleY = static_cast<float>(panel->CompositionScaleY);
    float effScaleX = computeEffectiveScale(scaleX);
    float effScaleY = computeEffectiveScale(scaleY);
    unsigned int w = static_cast<unsigned int>(ceil(panel->ActualWidth * effScaleX));
    unsigned int h = static_cast<unsigned int>(ceil(panel->ActualHeight * effScaleY));
    if (w == 0) w = 800;
    if (h == 0) h = 600;

    g_cachedFbWidth.store(w, std::memory_order_release);
    g_cachedFbHeight.store(h, std::memory_order_release);
    g_cachedCompScaleX.store(effScaleX, std::memory_order_release);
    g_cachedCompScaleY.store(effScaleY, std::memory_order_release);


    panel->SizeChanged += ref new Windows::UI::Xaml::SizeChangedEventHandler(
        [panel](Platform::Object^, Windows::UI::Xaml::SizeChangedEventArgs^ args)
        {
            auto sz = args->NewSize;
            if (sz.Width <= 0 || sz.Height <= 0)
                return;

            float eX = computeEffectiveScale(static_cast<float>(panel->CompositionScaleX));
            float eY = computeEffectiveScale(static_cast<float>(panel->CompositionScaleY));
            unsigned int nw = static_cast<unsigned int>(ceil(sz.Width * eX));
            unsigned int nh = static_cast<unsigned int>(ceil(sz.Height * eY));

            g_cachedFbWidth.store(nw, std::memory_order_release);
            g_cachedFbHeight.store(nh, std::memory_order_release);
            g_cachedCompScaleX.store(eX, std::memory_order_release);
            g_cachedCompScaleY.store(eY, std::memory_order_release);

            if (PlaceLauncher::getPlaceLauncher().getRbxView())
                PlaceLauncher::getPlaceLauncher().getRbxView()->setBounds(nw, nh);
        });

    panel->CompositionScaleChanged +=
        ref new Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::SwapChainPanel^, Platform::Object^>(
            [](Windows::UI::Xaml::Controls::SwapChainPanel^ p, Platform::Object^)
            {
                float eX = computeEffectiveScale(static_cast<float>(p->CompositionScaleX));
                float eY = computeEffectiveScale(static_cast<float>(p->CompositionScaleY));
                g_cachedCompScaleX.store(eX, std::memory_order_release);
                g_cachedCompScaleY.store(eY, std::memory_order_release);

                unsigned int nw = static_cast<unsigned int>(ceil(p->ActualWidth * eX));
                unsigned int nh = static_cast<unsigned int>(ceil(p->ActualHeight * eY));
                if (nw > 0 && nh > 0)
                {
                    g_cachedFbWidth.store(nw, std::memory_order_release);
                    g_cachedFbHeight.store(nh, std::memory_order_release);

                    if (PlaceLauncher::getPlaceLauncher().getRbxView())
                        PlaceLauncher::getPlaceLauncher().getRbxView()->setBounds(nw, nh);
                }
            });
}

void UWPPlatform::setLeaveGameCallback(std::function<void()> callback)
{
    RBX::getLeaveGameCallback() = callback;
}

void UWPPlatform::setGameReadyCallback(std::function<void()> callback)
{
    m_gameReadyCallback = std::move(callback);
}

void UWPPlatform::setGameFailedCallback(std::function<void()> callback)
{
    m_gameFailedCallback = std::move(callback);
}

void UWPPlatform::fireGameReady()
{
    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (!marshaller)
        return;

    marshaller->Submit([this]()
    {
        if (m_gameReadyCallback)
            m_gameReadyCallback();
    });
}

void UWPPlatform::fireGameFailed()
{
    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (!marshaller)
        return;

    marshaller->Submit([this]()
    {
        if (m_gameFailedCallback)
            m_gameFailedCallback();
    });
}

void UWPPlatform::HandleMemoryPressure()
{
    auto now = std::chrono::steady_clock::now();
    if (m_lastPressureGc != std::chrono::steady_clock::time_point()
        && (now - m_lastPressureGc) < std::chrono::seconds(20))
    {
        return;
    }
    m_lastPressureGc = now;

    RobloxView* rbxView = PlaceLauncher::getPlaceLauncher().getRbxView();
    if (rbxView == nullptr)
        return;

    uint64_t preBytes = RBX::MemoryStats::usedMemoryBytes();

    try
    {
        rbxView->getView()->garbageCollect();
    }
    catch (...) { }

    try
    {
        RBX::MemoryStats::releaseAllPoolMemory();
    }
    catch (...) { }

    uint64_t postBytes = RBX::MemoryStats::usedMemoryBytes();
    unsigned long long limit = 0;
    try
    {
        limit = Windows::System::MemoryManager::AppMemoryUsageLimit;
    }
    catch (Platform::Exception^) { }


    if (RBX::Graphics::RenderView* renderView = dynamic_cast<RBX::Graphics::RenderView*>(rbxView->getView()))
    {
        std::string tm = renderView->getRenderStatsMetric("RenderStatsTM");
        std::string tc = renderView->getRenderStatsMetric("RenderStatsTC");
        std::string clusters = renderView->getRenderStatsMetric("RenderStatsClusters");
        std::string scene = renderView->getRenderStatsMetric("RenderStatsPassScene");
        std::string res = renderView->getRenderStatsMetric("RenderStatsResolution");
        std::string frm = renderView->getRenderStatsMetric("RenderStatsFRMConfig");
    }
}

void UWPPlatform::onMemoryUsageIncreased()
{
    unsigned long long limit  = 0;
    unsigned long long usage  = 0;
    try
    {
        limit = Windows::System::MemoryManager::AppMemoryUsageLimit;
        usage = Windows::System::MemoryManager::AppMemoryUsage;
    }
    catch (Platform::Exception^) { return; }

    if (limit == 0)
        return;

    if (IsLowMemoryDevice())
    {
        double physFreeMB = getAvailablePhysicalRamBytes() / (1024.0 * 1024.0);
        if (physFreeMB < 60.0)
        {
            HandleMemoryPressure();
            ShedFrontendMemory();
            return;
        }
    }

    if (usage < limit)
    {
        unsigned long long freeBytes = limit - usage;
        const unsigned long long kHeadroomBytes = 30ull * 1024 * 1024;
        if (freeBytes >= kHeadroomBytes)
            return;
    }

    HandleMemoryPressure();
    ShedFrontendMemory();
}

void UWPPlatform::StartMemoryPressureMonitor()
{
    if (m_memPressureStarted)
        return;
    m_memPressureStarted = true;

    applyLowMemTuning();

    try
    {
        m_memUsageIncreasedToken = Windows::System::MemoryManager::AppMemoryUsageIncreased +=
            ref new Windows::Foundation::EventHandler<Platform::Object^>(
                [](Platform::Object^, Platform::Object^)
                {
                    GetInstance().onMemoryUsageIncreased();
                });
    }
    catch (Platform::Exception^ e)
    {
        (void)e;
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_WARNING,
            "UWP: AppMemoryUsageIncreased subscription failed");
    }

    try
    {
        m_memLimitChangingToken = Windows::System::MemoryManager::AppMemoryUsageLimitChanging +=
            ref new Windows::Foundation::EventHandler<
                Windows::System::AppMemoryUsageLimitChangingEventArgs^>(
                [](Platform::Object^, Windows::System::AppMemoryUsageLimitChangingEventArgs^ e)
                {
                    if (e != nullptr && e->NewLimit < Windows::System::MemoryManager::AppMemoryUsage)
                    {
                        GetInstance().HandleMemoryPressure();
                        GetInstance().ShedFrontendMemory();
                    }
                });
    }
    catch (Platform::Exception^ e)
    {
        (void)e;
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_WARNING,
            "UWP: AppMemoryUsageLimitChanging subscription failed");
    }

    try
    {
        m_memPressureTimer = ref new Windows::UI::Xaml::DispatcherTimer();
        Windows::Foundation::TimeSpan interval;
        interval.Duration = 50000000; // 5s in 100ns units
        m_memPressureTimer->Interval = interval;
        m_memPressureTimer->Tick +=
            ref new Windows::Foundation::EventHandler<Platform::Object^>(
                [](Platform::Object^, Platform::Object^)
                {
                    GetInstance().onMemoryUsageIncreased();
                });
        m_memPressureTimer->Start();
    }
    catch (Platform::Exception^) { }
}

void UWPPlatform::ShedFrontendMemory()
{
    auto window = Windows::UI::Xaml::Window::Current;
    if (window == nullptr || window->Dispatcher == nullptr)
    {
        return;
    }

    window->Dispatcher->RunAsync(
        Windows::UI::Core::CoreDispatcherPriority::Normal,
        ref new Windows::UI::Core::DispatchedHandler([]()
        {
            auto current = Windows::UI::Xaml::Window::Current;
            if (current == nullptr)
            {
                return;
            }

            auto hostFrame = dynamic_cast<Windows::UI::Xaml::Controls::Frame^>(current->Content);
            auto shell = (hostFrame != nullptr)
                ? dynamic_cast<Roblox::AppShell^>(hostFrame->Content)
                : nullptr;
            if (shell == nullptr)
            {
                return;
            }

            unsigned long long usageBefore = 0;
            try { usageBefore = Windows::System::MemoryManager::AppMemoryUsage; }
            catch (Platform::Exception^) { }

            shell->EvictCachedPages(1);

            unsigned long long usageAfter = 0;
            unsigned long long limit = 0;
            try
            {
                usageAfter = Windows::System::MemoryManager::AppMemoryUsage;
                limit = Windows::System::MemoryManager::AppMemoryUsageLimit;
            }
            catch (Platform::Exception^) { }

            const unsigned long long oneMB = 1024ull * 1024ull;
        }));
}

bool UWPPlatform::ShouldDropShellForGame() const
{
    if (IsLowMemoryDevice())
    {
        return true;
    }

    try
    {
        unsigned long long limit = Windows::System::MemoryManager::AppMemoryUsageLimit;
        unsigned long long usage = Windows::System::MemoryManager::AppMemoryUsage;
        if (limit == 0)
        {
            return false;
        }

        const unsigned long long kLaunchHeadroomBytes = 64ull * 1024 * 1024; // 64 MB
        return usage >= limit || (limit - usage) < kLaunchHeadroomBytes;
    }
    catch (Platform::Exception^)
    {
        return false;
    }
}
