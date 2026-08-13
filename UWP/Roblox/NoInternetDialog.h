#pragma once

namespace Roblox
{
    private ref class NoInternetDialog sealed
    {
    public:
        static void Show();
    private:
        static void ShowCore();
        static bool _visible;
    };
}
