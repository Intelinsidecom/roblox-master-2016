// App.xaml.cpp - Implementation of the App class

#include "pch.h"
#include "App.xaml.h"
#include "MainPage.xaml.h"
#include "UWPPlatform.h"

using namespace Client;

using namespace Platform;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Core;
using namespace Windows::UI::Xaml::Interop;

static ::UWPPlatform* g_platform = nullptr;

App::App()
{
    InitializeComponent();
}

void App::OnLaunched(LaunchActivatedEventArgs^ args)
{
    m_frame = ref new Frame();
    Window::Current->Content = m_frame;

    if (m_frame->Content == nullptr)
    {
        m_frame->Navigate(TypeName(MainPage::typeid), args->Arguments);
    }

    Window::Current->Activate();
    InitializePlatform();
}

void App::InitializePlatform()
{
    g_platform = new ::UWPPlatform();
    MainPage^ mainPage = safe_cast<MainPage^>(m_frame->Content);
    mainPage->SetPlatform(g_platform);
    Windows::UI::Xaml::Controls::SwapChainPanel^ swapChainPanel = mainPage->GetSwapChainPanel();

    g_platform->setSwapChainPanel(swapChainPanel);
    g_platform->setLogCallback([mainPage](const std::string& message) {
        mainPage->Dispatcher->RunAsync(CoreDispatcherPriority::Normal,
            ref new DispatchedHandler([mainPage, message]() {
                mainPage->AddLogMessage(ref new String(std::wstring(message.begin(), message.end()).c_str()));
            }));
    });

    g_platform->setRenderingInitializedCallback([mainPage]() {
        mainPage->Dispatcher->RunAsync(CoreDispatcherPriority::Normal,
            ref new DispatchedHandler([mainPage]() {
                mainPage->HideStartupMenu();
            }));
    });
}
