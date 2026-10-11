#include "stdafx.h"
#include "KeyboardProvider.h"

#include "XboxService.h"
#include "XboxUtils.h"
#include "async.h"

#include <agile.h>

#include <thread>

#include "v8datamodel/TextBox.h"

using namespace RBX;

namespace
{
    namespace WTextCore        = Windows::UI::Text::Core;
    namespace WViewMgmt        = Windows::UI::ViewManagement;
    namespace WCoreUI          = Windows::UI::Core;
    namespace WAppCore         = Windows::ApplicationModel::Core;
    namespace WSystemThreading = Windows::System::Threading;

    // The XDK system keyboard capped input at 512 characters by default.
    const size_t kMaxKeyboardTextLength = 512;

    struct KeyboardSession
    {
        Platform::Agile<WTextCore::CoreTextEditContext^> editContext;
        Platform::Agile<WViewMgmt::InputPane^> inputPane;
        Platform::Agile<WSystemThreading::ThreadPoolTimer^> watchdog;

        std::wstring text;
        WTextCore::CoreTextRange selection;
        WTextCore::CoreTextInputScope inputScope;

        std::function<void(Platform::String^)> onSuccess;
        std::function<void(void)> onCancel;

        Windows::Foundation::EventRegistrationToken tokTextUpdating;
        Windows::Foundation::EventRegistrationToken tokTextRequested;
        Windows::Foundation::EventRegistrationToken tokSelectionRequested;
        Windows::Foundation::EventRegistrationToken tokSelectionUpdating;
        Windows::Foundation::EventRegistrationToken tokFocusRemoved;
        Windows::Foundation::EventRegistrationToken tokLayoutRequested;
        Windows::Foundation::EventRegistrationToken tokPaneShowing;
        Windows::Foundation::EventRegistrationToken tokPaneHiding;
        Windows::Foundation::EventRegistrationToken tokKeyDown;

        volatile long completed;
        bool paneShown;

        KeyboardSession()
            : inputScope(WTextCore::CoreTextInputScope::Default)
            , completed(0)
            , paneShown(false)
        {
            selection.StartCaretPosition = 0;
            selection.EndCaretPosition = 0;
        }
    };

    KeyboardSession g_session;

    void finishKeyboardSession(bool success);
    void completeKeyboardSession(bool success);

    bool isXboxDeviceFamily()
    {
        static bool xbox = []() -> bool
        {
            try
            {
                Platform::String^ family = Windows::System::Profile::AnalyticsInfo::VersionInfo->DeviceFamily;
                return family && (wcscmp(family->Data(), L"Windows.Xbox") == 0);
            }
            catch (Platform::Exception^)
            {
                return false;
            }
        }();
        return xbox;
    }

    WCoreUI::CoreDispatcher^ mainViewDispatcher()
    {
        try
        {
            return WAppCore::CoreApplication::MainView->Dispatcher;
        }
        catch (Platform::Exception^)
        {
            return nullptr;
        }
    }

    int clampedCaret(int value)
    {
        if (value < 0)
            return 0;
        const int length = static_cast<int>(g_session.text.size());
        return value > length ? length : value;
    }

    WTextCore::CoreTextInputScope mapInputScope(RBX::XboxKeyBoardType keyboardType)
    {
        switch (keyboardType)
        {
        case RBX::xbKeyBoard_Default:
            return WTextCore::CoreTextInputScope::Default;
        case RBX::xbKeyBoard_EmailSmtpAddress:
            return WTextCore::CoreTextInputScope::EmailAddress;
        case RBX::xbKeyBoard_Number:
            return WTextCore::CoreTextInputScope::Number;
        case RBX::xbKeyBoard_Password:
            return WTextCore::CoreTextInputScope::Password;
        case RBX::xbKeyBoard_Search:
            return WTextCore::CoreTextInputScope::Search;
        case RBX::xbKeyBoard_TelephoneNumber:
            return WTextCore::CoreTextInputScope::TelephoneNumber;
        case RBX::xbKeyBoard_Url:
            return WTextCore::CoreTextInputScope::Url;
        default:
            RBXASSERT(false); // new type?
            return WTextCore::CoreTextInputScope::Default;
        }
    }

