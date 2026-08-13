#pragma once

namespace Roblox
{
    inline Platform::String^ GetResourceString(Platform::String^ key)
    {
        auto loader = ref new Windows::ApplicationModel::Resources::ResourceLoader();
        return loader->GetString(key);
    }
}
