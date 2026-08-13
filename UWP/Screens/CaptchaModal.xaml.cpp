#include "pch.h"
#include "CaptchaModal.xaml.h"
#include "..\\App.xaml.h"
#include "..\\Roblox\\OnCaptchaSolved.h"
#include "..\\Roblox\\RobloxSettings.h"
#include "..\\Roblox\\ResourceStrings.h"

#include <memory>

using namespace Roblox::Views;
using namespace Roblox;

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
using namespace Windows::UI::Popups;
using namespace Windows::Web::Http;
using namespace Windows::Data::Json;
using namespace Windows::Storage::Streams;
using namespace Windows::Networking::Connectivity;
using namespace concurrency;

CaptchaModal::CaptchaModal(int type, Platform::String^ username)
    : m_type(type)
    , m_username(username)
    , _captchaToken(nullptr)
    , _useWebViewFallback(false)
    , _robloxSettings(nullptr)
    , m_solvedHandler(nullptr)
    , _solvedFired(false)
{
    InitializeComponent();
}

Roblox::OnCaptchaSolved^ CaptchaModal::OnCaptchaSolvedHandler::get()
{
    return m_solvedHandler;
}

void CaptchaModal::OnCaptchaSolvedHandler::set(Roblox::OnCaptchaSolved^ value)
{
    m_solvedHandler = value;
}

void CaptchaModal::InitializeFor(String^ token, bool useWebViewFallback)
{
    _captchaToken = token;
    _useWebViewFallback = useWebViewFallback;

    _robloxSettings = RobloxSettings::GetInstance();

    auto titleElement = dynamic_cast<TextBlock^>(FindName("txtTitle"));
    if (titleElement != nullptr)
    {
        titleElement->Text = GetResourceString(L"CaptchaTitle");
    }

    auto msgElement = dynamic_cast<TextBlock^>(FindName("captchaTitleText"));
    if (msgElement != nullptr)
    {
        msgElement->Text = GetResourceString(L"CaptchaMessage");
    }

    auto closeImage = dynamic_cast<Image^>(FindName("btnClose_image"));
    if (closeImage != nullptr)
    {
        closeImage->Source = ref new BitmapImage(ref new Uri(L"ms-appx:///Assets/Shell/cancelButton.png"));
    }

    auto acceptButton = dynamic_cast<Button^>(FindName("captchaAcceptButton"));
    if (acceptButton != nullptr)
    {
        acceptButton->Click += ref new RoutedEventHandler(this, &CaptchaModal::OnAcceptButtonClick);
    }

    auto cancelButton = dynamic_cast<Button^>(FindName("captchaCancelButton"));
    if (cancelButton != nullptr)
    {
        cancelButton->Click += ref new RoutedEventHandler(this, &CaptchaModal::OnCancelButtonClick);
    }

    auto closeButton = dynamic_cast<Button^>(FindName("btnClose"));
    if (closeButton != nullptr)
    {
        closeButton->Click += ref new RoutedEventHandler(this, &CaptchaModal::OnCloseButtonClick);
    }

    auto textBox = dynamic_cast<TextBox^>(FindName("captchaTextBox"));
    if (textBox != nullptr)
    {
        textBox->KeyDown += ref new KeyEventHandler(this, &CaptchaModal::OnTextBoxKeyDown);
    }

    auto webView = dynamic_cast<WebView^>(FindName("captchaWebview"));
    if (webView != nullptr)
    {
        webView->NavigationFailed +=
            ref new Windows::UI::Xaml::Controls::WebViewNavigationFailedEventHandler(
                this, &CaptchaModal::OnWebViewNavigationFailed);
    }

    if (useWebViewFallback)
    {
        if (webView != nullptr)
        {
            String^ url = L"http://api.roblox.com/captcha?token=" + token;
            webView->Navigate(ref new Uri(url));
        }
    }
}

void CaptchaModal::OnCloseButtonClick(Object^ sender, RoutedEventArgs^ e)
{
    CancelCaptcha();
}

void CaptchaModal::OnAcceptButtonClick(Object^ sender, RoutedEventArgs^ e)
{
    auto textBox = dynamic_cast<TextBox^>(FindName("captchaTextBox"));
    if (textBox == nullptr || _captchaToken == nullptr)
    {
        return;
    }

    Platform::String^ answer = textBox->Text;
    if (answer == nullptr || answer->IsEmpty())
    {
        return;
    }

    RaiseSolved(1);
}

void CaptchaModal::OnCancelButtonClick(Object^ sender, RoutedEventArgs^ e)
{
    CancelCaptcha();
}