    void finishKeyboardSession(bool success)
    {
        if (g_session.watchdog.Get())
        {
            try { g_session.watchdog.Get()->Cancel(); } catch (Platform::Exception^) {}
            g_session.watchdog = nullptr;
        }

        WTextCore::CoreTextEditContext^ editContext = g_session.editContext.Get();
        if (editContext)
        {
            try
            {
                editContext->TextUpdating       -= g_session.tokTextUpdating;
                editContext->TextRequested      -= g_session.tokTextRequested;
                editContext->SelectionRequested -= g_session.tokSelectionRequested;
                editContext->SelectionUpdating  -= g_session.tokSelectionUpdating;
                editContext->FocusRemoved       -= g_session.tokFocusRemoved;
                editContext->LayoutRequested    -= g_session.tokLayoutRequested;
            }
            catch (Platform::Exception^) {}
            try { editContext->NotifyFocusLeave(); } catch (Platform::Exception^) {}
        }
        g_session.editContext = nullptr;

        WViewMgmt::InputPane^ inputPane = g_session.inputPane.Get();
        if (inputPane)
        {
            try
            {
                inputPane->Showing -= g_session.tokPaneShowing;
                inputPane->Hiding  -= g_session.tokPaneHiding;
            }
            catch (Platform::Exception^) {}
            try { inputPane->TryHide(); } catch (Platform::Exception^) {}
        }
        g_session.inputPane = nullptr;

        WCoreUI::CoreWindow^ coreWindow = WCoreUI::CoreWindow::GetForCurrentThread();
        if (coreWindow)
        {
            try { coreWindow->KeyDown -= g_session.tokKeyDown; } catch (Platform::Exception^) {}
        }

        std::function<void(Platform::String^)> successFn;
        std::function<void(void)> cancelFn;
        std::swap(successFn, g_session.onSuccess);
        std::swap(cancelFn, g_session.onCancel);

        if (success)
        {
            if (successFn)
                successFn(ref new Platform::String(g_session.text.c_str()));
        }
        else if (cancelFn)
        {
            cancelFn();
        }

        g_session.text.clear();
        g_session.selection.StartCaretPosition = 0;
        g_session.selection.EndCaretPosition = 0;
        g_session.paneShown = false;
    }

    void completeKeyboardSession(bool success)
    {
        if (InterlockedCompareExchange(&g_session.completed, 1, 0))
            return;

        WCoreUI::CoreDispatcher^ dispatcher = mainViewDispatcher();
        if (!dispatcher)
        {
            finishKeyboardSession(success);
            return;
        }

        dispatcher->RunAsync(WCoreUI::CoreDispatcherPriority::Normal,
            ref new WCoreUI::DispatchedHandler([success]()
        {
            finishKeyboardSession(success);
        }));
    }

    void armKeyboardWatchdog()
    {
        if (!isXboxDeviceFamily())
            return;

        Windows::Foundation::TimeSpan delay;
        delay.Duration = 15000000;

        WSystemThreading::TimerElapsedHandler^ handler = ref new WSystemThreading::TimerElapsedHandler(
            [](WSystemThreading::ThreadPoolTimer^)
        {
            if (g_session.completed || g_session.paneShown)
                return;

            WCoreUI::CoreDispatcher^ dispatcher = mainViewDispatcher();
            if (!dispatcher)
                return;

            dispatcher->RunAsync(WCoreUI::CoreDispatcherPriority::Normal,
                ref new WCoreUI::DispatchedHandler([]()
            {
                if (!g_session.completed && !g_session.paneShown)
                    completeKeyboardSession(false);
            }));
        });

        try
        {
            g_session.watchdog = WSystemThreading::ThreadPoolTimer::CreateTimer(handler, delay);
        }
        catch (Platform::Exception^ e)
        {
            dprintf("showKeyBoard: watchdog timer failed 0x%x\n", e->HResult);
        }
    }

    void onTextUpdating(WTextCore::CoreTextTextUpdatingEventArgs^ args)
    {
        if (g_session.completed)
        {
            args->Result = WTextCore::CoreTextTextUpdatingResult::Failed;
            return;
        }

        Platform::String^ incoming = args->Text;
        const wchar_t* data = incoming ? incoming->Data() : L"";
        const unsigned int incomingLength = incoming ? incoming->Length() : 0;

        for (unsigned int i = 0; i < incomingLength; ++i)
        {
            if (data[i] == L'\r' || data[i] == L'\n')
            {
                args->Result = WTextCore::CoreTextTextUpdatingResult::Failed;
                completeKeyboardSession(true);
                return;
            }
        }

        int start = clampedCaret(args->Range.StartCaretPosition);
        int end = clampedCaret(args->Range.EndCaretPosition);
        if (end < start)
            std::swap(start, end);

        if (g_session.text.size() - static_cast<size_t>(end - start) + incomingLength > kMaxKeyboardTextLength)
        {
            args->Result = WTextCore::CoreTextTextUpdatingResult::Failed;
            return;
        }

        g_session.text.replace(g_session.text.begin() + start, g_session.text.begin() + end,
            data, data + incomingLength);

        WTextCore::CoreTextRange newSelection = args->NewSelection;
        newSelection.StartCaretPosition = clampedCaret(newSelection.StartCaretPosition);
        newSelection.EndCaretPosition = clampedCaret(newSelection.EndCaretPosition);
        g_session.selection = newSelection;

        args->Result = WTextCore::CoreTextTextUpdatingResult::Succeeded;
    }

