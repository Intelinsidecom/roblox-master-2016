#include "pch.h"
#include "AuthStorage.h"

using namespace Platform;
using namespace Windows::Storage;
using namespace Windows::Foundation::Collections;

namespace Roblox
{
    namespace
    {

        String^ kCookieKey  = L"RobloxUWP.Auth.Cookie";
        String^ kUserIdKey  = L"RobloxUWP.Auth.UserId";
        String^ kUserNameKey = L"RobloxUWP.Auth.UserName";
    }

    bool AuthStorage::HasSession()
    {
        auto values = ApplicationData::Current->LocalSettings->Values;
        if (!values->HasKey(kCookieKey)) return false;
        auto v = safe_cast<String^>(values->Lookup(kCookieKey));
        return (v != nullptr && !v->IsEmpty());
    }

    String^ AuthStorage::SessionCookie()
    {
        auto values = ApplicationData::Current->LocalSettings->Values;
        if (!values->HasKey(kCookieKey)) return nullptr;
        return safe_cast<String^>(values->Lookup(kCookieKey));
    }

    String^ AuthStorage::UserId()
    {
        auto values = ApplicationData::Current->LocalSettings->Values;
        if (!values->HasKey(kUserIdKey)) return nullptr;
        return safe_cast<String^>(values->Lookup(kUserIdKey));
    }

    String^ AuthStorage::UserName()
    {
        auto values = ApplicationData::Current->LocalSettings->Values;
        if (!values->HasKey(kUserNameKey)) return nullptr;
        return safe_cast<String^>(values->Lookup(kUserNameKey));
    }

    void AuthStorage::Save(String^ sessionCookie,
                           String^ userId,
                           String^ userName)
    {
        auto values = ApplicationData::Current->LocalSettings->Values;
        if (sessionCookie != nullptr) values->Insert(kCookieKey,   sessionCookie);
        if (userId != nullptr && sessionCookie == nullptr)
        {
            values->Insert(kCookieKey, userId);
        }
        if (userId       != nullptr) values->Insert(kUserIdKey,   userId);
        if (userName     != nullptr) values->Insert(kUserNameKey, userName);
    }

    void AuthStorage::Clear()
    {
        auto values = ApplicationData::Current->LocalSettings->Values;
        if (values->HasKey(kCookieKey))   values->Remove(kCookieKey);
        if (values->HasKey(kUserIdKey))   values->Remove(kUserIdKey);
        if (values->HasKey(kUserNameKey)) values->Remove(kUserNameKey);
    }
}
