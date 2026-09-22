//
// DirectXPage.xaml.h
// Declaration of the DirectXPage class.
//

#pragma once

#include "DirectXPage.g.h"

#include "Common\DeviceResources.h"
#include "WPMain.h"

// Forward declare the native WinRT component type (no visibility specifiers in forward decl)
namespace RobloxEngine { ref class Engine; }
namespace RobloxEngine { class RendererBootstrap; }

namespace WP
{
	/// <summary>
	/// A page that hosts a DirectX SwapChainPanel.
	/// </summary>
	public ref class DirectXPage sealed
	{
	public:
		DirectXPage();
		virtual ~DirectXPage();

		void SaveInternalState(Windows::Foundation::Collections::IPropertySet^ state);
		void LoadInternalState(Windows::Foundation::Collections::IPropertySet^ state);

	private:
		// XAML low-level rendering event handler.
		void OnRendering(Platform::Object^ sender, Platform::Object^ args);

		// Window event handlers.
		void OnVisibilityChanged(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::VisibilityChangedEventArgs^ args);

		// DisplayInformation event handlers.
		void OnDpiChanged(Windows::Graphics::Display::DisplayInformation^ sender, Platform::Object^ args);
		void OnOrientationChanged(Windows::Graphics::Display::DisplayInformation^ sender, Platform::Object^ args);
		void OnDisplayContentsInvalidated(Windows::Graphics::Display::DisplayInformation^ sender, Platform::Object^ args);

		// Other event handlers.
		void AppBarButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void OnCompositionScaleChanged(Windows::UI::Xaml::Controls::SwapChainPanel^ sender, Object^ args);
		void OnSwapChainPanelSizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);

		// Launcher button handlers
		void SelectPlaceButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void LoadBaseplateButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

		// Helper to run engine sequence
		void RunEngineAsync(Platform::String^ pathOrUri);

		// Debug log overlay timer
		void OnLogTimerTick(Platform::Object^ sender, Platform::Object^ args);

		// Track our independent input on a background worker thread.
		Windows::Foundation::IAsyncAction^ m_inputLoopWorker;
		Windows::UI::Core::CoreIndependentInputSource^ m_coreInput;

		// Independent input handling functions.
		void OnPointerPressed(Platform::Object^ sender, Windows::UI::Core::PointerEventArgs^ e);
		void OnPointerMoved(Platform::Object^ sender, Windows::UI::Core::PointerEventArgs^ e);
		void OnPointerReleased(Platform::Object^ sender, Windows::UI::Core::PointerEventArgs^ e);

		// Resources used to render the DirectX content in the XAML page background.
		std::shared_ptr<::DX::DeviceResources> m_deviceResources;
		std::unique_ptr<WPMain> m_main; 
		bool m_windowVisible;

		// Roblox native engine component
		RobloxEngine::Engine^ m_engine;
		// When true, native engine owns the SwapChainPanel and template loop must be idle
		bool m_engineActive;

		// RBX gfx renderer bootstrap (owns device/swapchain in Mode B)
		std::unique_ptr<RobloxEngine::RendererBootstrap> m_bootstrap;

		// Event bookkeeping to allow clean unsubscription when engine takes over
		Windows::Graphics::Display::DisplayInformation^ m_displayInfo;
		Windows::Foundation::EventRegistrationToken m_visibilityChangedToken;
		Windows::Foundation::EventRegistrationToken m_dpiChangedToken;
		Windows::Foundation::EventRegistrationToken m_orientationChangedToken;
		Windows::Foundation::EventRegistrationToken m_displayInvalidatedToken;
		Windows::Foundation::EventRegistrationToken m_compositionScaleChangedToken;
		Windows::Foundation::EventRegistrationToken m_sizeChangedToken;

		// Periodic poller for debug overlay text
		Windows::UI::Xaml::DispatcherTimer^ m_logTimer;
	};
}