    void onTextRequested(WTextCore::CoreTextTextRequestedEventArgs^ args)
    {
        WTextCore::CoreTextTextRequest^ request = args->Request;

        int start = clampedCaret(request->Range.StartCaretPosition);
        int end = clampedCaret(request->Range.EndCaretPosition);
        if (end < start)
            std::swap(start, end);

        request->Text = ref new Platform::String(g_session.text.c_str() + start,
            static_cast<unsigned int>(end - start));
    }

    void onSelectionRequested(WTextCore::CoreTextSelectionRequestedEventArgs^ args)
    {
        args->Request->Selection = g_session.selection;
    }

    void onSelectionUpdating(WTextCore::CoreTextSelectionUpdatingEventArgs^ args)
    {
        if (g_session.completed)
        {
            args->Result = WTextCore::CoreTextSelectionUpdatingResult::Failed;
            return;
        }

        WTextCore::CoreTextRange selection = args->Selection;
        selection.StartCaretPosition = clampedCaret(selection.StartCaretPosition);
        selection.EndCaretPosition = clampedCaret(selection.EndCaretPosition);
        g_session.selection = selection;

        args->Result = WTextCore::CoreTextSelectionUpdatingResult::Succeeded;
    }

    void onLayoutRequested(WTextCore::CoreTextLayoutRequestedEventArgs^ args)
    {
        WTextCore::CoreTextLayoutBounds^ bounds = args->Request->LayoutBounds;
        if (!bounds)
            return;

        WCoreUI::CoreWindow^ window = WCoreUI::CoreWindow::GetForCurrentThread();
        if (!window)
            return;

        Windows::Foundation::Rect windowBounds = window->Bounds;
        Windows::Foundation::Rect rect(
            windowBounds.X,
            windowBounds.Y + windowBounds.Height * 0.66f,
            windowBounds.Width,
            windowBounds.Height * 0.34f);

        bounds->ControlBounds = rect;
        bounds->TextBounds = rect;
    }

    void onFocusRemoved(WTextCore::CoreTextEditContext^, Platform::Object^)
    {
        completeKeyboardSession(false);
    }

