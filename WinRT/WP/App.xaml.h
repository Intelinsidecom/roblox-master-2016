#pragma once

#include "App.g.h"
#include "Main.xaml.h"

namespace WP
{
    public ref class App sealed
    {
    public:
        App();
        virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args) override;

    private:
        void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
        void OnResuming(Platform::Object ^sender, Platform::Object ^args);
        Main^ m_mainPage;
    };
}
