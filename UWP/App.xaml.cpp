//
// App.xaml.cpp
// Implementation of the App class.
//

#include "pch.h"
#include "App.xaml.h"
#include "Screens\\LandingPage.xaml.h"
#include "Screens\\RbxSplashScreen.xaml.h"
#include "Services\\AnalyticsService.h"
#include "UWPPlatform.h"
#include <winstring.h>

using namespace Roblox;

using namespace Platform;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Core;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Roblox::Views;
using namespace Windows::ApplicationModel::VoiceCommands;
using namespace Windows::Storage;
using namespace concurrency;

/// <summary>
/// Initializes the singleton application object.  This is the first line of authored code
/// executed, and as such is the logical equivalent of main() or WinMain().
/// </summary>
App::App()
{
    InitializeComponent();
    Suspending += ref new SuspendingEventHandler(this, &App::OnSuspending);
    InstallVoiceCommands();
}

void App::InstallVoiceCommands()
{
    try
    {
        const wchar_t* classNameStr = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager";
        UINT32 length = static_cast<UINT32>(wcslen(classNameStr));
        HSTRING_HEADER header;
        HSTRING hClassName;
        HRESULT hr = WindowsCreateStringReference(classNameStr, length, &header, &hClassName);
        
        if (SUCCEEDED(hr))
        {
            IInspectable* instance = nullptr;
            hr = RoActivateInstance(hClassName, &instance);
            
            if (FAILED(hr))
            {
                throw ref new COMException(hr);
            }
            
            if (instance != nullptr)
            {
                IInspectable* inspectable = instance;
                const wchar_t* methodNameStr = L"InstallCommandSetsFromStorageFileAsync";
                UINT32 methodLength = static_cast<UINT32>(wcslen(methodNameStr));
                HSTRING_HEADER methodHeader;
                HSTRING hMethodName;
                HRESULT methodHr = WindowsCreateStringReference(methodNameStr, methodLength, &methodHeader, &hMethodName);
                
                if (SUCCEEDED(methodHr))
                {
                    throw ref new COMException(0x80073D56);
                }
            }
        }
        else
        {
            throw ref new COMException(hr);
        }
    }
    catch (Exception^ ex)
    {
        OutputDebugStringW(L"Voice command manager initialization failed (expected): ");
        OutputDebugStringW(ex->Message->Data());
        OutputDebugStringW(L"\n");
    }
}

void App::EnsureRootFrame()
{
    auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);
    if (rootFrame == nullptr)
    {
        rootFrame = ref new Frame();
        rootFrame->NavigationFailed +=
            ref new NavigationFailedEventHandler(this, &App::OnNavigationFailed);
        Window::Current->Content = rootFrame;
    }

    _rootFrame = rootFrame;
}

void App::ShowSplashScreen()
{
    if (_rootFrame != nullptr && _rootFrame->Content == nullptr)
    {
        _rootFrame->Navigate(TypeName(RbxSplashScreen::typeid));
    }
}

Roblox::App^ App::GetInstance()
{
    return static_cast<Roblox::App^>(Application::Current);
}

/// <summary>
/// Invoked when the application is launched normally by the end user.  Other entry points
/// will be used such as when the application is launched to open a specific file.
/// </summary>
/// <param name="e">Details about the launch request and process.</param>
void App::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args)
{
#if _DEBUG
    // Show graphics profiling information while debugging.
    if (IsDebuggerPresent())
    {
        // Display the current frame rate counters
         DebugSettings->EnableFrameRateCounter = true;
    }
#endif
    EnsureRootFrame();

    if (args->PreviousExecutionState == ApplicationExecutionState::Terminated)
    {
        // Session restore can be added later if needed.
    }

    if (args->PrelaunchActivated == false)
    {
        ShowSplashScreen();
        Window::Current->Activate();
    }

    try
    {
        auto analytics = Roblox::AnalyticsService::GetInstance();
        analytics->ReportSession(
            /*isCrash=*/false,
            "UWP-ROBLOXPlayer-Session-Inferred-Success",
            1);
    }
    catch (Platform::COMException^)
    {
    }

    UWPPlatform::GetInstance().initialize();
    UWPPlatform::GetInstance().StartMemoryPressureMonitor();
    Windows::UI::Xaml::Media::CompositionTarget::Rendering +=
        ref new Windows::Foundation::EventHandler<Platform::Object^>(this, &App::OnCompositionRendering);

    _engineTickTimer = ref new Windows::UI::Xaml::DispatcherTimer();
    Windows::Foundation::TimeSpan engineTickInterval;
    engineTickInterval.Duration = 10 * 10000;
    _engineTickTimer->Interval = engineTickInterval;
    _engineTickTimer->Tick +=
        ref new Windows::Foundation::EventHandler<Platform::Object^>(this, &App::OnCompositionRendering);
    _engineTickTimer->Start();

    WireWindowFocusAnalytics();
}

void App::OnCompositionRendering(Platform::Object^ sender, Platform::Object^ args)
{
    (void)sender;
    (void)args;
    UWPPlatform::GetInstance().tick();
}

void App::WireWindowFocusAnalytics()
{
    auto window = Window::Current;
    if (window == nullptr)
    {
        return;
    }

    auto analytics = Roblox::AnalyticsService::GetInstance();

    window->Activated += ref new WindowActivatedEventHandler(
        [analytics](Object^ sender, WindowActivatedEventArgs^ e)
    {
        (void)sender;
        auto state = e->WindowActivationState;
        if (state == CoreWindowActivationState::CodeActivated ||
            state == CoreWindowActivationState::PointerActivated)
        {
            analytics->ReportFocusEvent(/*gained=*/true, 1);
        }
    });

    window->VisibilityChanged += ref new WindowVisibilityChangedEventHandler(
        [analytics](Object^ sender, VisibilityChangedEventArgs^ e)
    {
        (void)sender;
        analytics->ReportFocusEvent(/*gained=*/e->Visible, 1);
    });
}

void App::OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs^ args)
{
    if (args != nullptr && args->Kind == Windows::ApplicationModel::Activation::ActivationKind::VoiceCommand)
    {
        EnsureRootFrame();
        ShowSplashScreen();
        Window::Current->Activate();
    }
}

void App::OnSuspending(Object^ sender, SuspendingEventArgs^ e)
{
    (void) sender;  // Unused parameter
    (void) e;   // Unused parameter

    try
    {
        UWPPlatform::GetInstance().HandleMemoryPressure();
    }
    catch (...) { }
}

/// <summary>
/// Invoked when Navigation to a certain page fails
/// </summary>
/// <param name="sender">The Frame which failed navigation</param>
/// <param name="e">Details about the navigation failure</param>
void App::OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e)
{
    throw ref new FailureException("Failed to load Page " + e->SourcePageType.Name);
}