    void armKeyboardSession()
    {
        WTextCore::CoreTextServicesManager^ manager = nullptr;
        try
        {
            manager = WTextCore::CoreTextServicesManager::GetForCurrentView();
        }
        catch (Platform::Exception^ e)
        {
            dprintf("showKeyBoard: CoreTextServicesManager failed 0x%x\n", e->HResult);
        }
        if (!manager)
        {
            completeKeyboardSession(false);
            return;
        }

        WTextCore::CoreTextEditContext^ context = manager->CreateEditContext();
        if (!context)
        {
            completeKeyboardSession(false);
            return;
        }

        context->InputPaneDisplayPolicy = WTextCore::CoreTextInputPaneDisplayPolicy::Manual;
        context->InputScope = g_session.inputScope;
        context->Name = ref new Platform::String(L"RobloxTextBox");
        g_session.editContext = context;

        g_session.tokTextUpdating = context->TextUpdating +=
            ref new Windows::Foundation::TypedEventHandler<WTextCore::CoreTextEditContext^, WTextCore::CoreTextTextUpdatingEventArgs^>(
                [](WTextCore::CoreTextEditContext^, WTextCore::CoreTextTextUpdatingEventArgs^ args) { onTextUpdating(args); });

        g_session.tokTextRequested = context->TextRequested +=
            ref new Windows::Foundation::TypedEventHandler<WTextCore::CoreTextEditContext^, WTextCore::CoreTextTextRequestedEventArgs^>(
                [](WTextCore::CoreTextEditContext^, WTextCore::CoreTextTextRequestedEventArgs^ args) { onTextRequested(args); });

        g_session.tokSelectionRequested = context->SelectionRequested +=
            ref new Windows::Foundation::TypedEventHandler<WTextCore::CoreTextEditContext^, WTextCore::CoreTextSelectionRequestedEventArgs^>(
                [](WTextCore::CoreTextEditContext^, WTextCore::CoreTextSelectionRequestedEventArgs^ args) { onSelectionRequested(args); });

        g_session.tokSelectionUpdating = context->SelectionUpdating +=
            ref new Windows::Foundation::TypedEventHandler<WTextCore::CoreTextEditContext^, WTextCore::CoreTextSelectionUpdatingEventArgs^>(
                [](WTextCore::CoreTextEditContext^, WTextCore::CoreTextSelectionUpdatingEventArgs^ args) { onSelectionUpdating(args); });

        g_session.tokFocusRemoved = context->FocusRemoved +=
            ref new Windows::Foundation::TypedEventHandler<WTextCore::CoreTextEditContext^, Platform::Object^>(
                onFocusRemoved);

        g_session.tokLayoutRequested = context->LayoutRequested +=
            ref new Windows::Foundation::TypedEventHandler<WTextCore::CoreTextEditContext^, WTextCore::CoreTextLayoutRequestedEventArgs^>(
                [](WTextCore::CoreTextEditContext^, WTextCore::CoreTextLayoutRequestedEventArgs^ args) { onLayoutRequested(args); });

        WCoreUI::CoreWindow^ window = WCoreUI::CoreWindow::GetForCurrentThread();
        if (window)
        {
            g_session.tokKeyDown = window->KeyDown +=
                ref new Windows::Foundation::TypedEventHandler<WCoreUI::CoreWindow^, WCoreUI::KeyEventArgs^>(
                    [](WCoreUI::CoreWindow^, WCoreUI::KeyEventArgs^ args)
            {
                if (g_session.completed || args->KeyStatus.WasKeyDown)
                    return;

                switch (args->VirtualKey)
                {
                case Windows::System::VirtualKey::Enter:
                    completeKeyboardSession(true);
                    break;
                case Windows::System::VirtualKey::GamepadB:
                case Windows::System::VirtualKey::Escape:
                    completeKeyboardSession(false);
                    break;
                default:
                    break;
                }
            });
        }

        WViewMgmt::InputPane^ pane = nullptr;
        try
        {
            pane = WViewMgmt::InputPane::GetForCurrentView();
        }
        catch (Platform::Exception^ e)
        {
            dprintf("showKeyBoard: InputPane failed 0x%x\n", e->HResult);
        }
        if (!pane)
        {
            completeKeyboardSession(false);
            return;
        }

        g_session.tokPaneShowing = pane->Showing +=
            ref new Windows::Foundation::TypedEventHandler<WViewMgmt::InputPane^, WViewMgmt::InputPaneVisibilityEventArgs^>(
                [](WViewMgmt::InputPane^, WViewMgmt::InputPaneVisibilityEventArgs^) { g_session.paneShown = true; });

        g_session.tokPaneHiding = pane->Hiding +=
            ref new Windows::Foundation::TypedEventHandler<WViewMgmt::InputPane^, WViewMgmt::InputPaneVisibilityEventArgs^>(
                [](WViewMgmt::InputPane^, WViewMgmt::InputPaneVisibilityEventArgs^)
            {
                if (!g_session.completed)
                    completeKeyboardSession(false);
            });

        g_session.inputPane = pane;

        context->NotifyFocusEnter();

        bool shown = false;
        try
        {
            shown = pane->TryShow();
        }
        catch (Platform::Exception^ e)
        {
            dprintf("showKeyBoard: InputPane::TryShow failed 0x%x\n", e->HResult);
        }

        if (!shown && isXboxDeviceFamily())
        {
            dprintf("showKeyBoard: input pane refused on Xbox\n");
            completeKeyboardSession(false);
            return;
        }

        armKeyboardWatchdog();
    }
} // anonymous namespace

volatile long KeyboardProvider::keyboardOn = 0;

void KeyboardProvider::registerTextBoxListener(RBX::DataModel* dm)
{
    if (auto uis = RBX::ServiceProvider::create<UserInputService>(dm))
    {
        showKeyboardSignal = uis->textBoxGainFocus.connect(boost::bind(&KeyboardProvider::showKeyBoard, this, _1));
    }
}

