#include "pch.h"
#include "StoreService.h"
#include "..\Roblox\RobloxSettings.h"
#include "..\Roblox\AuthStorage.h"
#include "..\Roblox\ResourceStrings.h"

using namespace Roblox::Services;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Web::Http;
using namespace Windows::Web::Http::Headers;
using namespace Windows::ApplicationModel::Store;
using namespace concurrency;

static const wchar_t* kRobloSecurityCookieName = L".ROBLOSECURITY";

namespace
{
    Windows::UI::Core::CoreDispatcher^ CaptureUiThreadDispatcher()
    {
        auto window = Windows::UI::Xaml::Window::Current;
        if (window != nullptr && window->Dispatcher != nullptr)
        {
            return window->Dispatcher;
        }
        auto coreWindow = Windows::UI::Core::CoreWindow::GetForCurrentThread();
        if (coreWindow != nullptr) return coreWindow->Dispatcher;
        return nullptr;
    }
}

namespace
{
    StoreService^ g_storeInstance = nullptr;
}

StoreService^ StoreService::GetInstance()
{
    if (g_storeInstance == nullptr)
    {
        g_storeInstance = ref new StoreService();
    }
    return g_storeInstance;
}

StoreService::StoreService()
    : m_httpClient(ref new HttpClient())
    , m_uiDispatcher(CaptureUiThreadDispatcher())
    , m_productId(nullptr)
    , m_transactionId(Platform::Guid())
    , m_isRetry(false)
    , m_csrfToken(nullptr)
    , m_csrfRetried(false)
{
    m_httpClient->DefaultRequestHeaders->UserAgent->ParseAdd(
        Roblox::RobloxSettings::GetInstance()->ApiUserAgent());

    if (m_uiDispatcher == nullptr)
    {
        m_uiDispatcher = CaptureUiThreadDispatcher();
    }
}

void StoreService::RunOnUiThread(Windows::UI::Core::DispatchedHandler^ handler)
{
    if (m_uiDispatcher != nullptr)
    {
        m_uiDispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal, handler);
        return;
    }
    auto dispatcher = CaptureUiThreadDispatcher();
    if (dispatcher != nullptr)
    {
        m_uiDispatcher = dispatcher;
        m_uiDispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal, handler);
        return;
    }
    auto window = Windows::UI::Xaml::Window::Current;
    if (window != nullptr && window->Dispatcher != nullptr)
    {
        window->Dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal, handler);
    }
}

Platform::String^ StoreService::ReadCsrfTokenFromResponse(HttpResponseMessage^ response)
{
    if (response == nullptr || response->Headers == nullptr) return nullptr;
    if (response->Headers->HasKey(L"X-CSRF-TOKEN"))
    {
        return response->Headers->Lookup(L"X-CSRF-TOKEN");
    }
    return nullptr;
}

void StoreService::AddAuthHeaders(HttpRequestMessage^ request)
{
    Platform::String^ cookie = Roblox::AuthStorage::SessionCookie();
    if (cookie != nullptr && !cookie->IsEmpty())
    {
        request->Headers->Append(L"Cookie",
            ref new Platform::String(kRobloSecurityCookieName) + L"=" + cookie);
    }

    if (m_csrfToken != nullptr && !m_csrfToken->IsEmpty())
    {
        request->Headers->Append(L"X-CSRF-TOKEN", m_csrfToken);
    }
}

void StoreService::RaiseResult(Platform::String^ resultKey, int code)
{
    PurchaseCompleted(resultKey, code);
}

void StoreService::ShowDialog(Platform::String^ titleKey, Platform::String^ messageKey)
{
    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler([titleKey, messageKey]()
    {
        try
        {
            auto title = Roblox::GetResourceString(titleKey);
            auto message = Roblox::GetResourceString(messageKey);
            auto dialog = ref new Windows::UI::Popups::MessageDialog(message, title);
            dialog->ShowAsync();
        }
        catch (Platform::Exception^) {}
    }));
}

