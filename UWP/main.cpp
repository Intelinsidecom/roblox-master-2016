#include "stdafx.h"
#include "UWPPlatform.h"

using namespace Windows::Foundation;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Core;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::UI::Core;

void dprintf(const char* fmt, ...)
{
    va_list va;
    va_start(va, fmt);
    char buffer[4096];
    vsnprintf(buffer, sizeof(buffer), fmt, va);
    va_end(va);
    OutputDebugStringA(buffer);
}

ref class ViewProvider sealed : public Windows::ApplicationModel::Core::IFrameworkView
{
public:
    ViewProvider();
    virtual ~ViewProvider();
    virtual void Initialize(CoreApplicationView^ applicationView);
    virtual void SetWindow(CoreWindow^ wnd);
    virtual void Load(Platform::String^ entryPoint);
    virtual void Run();
    virtual void Uninitialize();

protected:
    void OnActivated(CoreApplicationView^ applicationView, IActivatedEventArgs^ args);
    void OnSuspending(Platform::Object^ sender, SuspendingEventArgs^ args);
    void OnResuming(Platform::Object^ sender, Platform::Object^ args);
    void OnWindowClosed(CoreWindow^ sender, CoreWindowEventArgs^ args);
    void OnVisibilityChanged(CoreWindow^ sender, VisibilityChangedEventArgs^ args);

private:
    UWPPlatform* m_platform;
    CoreWindow^ m_window;
    bool m_windowClosed;
    bool m_windowVisible;
};

ref class ViewProviderFactory sealed : IFrameworkViewSource
{
public:
    ViewProviderFactory() {}
    virtual IFrameworkView^ CreateView() { return ref new ViewProvider(); }
};

//////////////////////////////////////////////////////////////////////////

ViewProvider::ViewProvider()
    : m_platform(nullptr)
    , m_window(nullptr)
    , m_windowClosed(false)
    , m_windowVisible(true)
{
}

ViewProvider::~ViewProvider()
{
    if (m_platform)
    {
        delete m_platform;
        m_platform = nullptr;
    }
}

void ViewProvider::Initialize(CoreApplicationView^ applicationView)
{
    applicationView->Activated += 
        ref new TypedEventHandler<CoreApplicationView^, IActivatedEventArgs^>(
            this, &ViewProvider::OnActivated);

    CoreApplication::Suspending += 
        ref new EventHandler<SuspendingEventArgs^>(
            this, &ViewProvider::OnSuspending);
    CoreApplication::Resuming += 
        ref new EventHandler<Platform::Object^>(
            this, &ViewProvider::OnResuming);
}

void ViewProvider::SetWindow(CoreWindow^ wnd)
{
    m_window = wnd;

    m_window->Closed += 
        ref new TypedEventHandler<CoreWindow^, CoreWindowEventArgs^>(
            this, &ViewProvider::OnWindowClosed);
    m_window->VisibilityChanged += 
        ref new TypedEventHandler<CoreWindow^, VisibilityChangedEventArgs^>(
            this, &ViewProvider::OnVisibilityChanged);

    m_platform = new UWPPlatform();
}

void ViewProvider::Load(Platform::String^ entryPoint)
{
}

void ViewProvider::Run()
{
    m_platform->initialize();

    if (m_platform && m_platform->getMarshaller())
    {
        m_platform->getMarshaller()->process();
    }

    while (!m_windowClosed)
    {
        m_window->Dispatcher->ProcessEvents(
            CoreProcessEventsOption::ProcessAllIfPresent);

        if (m_platform && m_windowVisible)
        {
            m_platform->tick();
        }
        else
        {
            Platform::Details::Console::WriteLine("Window not visible, sleeping...");
            Sleep(100);
        }
    }
}

void ViewProvider::Uninitialize()
{
    if (m_platform)
    {
        m_platform->shutdown();
        delete m_platform;
        m_platform = nullptr;
    }
}

void ViewProvider::OnActivated(CoreApplicationView^ applicationView, IActivatedEventArgs^ args)
{
    m_window->Activate();
}

void ViewProvider::OnSuspending(Platform::Object^ sender, SuspendingEventArgs^ args)
{
    RBX::GlobalBasicSettings::singleton()->saveState();
    RBX::GlobalAdvancedSettings::singleton()->saveState();
}

void ViewProvider::OnResuming(Platform::Object^ sender, Platform::Object^ args)
{
}

void ViewProvider::OnWindowClosed(CoreWindow^ sender, CoreWindowEventArgs^ args)
{
    m_windowClosed = true;
}

void ViewProvider::OnVisibilityChanged(CoreWindow^ sender, VisibilityChangedEventArgs^ args)
{
    m_windowVisible = args->Visible;
}

//////////////////////////////////////////////////////////////////////////

// Main entry point
[Platform::MTAThread]
int main(Platform::Array<Platform::String^>^ args)
{
    CoreApplication::Run(ref new ViewProviderFactory());
    return 0;
}