void KeyboardProvider::showKeyBoard(std::string& title, std::string& description, const std::string& defaultText, RBX::XboxKeyBoardType keyboardType, std::function<void(Platform::String^)>& successLambda, std::function<void(void)>& cancelLambda)
{
    if( InterlockedCompareExchange(&keyboardOn, 1, 0 ) ) 
        return;

    g_session.completed = 0;
    g_session.paneShown = false;
    g_session.inputScope = mapInputScope(keyboardType);
    g_session.text = s2ws(&defaultText);
    g_session.selection.StartCaretPosition = static_cast<int>(g_session.text.size());
    g_session.selection.EndCaretPosition = static_cast<int>(g_session.text.size());
    g_session.onSuccess = successLambda;
    g_session.onCancel = cancelLambda;

    bool dispatched = false;
    try
    {
        WCoreUI::CoreDispatcher^ dispatcher = mainViewDispatcher();
        if (dispatcher)
        {
            dispatcher->RunAsync(WCoreUI::CoreDispatcherPriority::Normal,
                ref new WCoreUI::DispatchedHandler([]()
            {
                try
                {
                    armKeyboardSession();
                }
                catch (Platform::Exception^ e)
                {
                    dprintf("showKeyBoard: arm failed 0x%x (%S)\n", e->HResult, e->Message->Data());
                    completeKeyboardSession(false);
                }
            }));
            dispatched = true;
        }
    }
    catch (Platform::Exception^ e)
    {
        dprintf("showKeyBoard: dispatch failed 0x%x (%S)\n", e->HResult, e->Message->Data());
    }

    if (!dispatched)
    {
        g_session.onSuccess = nullptr;
        g_session.onCancel = nullptr;
        cancelLambda();
    }
}

void KeyboardProvider::showKeyBoardLua(std::string& title, std::string& description, std::string& defaultText, RBX::XboxKeyBoardType keyboardType, RBX::DataModel* dm)
{
    std::function<void(void)> cancelLambda = [=]() -> void
    {
        dm->submitTask([=](...)
        {
            if(PlatformService* p = ServiceProvider::find<PlatformService>(dm))
                p->keyboardClosedSignal(defaultText.data());
        }
        , DataModelJob::Write);

        InterlockedExchange(&keyboardOn, 0);
    };

    std::function<void(Platform::String^ defaultText)> successLambda = [=](Platform::String^ defaultText) -> void
    {
        dm->submitTask([=](...)
        {
            std::string textBoxValue = ws2s(defaultText->Data());
            if(PlatformService* p = ServiceProvider::find<PlatformService>(dm))
                p->keyboardClosedSignal(textBoxValue.data());
        }
        , DataModelJob::Write);

        InterlockedExchange(&keyboardOn, 0);
    };

    showKeyBoard(title, description, defaultText, keyboardType, successLambda, cancelLambda);
}

void KeyboardProvider::showKeyBoard(shared_ptr<RBX::Instance> instance)
{
    shared_ptr<RBX::TextBox> textBox =  RBX::Instance::fastSharedDynamicCast<RBX::TextBox>(instance);
    RBX::DataModel* dm = DataModel::get(instance.get());

    if (dm && textBox)
    {
        std::string text = textBox->getText();
        std::wstring wstr(text.begin(), text.end());
        Platform::String^ defaultText = ref new Platform::String(wstr.c_str());

        std::function<void(void)> cancelLambda = [=]() -> void
        {
            if (textBox)
            {
                dm->submitTask([=](...)
                {
                    if (auto uis = RBX::ServiceProvider::create<UserInputService>(dm))
                        uis->textboxDidFinishEditing(text.c_str(), false);
                }
                , DataModelJob::Write);
            }

            InterlockedExchange(&keyboardOn, 0);
        };

        std::function<void(Platform::String^ defaultText)> successLambda = [=](Platform::String^ defaultText) -> void
        {
            if (textBox)
            {
                std::string textBoxValue = ws2s(defaultText->Data());

                dm->submitTask([=](...)
                {
                    if (auto uis = RBX::ServiceProvider::create<UserInputService>(dm))
                        uis->textboxDidFinishEditing(textBoxValue.c_str(), true);
                }
                , DataModelJob::Write);
            }

            InterlockedExchange(&keyboardOn, 0);
        };

        std::string title = "Text Entry";
        std::string desc = "Please input text";
        showKeyBoard(title, desc, textBox->getText(), RBX::xbKeyBoard_Default, successLambda, cancelLambda);
    }    
}