void StoreService::ValidateProduct(Platform::String^ productId)
{
    try
    {
        auto settings = Roblox::RobloxSettings::GetInstance();
        auto request = ref new HttpRequestMessage(
            HttpMethod::Get,
            ref new Uri(settings->StoreValidatePurchaseURL(productId)));
        AddAuthHeaders(request);

        create_task(m_httpClient->SendRequestAsync(request))
            .then([this, productId](task<HttpResponseMessage^> previousTask)
        {
            try
            {
                HttpResponseMessage^ response = previousTask.get();
                OnValidationResponse(productId, response);
            }
            catch (Exception^)
            {
                RaiseResult(L"PurchasingErrorValidationUnknown", 0);
                ShowDialog(L"PurchasingMsgTitleValidationFailed",
                           L"PurchasingErrorValidationUnknown");
            }
        });
    }
    catch (Exception^)
    {
        RaiseResult(L"PurchasingErrorValidationUnknown", 0);
        ShowDialog(L"PurchasingMsgTitleValidationFailed",
                   L"PurchasingErrorValidationUnknown");
    }
}

void StoreService::OnValidationResponse(Platform::String^ productId,
                                        HttpResponseMessage^ response)
{
    int statusCode = (int)response->StatusCode;

    if (statusCode == 403 && !m_csrfRetried)
    {
        Platform::String^ token = ReadCsrfTokenFromResponse(response);
        if (token != nullptr && !token->IsEmpty())
        {
            m_csrfToken = token;
            m_csrfRetried = true;
            ValidateProduct(productId);
            return;
        }
    }

    if (statusCode >= 200 && statusCode < 300)
    {
        RequestStorePurchase(productId);
        return;
    }

    Platform::String^ resultKey = L"PurchasingErrorValidationUnknown";
    if (statusCode == 404)
    {
        resultKey = L"PurchasingErrorValidationPageMissing";
    }
    else if (statusCode == 403)
    {
        resultKey = L"PurchasingErrorValidationProductUnavailable";
    }
    RaiseResult(resultKey, statusCode);
    ShowDialog(L"PurchasingMsgTitleValidationFailed", resultKey);
}

void StoreService::RequestStorePurchase(Platform::String^ productId)
{
    try
    {
        create_task(CurrentAppSimulator::RequestProductPurchaseAsync(productId))
            .then([this, productId](task<PurchaseResults^> previousTask)
        {
            try
            {
                PurchaseResults^ results = previousTask.get();
                OnPurchaseResults(productId, results);
            }
            catch (Exception^)
            {
                RaiseResult(L"PurchasingErrorStoreDisabled", -1);
                ShowDialog(L"PurchasingMsgTitleStoreDisabled",
                           L"PurchasingErrorStoreDisabled");
            }
        });
    }
    catch (Exception^)
    {
        RaiseResult(L"PurchasingErrorStoreDisabled", -1);
        ShowDialog(L"PurchasingMsgTitleStoreDisabled",
                   L"PurchasingErrorStoreDisabled");
    }
}

void StoreService::OnPurchaseResults(Platform::String^ productId,
                                     PurchaseResults^ results)
{
    if (results == nullptr)
    {
        RaiseResult(L"PurchasingErrorConsumableUnknown", -1);
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorConsumableUnknown");
        return;
    }

    switch (results->Status)
    {
    case ProductPurchaseStatus::Succeeded:
        RaiseResult(L"PurchasingSuccessConsumableGranted",
                    (int)results->Status);
        ReportPurchase(productId, results->TransactionId,
                       results->ReceiptXml, false);
        break;

    case ProductPurchaseStatus::AlreadyPurchased:
        RaiseResult(L"PurchasingErrorConsumableAlreadyPurchased",
                    (int)results->Status);
        break;

    case ProductPurchaseStatus::NotFulfilled:
        RaiseResult(L"PurchasingErrorConsumableNotFulfilled",
                    (int)results->Status);
        ReportPurchase(productId, results->TransactionId,
                       results->ReceiptXml, false);
        break;

    case ProductPurchaseStatus::NotPurchased:
        RaiseResult(L"PurchasingErrorConsumableNotPurchased",
                    (int)results->Status);
        RequeryUnfulfilled();
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorConsumableNotPurchased");
        break;

    default:
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorConsumableUnknown");
        break;
    }
}

