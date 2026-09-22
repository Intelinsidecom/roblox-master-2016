#include "pch.h"
#include "Main.xaml.h"
#include "FastLog.h"

FASTFLAG(Durango3DBackground)

using namespace WP;

using namespace Platform;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Storage;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

App::App()
{
    InitializeComponent();
    Suspending += ref new SuspendingEventHandler(this, &App::OnSuspending);
    Resuming += ref new EventHandler<Object^>(this, &App::OnResuming);
}

void App::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args)
{
#if _DEBUG
    if (IsDebuggerPresent())
    {
        DebugSettings->EnableFrameRateCounter = true;
    }
#endif

    if (m_mainPage == nullptr)
    {
        m_mainPage = ref new Main();
    }

    if (args->PreviousExecutionState == ApplicationExecutionState::Terminated)
    {
        m_mainPage->LoadInternalState(ApplicationData::Current->LocalSettings->Values);
    }

    Window::Current->Content = m_mainPage;
    Window::Current->Activate();
}

void App::OnSuspending(Object^ sender, SuspendingEventArgs^ e)
{
    (void) sender;
    (void) e;

    m_mainPage->SaveInternalState(ApplicationData::Current->LocalSettings->Values);
}

void App::OnResuming(Object ^sender, Object ^args)
{
    (void) sender;
    (void) args;

    m_mainPage->LoadInternalState(ApplicationData::Current->LocalSettings->Values);
}
