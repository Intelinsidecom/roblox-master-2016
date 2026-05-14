// MainPage.xaml.cpp - Implementation of the MainPage class

#include "pch.h"
#include "MainPage.xaml.h"
#include "UWPPlatform.h"

#include <ctime>
#include <cstring>

using namespace Client;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Media::Imaging;
using namespace Windows::UI::Xaml::Navigation;

MainPage::MainPage()
    : m_platform(nullptr)
{
    InitializeComponent();
    m_logTextBox = LogTextBox;
    m_logScrollViewer = LogScrollViewer;
    m_swapChainPanel = SwapChainPanel;
    m_loadingStatusText = LoadingStatusText;

    Windows::UI::Xaml::Media::CompositionTarget::Rendering += ref new Windows::Foundation::EventHandler<Platform::Object^>(this, &MainPage::OnRendering);
}

void Client::MainPage::UpdateLoadingStatus(Platform::String^ status)
{
    if (m_loadingStatusText)
        m_loadingStatusText->Text = status;
}

void Client::MainPage::SetPlatform(UWPPlatform* platform)
{
    m_platform = platform;
}

void Client::MainPage::AddLogMessage(Platform::String^ message)
{
    Platform::String^ currentText = m_logTextBox->Text;
    time_t now = time(nullptr);
    struct tm timeinfo;
    localtime_s(&timeinfo, &now);
    char timeBuf[32];
    strftime(timeBuf, sizeof(timeBuf), "[%H:%M:%S] ", &timeinfo);

    std::wstring wtimeBuf(timeBuf, timeBuf + strlen(timeBuf));
    Platform::String^ timeStr = ref new Platform::String(wtimeBuf.c_str());
    Platform::String^ newText = currentText + timeStr + message + "\r\n";

    m_logTextBox->Text = newText;
    m_logScrollViewer->ChangeView(nullptr, m_logScrollViewer->ExtentHeight, nullptr);
}

void Client::MainPage::ClearLog()
{
    m_logTextBox->Text = "";
}

void Client::MainPage::OnCloseLogClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    auto parent = safe_cast<Grid^>(m_logScrollViewer->Parent);
    parent->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
}

void Client::MainPage::OnStartClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    if (m_platform)
    {
        LoadingGrid->Visibility = Windows::UI::Xaml::Visibility::Visible;

        m_platform->setLoadingStatusCallback([this](const std::string& status) {
            std::wstring wstatus(status.begin(), status.end());
            Platform::String^ pstatus = ref new Platform::String(wstatus.c_str());
            this->Dispatcher->RunAsync(
                Windows::UI::Core::CoreDispatcherPriority::Normal,
                ref new Windows::UI::Core::DispatchedHandler([this, pstatus]() {
                    UpdateLoadingStatus(pstatus);
                }));
        });

        m_platform->initialize();
    }
}

void Client::MainPage::HideStartupMenu()
{
    StartupMenu->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	LoadingGrid->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
}

Windows::UI::Xaml::Controls::SwapChainPanel^ Client::MainPage::GetSwapChainPanel()
{
    return m_swapChainPanel;
}

void Client::MainPage::OnRendering(Platform::Object^ sender, Platform::Object^ args)
{
    if (m_platform)
    {
        m_platform->tick();
    }
}

std::string Client::PlatformStringToStdString(Platform::String^ str)
{
    if (!str)
        return "";

    const wchar_t* chars = str->Data();
    int size = WideCharToMultiByte(CP_UTF8, 0, chars, -1, NULL, 0, NULL, NULL);
    std::string result(size - 1, 0);
    WideCharToMultiByte(CP_UTF8, 0, chars, -1, &result[0], size, NULL, NULL);
    return result;
}