void StoreService::ReportPurchase(Platform::String^ productId,
                                  Platform::Guid transactionId,
                                  Platform::String^ receipt,
                                  bool isRetry)
{
    m_productId = productId;
    m_transactionId = transactionId;
    m_isRetry = isRetry;

    try
    {
        auto settings = Roblox::RobloxSettings::GetInstance();
        Platform::String^ url =
            settings->StoreReportPurchaseURL(transactionId.ToString());

        auto fields = ref new Platform::Collections::Map<Platform::String^, Platform::String^>();
        fields->Insert(L"receipt", receipt != nullptr ? receipt : L"");
        fields->Insert(L"isRetry", isRetry ? L"true" : L"false");

        auto content = ref new HttpFormUrlEncodedContent(fields);

        auto request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
        request->Content = content;
        AddAuthHeaders(request);

        create_task(m_httpClient->SendRequestAsync(request))
            .then([this, productId](task<HttpResponseMessage^> previousTask)
        {
            try
            {
                HttpResponseMessage^ response = previousTask.get();
                OnReportResponse(productId, response);
            }
            catch (Exception^)
            {
                RaiseResult(L"PurchasingErrorGrantUnknown", 0);
                ShowDialog(L"PurchasingMsgTitleGrantFailed",
                           L"PurchasingErrorGrantUnknown");
            }
        });
    }
    catch (Exception^)
    {
        RaiseResult(L"PurchasingErrorGrantUnknown", 0);
        ShowDialog(L"PurchasingMsgTitleGrantFailed",
                   L"PurchasingErrorGrantUnknown");
    }
}

void StoreService::OnReportResponse(Platform::String^ productId,
                                    HttpResponseMessage^ response)
{
    int statusCode = (int)response->StatusCode;

    if (statusCode == 403 && !m_csrfRetried)
    {
        Platform::String^ token = ReadCsrfTokenFromResponse(response);
        if (token != nullptr && !token->IsEmpty())
        {
            m_csrfToken = token;
            m_csrfRetried = true;
            RetryReportPurchase(productId);
            return;
        }
    }

    switch (statusCode)
    {
    case 200:
        RaiseResult(L"PurchasingSuccessServerGranted", statusCode);
        GrantConsumable(productId, m_transactionId);
        break;

    case 400:
        RaiseResult(L"PurchasingErrorGrantBadRequest", statusCode);
        ShowDialog(L"PurchasingMsgTitleGrantFailed",
                   L"PurchasingErrorGrantBadRequest");
        break;

    case 401:
    case 500:
        RaiseResult(L"PurchasingErrorGrantCouldNotVerify", statusCode);
        ShowDialog(L"PurchasingMsgTitleGrantFailed",
                   L"PurchasingErrorGrantCouldNotVerify");
        break;

    case 403:
    case 404:
        RaiseResult(L"PurchasingErrorGrantPageMissing", statusCode);
        ShowDialog(L"PurchasingMsgTitleGrantFailed",
                   L"PurchasingErrorGrantPageMissing");
        break;

    default:
        RaiseResult(L"PurchasingErrorGrantUnknown", statusCode);
        ShowDialog(L"PurchasingMsgTitleGrantFailed",
                   L"PurchasingErrorGrantUnknown");
        break;
    }
}

void StoreService::GrantConsumable(Platform::String^ productId,
                                   Platform::Guid transactionId)
{
    try
    {
        create_task(CurrentAppSimulator::ReportConsumableFulfillmentAsync(productId, transactionId))
            .then([this, productId](task<FulfillmentResult> previousTask)
        {
            try
            {
                FulfillmentResult result = previousTask.get();
                OnFulfillmentResult(productId, result);
            }
            catch (Exception^)
            {
                RaiseResult(L"PurchasingErrorFulfillException", -1);
                ShowDialog(L"PurchasingMsgTitleIncomplete",
                           L"PurchasingErrorFulfillException");
            }
        });
    }
    catch (Exception^)
    {
        RaiseResult(L"PurchasingErrorFulfillException", -1);
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorFulfillException");
    }
}