void CaptchaModal::OnRefreshButtonClick(Object^ sender, RoutedEventArgs^ e)
{
    RefreshImageFromToken();
}

void CaptchaModal::OnTextBoxKeyDown(Object^ sender, KeyRoutedEventArgs^ e)
{
    if (e->Key == Windows::System::VirtualKey::Enter)
    {
        OnAcceptButtonClick(sender, nullptr);
        e->Handled = true;
    }
}

void CaptchaModal::OnWebViewNavigationFailed(Platform::Object^ sender,
                                            Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs^ e)
{
    auto webView = dynamic_cast<WebView^>(FindName("captchaWebview"));
    auto nativeForm = dynamic_cast<StackPanel^>(FindName("captchaNativeForm"));
    if (webView != nullptr)
    {
        webView->Visibility = ::Visibility::Collapsed;
    }
    if (nativeForm != nullptr)
    {
        nativeForm->Visibility = ::Visibility::Visible;
    }
}

void CaptchaModal::CancelCaptcha()
{
    RaiseCancelled();
}

IAsyncOperation<byte>^ CaptchaModal::ShowAsync(String^ captchaToken,
                                            OnCaptchaSolved^ solvedHandler)
{
    auto promise = concurrency::task_completion_event<byte>();
    auto localHandler = ref new OnCaptchaSolved(
        [promise](byte answered) { promise.set(answered); });

    auto pageHandler = solvedHandler;
    m_solvedHandler = ref new OnCaptchaSolved(
        [promise, pageHandler, localHandler](byte answered)
    {
        localHandler(answered);
        if (pageHandler != nullptr)
        {
            pageHandler(answered);
        }
    });

    InitializeFor(captchaToken, /*useWebViewFallback*/ false);
    RefreshImageFromToken();

    IAsyncOperation<ContentDialogResult>^ dialogShow = Windows::UI::Xaml::Controls::ContentDialog::ShowAsync();

    return create_async([this, dialogShow, promise]() -> byte
    {
        create_task(dialogShow).get();
        try
        {
            return create_task(promise).get();
        }
        catch (Platform::Exception^)
        {
            return static_cast<byte>(0);
        }
    });
}

void CaptchaModal::RefreshImageFromToken()
{
    if (_captchaToken == nullptr || _robloxSettings == nullptr)
    {
        return;
    }

    Platform::String^ imageUrl =
        L"http://www.google.com/recaptcha/api/image?c=" + _captchaToken;

    auto image = dynamic_cast<Image^>(FindName("captchaImage"));
    if (image == nullptr)
    {
        return;
    }

    auto httpClient = ref new HttpClient();
    auto imageLocal = image;
    auto modalThis = this;

    create_task(httpClient->GetBufferAsync(ref new Uri(imageUrl)))
        .then([imageLocal, modalThis](concurrency::task<IBuffer^> previousTask)
    {
        try
        {
            IBuffer^ buffer = previousTask.get();
            auto memoryStream = ref new InMemoryRandomAccessStream();
            auto writer = ref new DataWriter(memoryStream->GetOutputStreamAt(0));
            writer->WriteBuffer(buffer);
            create_task(writer->StoreAsync()).then(
                [memoryStream, imageLocal, modalThis](concurrency::task<unsigned int>)
            {
                memoryStream->Seek(0);
                auto bmp = ref new BitmapImage();
                create_task(bmp->SetSourceAsync(memoryStream)).then(
                    [imageLocal, bmp, modalThis](concurrency::task<void>)
                {
                    auto img = imageLocal;
                    if (img != nullptr)
                    {
                        modalThis->Dispatcher->RunAsync(
                            Windows::UI::Core::CoreDispatcherPriority::Normal,
                            ref new Windows::UI::Core::DispatchedHandler([img, bmp]()
                        {
                            img->Source = bmp;
                        }));
                    }
                });
            });
        }
        catch (Exception^)
        {
        }
    });
}

void CaptchaModal::RaiseSolved(byte wasCaptchaSolved)
{
    if (_solvedFired)
    {
        return;
    }
    _solvedFired = true;

    if (m_solvedHandler != nullptr)
    {
        m_solvedHandler(wasCaptchaSolved);
    }
}

void CaptchaModal::RaiseCancelled()
{
    if (_solvedFired)
    {
        return;
    }
    _solvedFired = true;

    if (m_solvedHandler != nullptr)
    {
        m_solvedHandler(static_cast<byte>(0));
    }
}
