//
// DirectXPage.xaml.cpp
// Implementation of the DirectXPage class.
//

#include "pch.h"
#include "DirectXPage.xaml.h"
#include <ppltasks.h>
#include <concrt.h>
#include "RobloxEngine/Engine.h"
#include "RobloxEngine/RendererBootstrap.h"

using namespace WP;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Graphics::Display;
using namespace Windows::System::Threading;
using namespace Windows::UI::Core;
using namespace Windows::UI::Input;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::Storage;
using namespace Windows::Storage::Pickers;
using namespace RobloxEngine;
using namespace concurrency;

DirectXPage::DirectXPage():
    m_coreInput(nullptr),
    m_engineActive(false),
    m_visibilityChangedToken(),
    m_dpiChangedToken(),
    m_orientationChangedToken(),
    m_displayInvalidatedToken(),
    m_compositionScaleChangedToken(),
    m_sizeChangedToken()
{
    InitializeComponent();

    // Register event handlers for page lifecycle.
    CoreWindow^ window = Window::Current->CoreWindow;

    m_visibilityChangedToken = window->VisibilityChanged +=
        ref new TypedEventHandler<CoreWindow^, VisibilityChangedEventArgs^>(this, &DirectXPage::OnVisibilityChanged);

    m_displayInfo = DisplayInformation::GetForCurrentView();

    m_dpiChangedToken = m_displayInfo->DpiChanged +=
        ref new TypedEventHandler<DisplayInformation^, Object^>(this, &DirectXPage::OnDpiChanged);

    m_orientationChangedToken = m_displayInfo->OrientationChanged +=
        ref new TypedEventHandler<DisplayInformation^, Object^>(this, &DirectXPage::OnOrientationChanged);

    m_displayInvalidatedToken = DisplayInformation::DisplayContentsInvalidated +=
        ref new TypedEventHandler<DisplayInformation^, Object^>(this, &DirectXPage::OnDisplayContentsInvalidated);

    m_compositionScaleChangedToken = swapChainPanel->CompositionScaleChanged +=
        ref new TypedEventHandler<SwapChainPanel^, Object^>(this, &DirectXPage::OnCompositionScaleChanged);

    m_sizeChangedToken = swapChainPanel->SizeChanged +=
        ref new SizeChangedEventHandler(this, &DirectXPage::OnSwapChainPanelSizeChanged);

    // At this point we have access to the device.
    m_deviceResources = std::make_shared<DX::DeviceResources>();
    m_deviceResources->SetSwapChainPanel(swapChainPanel);

    // Register our SwapChainPanel to get independent input pointer events
    auto workItemHandler = ref new WorkItemHandler([this] (IAsyncAction ^)
    {
        m_coreInput = swapChainPanel->CreateCoreIndependentInputSource(
            Windows::UI::Core::CoreInputDeviceTypes::Mouse |
            Windows::UI::Core::CoreInputDeviceTypes::Touch |
            Windows::UI::Core::CoreInputDeviceTypes::Pen
        );

        m_coreInput->PointerPressed += ref new TypedEventHandler<Object^, PointerEventArgs^>(this, &DirectXPage::OnPointerPressed);
        m_coreInput->PointerMoved += ref new TypedEventHandler<Object^, PointerEventArgs^>(this, &DirectXPage::OnPointerMoved);
        m_coreInput->PointerReleased += ref new TypedEventHandler<Object^, PointerEventArgs^>(this, &DirectXPage::OnPointerReleased);

        m_coreInput->Dispatcher->ProcessEvents(CoreProcessEventsOption::ProcessUntilQuit);
    });

    // Run task on a dedicated high priority background thread.
    m_inputLoopWorker = ThreadPool::RunAsync(workItemHandler, WorkItemPriority::High, WorkItemOptions::TimeSliced);

    // Create the template renderer host but do not start its render loop.
    // The native Engine will own the SwapChainPanel rendering to avoid contention/races.
    m_main = std::unique_ptr<WPMain>(new WPMain(m_deviceResources));

    // Create native engine instance (logic/utilities only; renderer will be owned by gfx)
    m_engine = ref new Engine();
    m_engine->SetDebugOverlayEnabled(true);

    // Start a UI timer to pull overlay text and display it
    m_logTimer = ref new Windows::UI::Xaml::DispatcherTimer();
    Windows::Foundation::TimeSpan ts; ts.Duration = 250 * 10000; // 250ms in 100-ns units
    m_logTimer->Interval = ts;
    m_logTimer->Tick += ref new Windows::Foundation::EventHandler<Platform::Object^>(this, &DirectXPage::OnLogTimerTick);
    m_logTimer->Start();
    
    // Auto-load particles7.rbxl on startup (particle12.rblx doesn't exist)
    RunEngineAsync(ref new Platform::String(L"ms-appx:///PlatformContent/wp/particles7.rbxl"));
}

