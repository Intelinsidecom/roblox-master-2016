#include "pch.h"
#include "Page.h"
#include "WebViewPage.xaml.h"

using namespace Roblox;
using namespace Roblox::Controls;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml::Navigation;

Roblox::Controls::WebViewPage^ Page::GetPageImpl()
{
    return static_cast<Roblox::Controls::WebViewPage^>(this->FindName(L"pageImpl"));
}

Page::Page()
{
}

void Page::OnNavigatedTo(NavigationEventArgs^ e)
{
    Windows::UI::Xaml::Controls::Page::OnNavigatedTo(e);
    LoadDefaultUrl();
}

Platform::String^ Page::PageTitle::get()
{
    auto pageImpl = GetPageImpl();
    if (pageImpl != nullptr)
    {
        return pageImpl->PageTitle;
    }
    return nullptr;
}

void Page::PageTitle::set(Platform::String^ value)
{
    auto pageImpl = GetPageImpl();
    if (pageImpl != nullptr)
    {
        pageImpl->PageTitle = value;
    }
}

void Page::LoadUrl(Platform::String^ urlString)
{
    auto pageImpl = GetPageImpl();
    if (pageImpl != nullptr)
    {
        pageImpl->GetWebView()->Source = ref new Uri(urlString);
    }
}

void Page::SetDefaultUrl(Platform::String^ urlString)
{
    auto pageImpl = GetPageImpl();
    if (pageImpl != nullptr)
    {
        pageImpl->GetWebView()->SetDefaultUrl(urlString);
    }
}

void Page::LoadDefaultUrl()
{
    auto pageImpl = GetPageImpl();
    if (pageImpl != nullptr)
    {
        pageImpl->GetWebView()->LoadDefaultUrl();
    }
}

Roblox::Controls::WebView^ Page::GetActiveWebView()
{
    auto pageImpl = GetPageImpl();
    if (pageImpl == nullptr)
    {
        return nullptr;
    }
    return pageImpl->GetWebView();
}
