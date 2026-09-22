#include "pch.h"
#include "Main.xaml.h"
#include "Engine/PhonePlatform.h"
#include "Engine/EngineHost.h"
#include "Engine/GameView.h"
#include "Engine/WPFunctionMarshaller.h"

#include <stdio.h>
#include "FastLog.h"
#include "util/standardout.h"

FASTFLAG(Durango3DBackground)

using namespace WP;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Graphics::Display;
using namespace Windows::UI::Core;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;

namespace
{
    void OutputLine(const char* msg)
    {
        if (IsDebuggerPresent())
        {
            OutputDebugStringA(msg);
            OutputDebugStringA("\n");
        }
    }
}

Main::Main():
    m_engineActive(false),
    m_engineStarted(false)
{
    InitializeComponent();

    swapChainPanel->SizeChanged +=
        ref new SizeChangedEventHandler(this, &Main::OnSwapChainPanelSizeChanged);

    auto weakRendering = WeakReference(this);
    CompositionTarget::Rendering +=
        ref new EventHandler<Object^>([weakRendering](Object^ sender, Object^ args)
    {
        auto strong = weakRendering.Resolve<WP::Main>();
        if (!strong) return;
        strong->OnRendering(sender, args);
    });

    auto weakThisForCallbacks = WeakReference(this);
    PhonePlatform::GetInstance().setGameReadyCallback([weakThisForCallbacks]()
    {
        auto strong = weakThisForCallbacks.Resolve<WP::Main>();
        if (!strong) return;
    });
    PhonePlatform::GetInstance().setGameFailedCallback([weakThisForCallbacks]()
    {
        auto strong = weakThisForCallbacks.Resolve<WP::Main>();
        if (!strong) return;
    });

    auto weakThis = WeakReference(this);
    swapChainPanel->Loaded += ref new RoutedEventHandler(
        [weakThis](Object^, RoutedEventArgs^)
        {
            auto strong = weakThis.Resolve<WP::Main>();
            if (!strong || strong->m_engineStarted)
            {
                return;
            }

            if (!FFlag::Durango3DBackground)
            {
                return;
            }
            strong->m_engineStarted = true;
            strong->m_engineActive = true;

            try
            {
                PhonePlatform::GetInstance().initialize();
                PhonePlatform::GetInstance().setSwapChainPanel(strong->swapChainPanel);

                unsigned int w = 800, h = 600;
                getWPFramebufferSize(&w, &h);
                void* panel = getWPSwapChainPanel();
                if (!panel)
                {
                    PhonePlatform::GetInstance().fireGameFailed();
                    return;
                }

                String^ installPath =
                    Windows::ApplicationModel::Package::Current->InstalledLocation->Path;
                std::wstring wInstall(installPath->Begin(), installPath->End());
                std::string assetFolder(wInstall.begin(), wInstall.end());
                assetFolder += "\\content";

                EngineHost::Params bgp;
                bgp.viewWidth = static_cast<int>(w);
                bgp.viewHeight = static_cast<int>(h);
                bgp.panel = panel;
                bgp.assetFolderPath = assetFolder;

                if (!EngineHost::Start(bgp))
                {
                    PhonePlatform::GetInstance().fireGameFailed();
                }
            }
            catch (const std::exception& e)
            {
                OutputLine(e.what());
                PhonePlatform::GetInstance().fireGameFailed();
            }
            catch (...)
            {
                OutputLine("Engine: unknown exception");
                PhonePlatform::GetInstance().fireGameFailed();
            }
        });
}

Main::~Main()
{
    PhonePlatform::GetInstance().setGameReadyCallback(nullptr);
    PhonePlatform::GetInstance().setGameFailedCallback(nullptr);
    EngineHost::Stop();
}

void Main::OnRendering(Object^ sender, Object^ args)
{
    if (m_engineActive)
        PhonePlatform::GetInstance().tick();
}

void Main::SaveInternalState(IPropertySet^ state)
{
    if (!m_engineActive)
        return;
    if (GameView* v = EngineHost::GetView())
        v->requestStopRendering();
}

void Main::LoadInternalState(IPropertySet^ state)
{
    if (!m_engineActive)
        return;
    if (GameView* v = EngineHost::GetView())
        v->requestResumeRendering();
}

void Main::OnSwapChainPanelSizeChanged(Object^ sender, SizeChangedEventArgs^ e)
{
    if (m_engineActive)
    {
        if (e->NewSize.Width > 0 && e->NewSize.Height > 0)
        {
            unsigned int w = 0, h = 0;
            getWPFramebufferSize(&w, &h);
            if (w > 0 && h > 0)
                if (GameView* v = EngineHost::GetView())
                    v->setBounds(w, h);
        }
    }
}

void Main::ShowOverlay(Platform::String^ name)
{
    HideOverlay();
    if (name == "Login" && LoginPanel)
        LoginPanel->Visibility = Windows::UI::Xaml::Visibility::Visible;
    else if (name == "Menu" && MenuPanel)
        MenuPanel->Visibility = Windows::UI::Xaml::Visibility::Visible;
    else if (name == "Home" && HomePanel)
        HomePanel->Visibility = Windows::UI::Xaml::Visibility::Visible;
    if (OverlayRoot)
        OverlayRoot->Visibility = Windows::UI::Xaml::Visibility::Visible;
}

void Main::HideOverlay()
{
    if (LoginPanel)  LoginPanel->Visibility  = Windows::UI::Xaml::Visibility::Collapsed;
    if (MenuPanel)   MenuPanel->Visibility   = Windows::UI::Xaml::Visibility::Collapsed;
    if (HomePanel)   HomePanel->Visibility   = Windows::UI::Xaml::Visibility::Collapsed;
    if (OverlayRoot) OverlayRoot->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
}