DirectXPage::~DirectXPage()
{
	// Stop rendering and processing events on destruction.
	if (m_main)
	{
		m_main->StopRenderLoop();
	}
	// Stop overlay timer to avoid ticks after destruction
	if (m_logTimer)
	{
		try { m_logTimer->Stop(); } catch (...) {}
	}
	if (m_coreInput && m_coreInput->Dispatcher)
	{
		m_coreInput->Dispatcher->StopProcessEvents();
	}
}

// Saves the current state of the app for suspend and terminate events.
void DirectXPage::SaveInternalState(IPropertySet^ state)
{
    if (m_main)
    {
        critical_section::scoped_lock lock(m_main->GetCriticalSection());
        if (m_deviceResources) m_deviceResources->Trim();
        // Stop template loop only if engine not active (engine owns rendering otherwise)
        if (!m_engineActive)
            m_main->StopRenderLoop();
    }

	// Put code to save app state here.
}

// Loads the current state of the app for resume events.
void DirectXPage::LoadInternalState(IPropertySet^ state)
{
    // Put code to load app state here.
    // Do not restart template loop if engine is active
    if (m_main && !m_engineActive)
        m_main->StartRenderLoop();
}

// Window event handlers.

void DirectXPage::OnVisibilityChanged(CoreWindow^ sender, VisibilityChangedEventArgs^ args)
{
    m_windowVisible = args->Visible;
    if (!m_main) return;
    if (m_engineActive) return; // engine owns panel; template loop remains idle
    if (m_windowVisible)
    {
        m_main->StartRenderLoop();
    }
    else
    {
        m_main->StopRenderLoop();
    }
}

// DisplayInformation event handlers.

void DirectXPage::OnDpiChanged(DisplayInformation^ sender, Object^ args)
{
    if (!m_main || !m_deviceResources || m_engineActive) return;
    critical_section::scoped_lock lock(m_main->GetCriticalSection());
    m_deviceResources->SetDpi(sender->LogicalDpi);
    m_main->CreateWindowSizeDependentResources();
}

void DirectXPage::OnOrientationChanged(DisplayInformation^ sender, Object^ args)
{
    if (!m_main || !m_deviceResources || m_engineActive) return;
    critical_section::scoped_lock lock(m_main->GetCriticalSection());
    m_deviceResources->SetCurrentOrientation(sender->CurrentOrientation);
    m_main->CreateWindowSizeDependentResources();
}


void DirectXPage::OnDisplayContentsInvalidated(DisplayInformation^ sender, Object^ args)
{
    if (!m_main || !m_deviceResources || m_engineActive) return;
    critical_section::scoped_lock lock(m_main->GetCriticalSection());
    m_deviceResources->ValidateDevice();
}

void DirectXPage::OnPointerPressed(Object^ sender, PointerEventArgs^ e)
{
	// When the pointer is pressed begin tracking the pointer movement.
	if (m_main) m_main->StartTracking();
}

void DirectXPage::OnPointerMoved(Object^ sender, PointerEventArgs^ e)
{
	// Update the pointer tracking code.
	if (m_main && m_main->IsTracking())
	{
		m_main->TrackingUpdate(e->CurrentPoint->Position.X);
	}
}

