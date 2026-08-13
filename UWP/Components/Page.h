#pragma once

namespace Roblox
{
    namespace Controls
    {
        ref class WebViewPage;
        ref class WebView;

        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class Page : public Windows::UI::Xaml::Controls::Page
        {
        protected private:
            Page();

        protected:
            virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

        public:
            property Platform::String^ PageTitle
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            void LoadUrl(Platform::String^ urlString);
            void SetDefaultUrl(Platform::String^ urlString);
            void LoadDefaultUrl();

        internal:
            Roblox::Controls::WebView^ GetActiveWebView();

        private:
            Roblox::Controls::WebViewPage^ GetPageImpl();
        };
    }
}
