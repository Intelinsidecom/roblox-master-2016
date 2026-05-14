// MainPage.xaml.h - Declaration of the MainPage class
#pragma once

#include "MainPage.g.h"

// Forward declaration
class UWPPlatform;

namespace Client
{
    public ref class MainPage sealed
    {
    public:
        MainPage();

        // Add a log message to the display
        void AddLogMessage(Platform::String^ message);

        // Clear all log messages
        void ClearLog();

        // Get the SwapChainPanel for DirectX rendering
        Windows::UI::Xaml::Controls::SwapChainPanel^ GetSwapChainPanel();

        // Hide the startup menu and show the game
        void HideStartupMenu();

    internal:
        // Set the platform instance for game loop
        void SetPlatform(UWPPlatform* platform);

        // Update the loading status text displayed under the progress ring
        void UpdateLoadingStatus(Platform::String^ status);

    private:
        // Event handler for close button
        void OnCloseLogClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

        // Event handler for start button
        void OnStartClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

        // Game loop event handler
        void OnRendering(Platform::Object^ sender, Platform::Object^ args);

        Windows::UI::Xaml::Controls::TextBox^ m_logTextBox;
        Windows::UI::Xaml::Controls::ScrollViewer^ m_logScrollViewer;
        Windows::UI::Xaml::Controls::SwapChainPanel^ m_swapChainPanel;
        Windows::UI::Xaml::Controls::TextBlock^ m_loadingStatusText;
        UWPPlatform* m_platform;
    };

    // Helper function to convert Platform::String to std::string
    std::string PlatformStringToStdString(Platform::String^ str);
}