void DirectXPage::OnPointerReleased(Object^ sender, PointerEventArgs^ e)
{
	// Stop tracking pointer movement when the pointer is released.
	if (m_main) m_main->StopTracking();
}

void DirectXPage::OnCompositionScaleChanged(SwapChainPanel^ sender, Object^ args)
{
    if (!m_main || !m_deviceResources || m_engineActive) return;
    critical_section::scoped_lock lock(m_main->GetCriticalSection());
    m_deviceResources->SetCompositionScale(sender->CompositionScaleX, sender->CompositionScaleY);
    m_main->CreateWindowSizeDependentResources();
}

void DirectXPage::OnSwapChainPanelSizeChanged(Object^ sender, SizeChangedEventArgs^ e)
{
    if (!m_main || !m_deviceResources || m_engineActive) return;
    critical_section::scoped_lock lock(m_main->GetCriticalSection());
    m_deviceResources->SetLogicalSize(e->NewSize);
    m_main->CreateWindowSizeDependentResources();
}

// Uncomment this if using the app bar in your phone application.
// Called when the app bar button is clicked.
//void DirectXPage::AppBarButton_Click(Object^ sender, RoutedEventArgs^ e)
//{
//	// Use the app bar if it is appropriate for your app. Design the app bar, 
//	// then fill in event handlers (like this one).
//}

// Two-button launcher handlers and engine run sequence
void DirectXPage::SelectPlaceButton_Click(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^)
{
    auto picker = ref new FileOpenPicker();
    picker->FileTypeFilter->Append(L".rbxl");
    picker->FileTypeFilter->Append(L".rbxlx");
    picker->FileTypeFilter->Append(L".rblx");
    create_task(picker->PickSingleFileAsync()).then([this](Windows::Storage::StorageFile^ file)
    {
        if (file != nullptr)
        {
            // Ensure we call into RunEngineAsync on the UI thread
            auto dispatcher = Windows::UI::Xaml::Window::Current->Dispatcher;
            if (!dispatcher) return;
            auto weakThis = Platform::WeakReference(this);
            dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal,
                ref new Windows::UI::Core::DispatchedHandler([weakThis, file]()
            {
                auto strong = weakThis.Resolve<WP::DirectXPage>();
                if (!strong) return;
                strong->RunEngineAsync(file->Path);
            }));
        }
    });
}

void DirectXPage::LoadBaseplateButton_Click(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^)
{
    auto uri = ref new Platform::String(L"ms-appx:///PlatformContent/wp/places/BasePlate.rbxl");
    RunEngineAsync(uri);
}

