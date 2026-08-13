#pragma once

#include <string>

namespace Roblox
{
    namespace Services
    {
        private delegate void StorePurchaseResultHandler(Platform::String^ resultKey, int code);

        private ref class StoreService sealed
        {
        public:
            StoreService();

            static StoreService^ GetInstance();
            void BeginPurchase(Platform::String^ productId);
            void RetryReportPurchase(Platform::String^ productId);
            event StorePurchaseResultHandler^ PurchaseCompleted;

        private:
            Windows::Web::Http::HttpClient^ m_httpClient;
            Windows::UI::Core::CoreDispatcher^ m_uiDispatcher;
            Platform::String^ m_productId;
            Platform::Guid m_transactionId;
            bool m_isRetry;
            Platform::String^ m_csrfToken;
            bool m_csrfRetried;

            void ValidateProduct(Platform::String^ productId);
            void OnValidationResponse(Platform::String^ productId,
                                      Windows::Web::Http::HttpResponseMessage^ response);
            void RequestStorePurchase(Platform::String^ productId);
            void OnPurchaseResults(Platform::String^ productId,
                                   Windows::ApplicationModel::Store::PurchaseResults^ results);
            void ReportPurchase(Platform::String^ productId,
                                Platform::Guid transactionId,
                                Platform::String^ receipt,
                                bool isRetry);
            void OnReportResponse(Platform::String^ productId,
                                  Windows::Web::Http::HttpResponseMessage^ response);
            void GrantConsumable(Platform::String^ productId,
                                 Platform::Guid transactionId);
            void OnFulfillmentResult(Platform::String^ productId,
                                     Windows::ApplicationModel::Store::FulfillmentResult result);
            void RequeryUnfulfilled();
            void OnUnfulfilledConsumables(
                Windows::Foundation::Collections::IVectorView<
                    Windows::ApplicationModel::Store::UnfulfilledConsumable^>^ consumables);
            void AddAuthHeaders(Windows::Web::Http::HttpRequestMessage^ request);
            Platform::String^ ReadCsrfTokenFromResponse(
                Windows::Web::Http::HttpResponseMessage^ response);
            void RaiseResult(Platform::String^ resultKey, int code);
            void ShowDialog(Platform::String^ titleKey, Platform::String^ messageKey);
            void RunOnUiThread(Windows::UI::Core::DispatchedHandler^ handler);
        };
    }
}
