//
// App.xaml.h
// Declaration of the App class.
//

#pragma once

#include "App.g.h"

namespace Roblox
{
	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	public ref class App sealed
	{
	internal:
		App();

	public:
		static Roblox::App^ GetInstance();

	protected:
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args) override;
		virtual void OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs^ args) override;

	private:
		Windows::UI::Xaml::Controls::Frame^ _rootFrame;
		Windows::UI::Xaml::DispatcherTimer^ _engineTickTimer;

		void EnsureRootFrame();
		void ShowSplashScreen();
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
		void OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e);
		void InstallVoiceCommands();

		void OnCompositionRendering(Platform::Object^ sender, Platform::Object^ args);

		void WireWindowFocusAnalytics();
	};
}