void DirectXPage::RunEngineAsync(Platform::String^ pathOrUri)
{
    // Transition UI -> Engine/Renderer
    LauncherPanel->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
    Overlay->Visibility = Windows::UI::Xaml::Visibility::Visible;

    // Stop the template render loop to avoid contention on the SwapChainPanel
    if (m_main)
    {
        m_main->StopRenderLoop();
    }
    // Unsubscribe UI/display events to prevent callbacks after engine takes ownership
    try
    {
        CoreWindow^ window = Window::Current ? Window::Current->CoreWindow : nullptr;
        if (window)
            window->VisibilityChanged -= m_visibilityChangedToken;
        if (m_displayInfo)
        {
            m_displayInfo->DpiChanged -= m_dpiChangedToken;
            m_displayInfo->OrientationChanged -= m_orientationChangedToken;
        }
        DisplayInformation::DisplayContentsInvalidated -= m_displayInvalidatedToken;
        // swapChainPanel is still valid here
        try { swapChainPanel->CompositionScaleChanged -= m_compositionScaleChangedToken; } catch (...) {}
        try { swapChainPanel->SizeChanged -= m_sizeChangedToken; } catch (...) {}
    }
    catch (...) {}

    // Stop input processing and release template resources so only the native engine owns the panel
    // First, drain UI dispatcher to ensure any pending DeviceResources association callbacks complete
    try
    {
        auto dispatcher = swapChainPanel ? swapChainPanel->Dispatcher : nullptr;
        if (dispatcher)
        {
            // Do not synchronously wait on the UI thread; only wait when we're off-thread
            if (!dispatcher->HasThreadAccess)
            {
                auto action = dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::High,
                    ref new Windows::UI::Core::DispatchedHandler([]() {}));
                concurrency::create_task(action).wait();
            }
        }
    }
    catch (...) {}
    if (m_coreInput && m_coreInput->Dispatcher)
    {
        m_coreInput->Dispatcher->StopProcessEvents();
    }
    m_coreInput = nullptr;
    m_main.reset();
    m_deviceResources.reset();

    // Hand SwapChainPanel to RBX gfx renderer bootstrap (owns device/swapchain & frame loop)
    m_engineActive = true; // template engine loop must remain idle
    if (!m_bootstrap)
        m_bootstrap.reset(new RobloxEngine::RendererBootstrap());
    
    // Connect Engine to RendererBootstrap so it can get FPS stats
    if (m_engine)
        m_engine->SetRendererBootstrapInternal(m_bootstrap.get());
    
    m_bootstrap->Start(swapChainPanel);
    
    // CRITICAL FIX: Force SwapChainPanel to recomposite after swap chain attachment
    OutputDebugStringA("[DirectXPage] ========================================\n");
    OutputDebugStringA("[DirectXPage] CHECKING SWAPCHAINPANEL STATE\n");
    OutputDebugStringA("[DirectXPage] ========================================\n");
    try
    {
        if (swapChainPanel)
        {
            char buf[512];
            
            // Check panel visibility and dimensions
            bool isVisible = (swapChainPanel->Visibility == Windows::UI::Xaml::Visibility::Visible);
            sprintf_s(buf, sizeof(buf), "[DirectXPage] Panel Visibility: %s\n", isVisible ? "VISIBLE" : "COLLAPSED");
            OutputDebugStringA(buf);
            
            double actualW = swapChainPanel->ActualWidth;
            double actualH = swapChainPanel->ActualHeight;
            sprintf_s(buf, sizeof(buf), "[DirectXPage] Panel ActualSize: %.1f x %.1f\n", actualW, actualH);
            OutputDebugStringA(buf);
            
            auto opacity = swapChainPanel->Opacity;
            sprintf_s(buf, sizeof(buf), "[DirectXPage] Panel Opacity: %.2f\n", opacity);
            OutputDebugStringA(buf);
            
            auto renderTransform = swapChainPanel->RenderTransform;
            sprintf_s(buf, sizeof(buf), "[DirectXPage] Panel RenderTransform: %p\n", renderTransform);
            OutputDebugStringA(buf);
            
            // Check CompositionScale (critical for SwapChainPanel)
            auto scaleX = swapChainPanel->CompositionScaleX;
            auto scaleY = swapChainPanel->CompositionScaleY;
            sprintf_s(buf, sizeof(buf), "[DirectXPage] Panel CompositionScale: %.3f x %.3f\n", scaleX, scaleY);
            OutputDebugStringA(buf);
            
            if (scaleX == 0.0f || scaleY == 0.0f)
            {
                OutputDebugStringA("[DirectXPage] *** WARNING: CompositionScale is ZERO! Panel not in visual tree! ***\n");
            }
            
            // CRITICAL: If panel has zero size, force parent layout update
            if (actualW == 0.0 || actualH == 0.0)
            {
                OutputDebugStringA("[DirectXPage] *** PANEL HAS ZERO SIZE - FORCING PARENT LAYOUT ***\n");
                
                // Force root visual tree layout
                auto rootFrame = dynamic_cast<Windows::UI::Xaml::Controls::Frame^>(Windows::UI::Xaml::Window::Current->Content);
                if (rootFrame)
                {
                    OutputDebugStringA("[DirectXPage] Forcing root frame UpdateLayout...\n");
                    rootFrame->UpdateLayout();
                }
                
                // Force this page layout
                this->UpdateLayout();
                
                // Re-check size
                actualW = swapChainPanel->ActualWidth;
                actualH = swapChainPanel->ActualHeight;
                sprintf_s(buf, sizeof(buf), "[DirectXPage] After layout force: Panel ActualSize: %.1f x %.1f\n", actualW, actualH);
                OutputDebugStringA(buf);
            }
            
            // Force multiple invalidations
            OutputDebugStringA("[DirectXPage] Forcing SwapChainPanel composition update...\n");
            swapChainPanel->InvalidateArrange();
            swapChainPanel->InvalidateMeasure();
            swapChainPanel->UpdateLayout();
            
            // Force opacity pulse to wake up compositor
            auto savedOpacity = swapChainPanel->Opacity;
            swapChainPanel->Opacity = 0.99;
            swapChainPanel->Opacity = savedOpacity;
            
            OutputDebugStringA("[DirectXPage] ✓ SwapChainPanel invalidation complete\n");
        }
        else
        {
            OutputDebugStringA("[DirectXPage] *** ERROR: swapChainPanel is NULL! ***\n");
        }
    }
    catch (Platform::Exception^ ex)
    {
        char buf[256];
        sprintf_s(buf, sizeof(buf), "[DirectXPage] EXCEPTION in panel check: 0x%08X\n", ex->HResult);
        OutputDebugStringA(buf);
    }
    catch (...)
    {
        OutputDebugStringA("[DirectXPage] WARNING: Failed to invalidate SwapChainPanel\n");
    }
    
    OutputDebugStringA("[DirectXPage] ========================================\n");
    
    Overlay->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

    // Load the place file bytes (async, happens in background)
    auto weakThis = Platform::WeakReference(this);
    create_task(m_engine->LoadFileBytesAsync(pathOrUri)).then([weakThis, pathOrUri, this](Platform::Array<byte>^ bytes)
    {
        // Store the bytes and defer actual loading until view is initialized
        // This is handled by RendererBootstrap after view initialization completes
        char debugBuf[512];
        sprintf_s(debugBuf, sizeof(debugBuf), "[DirectXPage] Place file bytes loaded! Size: %d bytes\n", bytes ? bytes->Length : 0);
        OutputDebugStringA(debugBuf);
        
        bool loaded = false;
        if (bytes && bytes->Length > 0 && this->m_bootstrap)
        {
            OutputDebugStringA("[DirectXPage] Calling LoadPlaceFromBytesDeferred...\n");
            loaded = this->m_bootstrap->LoadPlaceFromBytesDeferred(bytes->Data, bytes->Length);
            sprintf_s(debugBuf, sizeof(debugBuf), "[DirectXPage] LoadPlaceFromBytesDeferred returned: %s\n", loaded ? "SUCCESS" : "FAILED");
            OutputDebugStringA(debugBuf);
        }
        else
        {
            sprintf_s(debugBuf, sizeof(debugBuf), "[DirectXPage] Cannot load - bytes: %p, length: %d, bootstrap: %p\n", 
                     bytes, bytes ? bytes->Length : 0, this->m_bootstrap.get());
            OutputDebugStringA(debugBuf);
        }
        
        auto dispatcher = Windows::UI::Xaml::Window::Current->Dispatcher;
        if (!dispatcher) return;
        dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal,
            ref new Windows::UI::Core::DispatchedHandler([weakThis, loaded]()
        {
            auto strong = weakThis.Resolve<WP::DirectXPage>();
            if (!strong)
                return; // Page is gone; nothing to do
            if (!loaded)
            {
                // Keep renderer running; optionally re-show overlay if desired
                // strong->Overlay->Visibility = Windows::UI::Xaml::Visibility::Visible; // leave hidden for now
            }
        }));
    });
}

void DirectXPage::OnLogTimerTick(Platform::Object^ sender, Platform::Object^ args)
{
    if (!m_engine) return;
    auto text = m_engine->GetDebugOverlayText();
    if (text && text->Length() > 0)
    {
        LogOverlay->Text = text;
    }
}
