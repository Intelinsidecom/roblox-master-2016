#include "pch.h"
#include "Bridge.h"
#include <collection.h>
#include <windows.data.json.h>
#include <windows.ui.xaml.controls.h>

using namespace Roblox::NativeHybrid;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::Data::Json;

static Platform::String^ EscapeScriptString(Platform::String^ value)
{
    if (value == nullptr)
    {
        return L"";
    }

    std::wstring escaped(value->Data());
    size_t pos = 0;
    while ((pos = escaped.find(L"\\", pos)) != std::wstring::npos)
    {
        escaped.replace(pos, 1, L"\\\\");
        pos += 2;
    }
    pos = 0;
    while ((pos = escaped.find(L"'", pos)) != std::wstring::npos)
    {
        escaped.replace(pos, 1, L"\\'");
        pos += 2;
    }

    return ref new Platform::String(escaped.c_str());
}

Bridge::Bridge(WebView^ webview)
    : m_webView(webview)
    , m_gameModule(ref new GameModule())
    , m_socialModule(ref new SocialModule())
{
    if (m_webView != nullptr)
    {
        m_webView->ScriptNotify +=
            ref new NotifyEventHandler(this, &Bridge::OnScriptNotify);
    }
}

Bridge::~Bridge()
{
    m_webView = nullptr;
    m_gameModule = nullptr;
    m_socialModule = nullptr;
}

void Bridge::OnScriptNotify(Platform::Object^ sender, NotifyEventArgs^ e)
{
    (void)sender;
    if (e != nullptr && e->Value != nullptr)
    {
        nativeCallback(e->Value);
    }
}

void Bridge::nativeCallback(Platform::String^ message)
{
    if (message == nullptr || message->IsEmpty())
    {
        return;
    }

    JsonObject^ root;
    if (!JsonObject::TryParse(message, &root) || root == nullptr)
    {
        return;
    }

    auto command = ref new Command(this);
    command->ModuleID = root->GetNamedString(L"moduleId", L"");
    command->FunctionName = root->GetNamedString(L"functionName", L"");
    command->CallbackID = root->GetNamedString(L"callbackId", L"");
    if (root->HasKey(L"params"))
    {
        IJsonValue^ value = root->GetNamedValue(L"params");
        if (value->ValueType == JsonValueType::Object)
        {
            command->Params = value->GetObject();
        }
    }

    ExecuteCommand(command);
}

void Bridge::ExecuteCommand(Command^ command)
{
    if (command == nullptr || command->ModuleID == nullptr)
    {
        return;
    }

    if (command->ModuleID == m_gameModule->GetName())
    {
        m_gameModule->ExecuteCommand(command);
    }
    else if (command->ModuleID == m_socialModule->GetName())
    {
        m_socialModule->ExecuteCommand(command);
    }
}

void Bridge::ExecuteCallback(Platform::String^ callbackId, bool success, JsonObject^ params)
{
    if (m_webView == nullptr || callbackId == nullptr || callbackId->IsEmpty())
    {
        return;
    }

    Platform::String^ script =
        L"window.Roblox.Hybrid.Bridge.nativeCallback('" + EscapeScriptString(callbackId) +
        L"'," + (success ? L"true" : L"false") + L"," +
        (params != nullptr ? params->Stringify() : L"null") + L")";

    auto args = ref new Platform::Collections::Vector<Platform::String^>();
    args->Append(script);

    // The WebView may have been torn down (LowMemMode clears the launching
    // page to about:blank, where window.Roblox.Hybrid.Bridge does not exist) or
    // the app may be leaving. Fire-and-forget: never let a pending JS callback
    // bring down the app from an async script-notify failure.
    try
    {
        m_webView->InvokeScriptAsync(L"eval", args);
    }
    catch (Platform::Exception^)
    {
    }
}
