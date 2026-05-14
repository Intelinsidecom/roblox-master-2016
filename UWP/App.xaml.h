// App.xaml.h - Declaration of the App class
#pragma once

#include "App.g.h"

namespace Client
{
    ref class App sealed
    {
    public:
        App();

        virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args) override;

    private:
        Windows::UI::Xaml::Controls::Frame^ m_frame;
        void InitializePlatform();
    };
}