void StoreService::OnFulfillmentResult(Platform::String^ productId,
                                       FulfillmentResult result)
{
    switch (result)
    {
    case FulfillmentResult::Succeeded:
        RaiseResult(L"PurchasingSuccessFulfilled", (int)result);
        ShowDialog(L"PurchasingMsgTitleSuccess", L"PurchasingSuccessFulfilled");
        break;

    case FulfillmentResult::NothingToFulfill:
        RaiseResult(L"PurchasingErrorFulfillNothing", (int)result);
        break;

    case FulfillmentResult::PurchasePending:
        RaiseResult(L"PurchasingErrorFulfillPurchasePending", (int)result);
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorFulfillPurchasePending");
        break;

    case FulfillmentResult::PurchaseReverted:
        RaiseResult(L"PurchasingErrorFulfillPurchaseReverted", (int)result);
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorFulfillPurchaseReverted");
        break;

    case FulfillmentResult::ServerError:
        RaiseResult(L"PurchasingErrorFulfillServerError", (int)result);
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorFulfillServerError");
        break;

    default:
        RaiseResult(L"PurchasingErrorFulfillUnknown", (int)result);
        ShowDialog(L"PurchasingMsgTitleIncomplete",
                   L"PurchasingErrorFulfillUnknown");
        break;
    }
}

void StoreService::RequeryUnfulfilled()
{
    try
    {
        create_task(CurrentAppSimulator::GetUnfulfilledConsumablesAsync())
            .then([this](task<IVectorView<UnfulfilledConsumable^>^> previousTask)
        {
            try
            {
                auto consumables = previousTask.get();
                OnUnfulfilledConsumables(consumables);
            }
            catch (Exception^)
            {
            }
        });
    }
    catch (Exception^)
    {
    }
}

void StoreService::OnUnfulfilledConsumables(
    IVectorView<UnfulfilledConsumable^>^ consumables)
{
    if (consumables == nullptr) return;

    for (unsigned int i = 0; i < consumables->Size; i++)
    {
        auto item = consumables->GetAt(i);
        if (item == nullptr) continue;

        create_task(CurrentAppSimulator::GetProductReceiptAsync(item->ProductId))
            .then([this, item](task<Platform::String^> previousTask)
        {
            Platform::String^ receipt = L"";
            try
            {
                Platform::String^ value = previousTask.get();
                if (value != nullptr) receipt = value;
            }
            catch (Exception^)
            {
            }
            ReportPurchase(item->ProductId, item->TransactionId, receipt, true);
        });
    }
}

void StoreService::RetryReportPurchase(Platform::String^ productId)
{
    try
    {
        create_task(CurrentAppSimulator::GetProductReceiptAsync(productId))
            .then([this, productId](task<Platform::String^> previousTask)
        {
            try
            {
                Platform::String^ receipt = previousTask.get();
                if (receipt == nullptr) receipt = L"";
                ReportPurchase(productId, m_transactionId, receipt, true);
            }
            catch (Exception^)
            {
                RaiseResult(L"PurchasingErrorGrantUnknown", 0);
                ShowDialog(L"PurchasingMsgTitleGrantFailed",
                           L"PurchasingErrorGrantUnknown");
            }
        });
    }
    catch (Exception^)
    {
        RaiseResult(L"PurchasingErrorGrantUnknown", 0);
        ShowDialog(L"PurchasingMsgTitleGrantFailed",
                   L"PurchasingErrorGrantUnknown");
    }
}

void StoreService::BeginPurchase(Platform::String^ productId)
{
    if (productId == nullptr || productId->IsEmpty())
    {
        RaiseResult(L"PurchasingErrorValidationUnknown", 0);
        return;
    }

    m_productId = productId;
    m_isRetry = false;
    m_csrfToken = nullptr;
    m_csrfRetried = false;

    ValidateProduct(productId);
}
