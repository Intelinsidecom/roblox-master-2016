
#pragma once

namespace Roblox
{
    private ref class AuthStorage sealed
    {
    public:
        static bool HasSession();
        static Platform::String^ SessionCookie();
        static Platform::String^ UserId();
        static Platform::String^ UserName();
        static void Save(Platform::String^ sessionCookie,
                         Platform::String^ userId,
                         Platform::String^ userName);
        static void Clear();
    };
}
