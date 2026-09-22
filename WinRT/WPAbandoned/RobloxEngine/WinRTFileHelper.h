#pragma once

#include <string>

namespace RBX {
namespace WinRT {
    // Synchronously read ms-appx:/// URI into std::string
    // Tries Content/ first, then falls back to PlatformContent/wp/ if not found
    // Returns true on success, false on failure (with optional error message)
    bool ReadMsAppxToString(const std::string& uriUtf8, std::string& out, std::string* errMsg = nullptr);
}
}
