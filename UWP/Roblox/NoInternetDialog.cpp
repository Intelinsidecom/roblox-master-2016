#include "pch.h"
#include "NoInternetDialog.h"
#include "ResourceStrings.h"

using namespace Windows::UI::Popups;
using namespace concurrency;

namespace Roblox
{
    bool NoInternetDialog::_visible = false;

    void NoInternetDialog::Show()
    {
        auto window = Windows::UI::Xaml::Window::Current;
        if (window == nullptr || window->Dispatcher == nullptr)
        {
            return;
        }

        window->Dispatcher->RunAsync(
            Windows::UI::Core::CoreDispatcherPriority::Normal,
            ref new Windows::UI::Core::DispatchedHandler([]()
        {
            ShowCore();
        }));
    }

    void NoInternetDialog::ShowCore()
    {
        if (_visible)
        {
            return;
        }
        _visible = true;

        try
        {
            auto dialog = ref new MessageDialog(
                GetResourceString(L"InternetConnectionRequired"),
                GetResourceString(L"InternetConnectionMissing"));

            create_task(dialog->ShowAsync()).then(
                [](concurrency::task<Windows::UI::Popups::IUICommand^> previousTask)
            {
                try
                {
                    previousTask.get();
                }
                catch (Platform::Exception^)
                {
                }
                _visible = false;
            });
        }
        catch (Platform::Exception^)
        {
            _visible = false;
        }
    }
}
