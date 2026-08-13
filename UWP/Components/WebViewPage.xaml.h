#pragma once

#include "Components\WebViewPage.g.h"
#include "Components\WebView.xaml.h"
#include "Components\SearchType.h"
#include "Components\RobloxTheme.h"

namespace Roblox
{
    namespace Views
    {
        ref class PurchaseBCPage;
        ref class PurchaseRobuxPage;
    }

    namespace Controls
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class WebViewPage sealed
        {
        public:
            WebViewPage();

            property Platform::String^ PageTitle
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            void PageWillAppear();
            Roblox::Controls::WebView^ GetWebView();
            void SetPageTheme(int theme);
            void SetPageTitle(Platform::String^ title);
            void SetPurchaseButtonsEnabled(bool isEnabled);
            void SetSearchType(int type);
            void Search_QueryHelper(Platform::String^ searchText, bool replaceQuery);

        private:
            int searchType;
            int m_theme;
            Platform::String^ m_pageTitle;
            Windows::UI::Xaml::Media::Imaging::BitmapImage^ m_bcIconOff;
            Windows::UI::Xaml::Media::Imaging::BitmapImage^ m_bcIconOn;
            Windows::UI::Xaml::Media::Imaging::BitmapImage^ m_robuxIconOff;
            Windows::UI::Xaml::Media::Imaging::BitmapImage^ m_robuxIconOn;
            void FetchBalance();
            void OnBCButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnRobuxButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnBCPointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
            void OnBCPointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
            void OnRobuxPointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
            void OnRobuxPointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
            void OnSearchQuerySubmitted(Windows::UI::Xaml::Controls::AutoSuggestBox^ sender, Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs^ e);
        };
    }
}
