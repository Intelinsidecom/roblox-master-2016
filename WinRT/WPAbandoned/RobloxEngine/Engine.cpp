#include "pch.h"
#include "Engine.h"
#include "RendererBootstrap.h"
#include "RenderJobWP.h"
#include <windows.graphics.display.h>
#include <chrono>
#include <windows.storage.h>
#include <windows.storage.streams.h>
// WP8.1-friendly access to packaged location and collections
#include <windows.applicationmodel.h>
#include <windows.foundation.collections.h>
// Use ThrowIfFailed helper consistent with DeviceResources
#include "../Common/DirectXHelper.h"
// Ensure std::max is available and protected from Windows macros
#include <algorithm>
// Fixed width integer types
#include <cstdint>

using namespace Platform;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace concurrency;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;
using namespace Windows::ApplicationModel;

namespace RobloxEngine
{
    using Microsoft::WRL::ComPtr;

    static inline std::int64_t GetTimeMs()
    {
        using namespace std::chrono;
        return duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count();
    }

    Engine::Engine()
        : m_featureLevel(D3D_FEATURE_LEVEL_11_0)
        , m_debugOverlayEnabled(true)
        , m_shadersPrepared(false)
        , m_bootstrap(nullptr)
    {
    }

    // Initialize and StartAsync are deprecated - rendering is now handled by RendererBootstrap

    Windows::Foundation::IAsyncOperation<bool>^ Engine::LoadPlaceAsync(String^ pathOrUri)
    {
        auto translated = TranslateToAppxUri(pathOrUri);
        return create_async([this, translated]() -> task<bool> {
            // Verify file is accessible. Actual parse/render is deferred to engine subsystems later.
            return LoadFileBytesAsync(translated).then([this, translated](Platform::Array<byte>^ bytes) -> bool {
                if (bytes == nullptr || bytes->Length == 0)
                    return false;
                m_lastRequestedPlace = translated;
                return true;
            });
        });
    }

    void Engine::SetDebugOverlayEnabled(bool enabled)
    {
        m_debugOverlayEnabled = enabled;
    }

    Platform::String^ Engine::GetDebugOverlayText()
    {
        if (!m_debugOverlayEnabled)
            return ref new String(L"");

        // Get stats from the actual renderer
        double fps = 0.0;
        if (m_bootstrap)
        {
            RenderStats stats = m_bootstrap->getRenderStats();
            fps = stats.fps;
        }

        wchar_t buf[512];
        const wchar_t* place = m_lastRequestedPlace ? m_lastRequestedPlace->Data() : L"(none)";
        swprintf_s(buf, L"FPS: %.1f\nFL: 0x%x\nPlace: %s", fps, (unsigned)m_featureLevel, place);
        return ref new String(buf);
    }

    // Old rendering code removed - RendererBootstrap handles all rendering

    // Copy packaged shaders from ms-appx:///shaders to LocalFolder/shaders and store the filesystem path
    void Engine::EnsureShaderPacksPrepared()
    {
        if (m_shadersPrepared)
            return;
        m_shadersPrepared = true; // best-effort; avoid repeated work

        try
        {
            auto local = ApplicationData::Current->LocalFolder;
            // Create/open destination folder asynchronously and chain copy without blocking UI thread
            create_task(local->CreateFolderAsync(ref new String(L"shaders"), CreationCollisionOption::OpenIfExists))
                .then([this](StorageFolder^ dstFolder)
                {
                    if (!dstFolder) return task_from_result();
                    m_shaderFolderPath = dstFolder->Path;

                    // Attempt to get packaged shaders folder
                    StorageFolder^ installed = Package::Current->InstalledLocation;
                    // Use a task<StorageFolder^> continuation to catch missing-folder exceptions
                    return create_task(installed->GetFolderAsync(ref new String(L"shaders")))
                        .then([this, dstFolder](concurrency::task<StorageFolder^> t)
                        {
                            StorageFolder^ srcFolder = nullptr;
                            try
                            {
                                srcFolder = t.get();
                            }
                            catch (...)
                            {
                                // Folder not found or inaccessible; treat as optional and no-op
                                srcFolder = nullptr;
                            }
                            if (!srcFolder) return task_from_result();
                            return CopyFolderRecursiveAsync(srcFolder, dstFolder);
                        });
                })
                .then([](task<void> t)
                {
                    // Swallow any exceptions; absence of shaders is acceptable
                    try { t.get(); } catch (...) {}
                });
        }
        catch (...)
        {
            // Swallow errors; engine will operate without pre-copied shader packs
        }
    }

    concurrency::task<void> Engine::CopyFolderRecursiveAsync(StorageFolder^ src, StorageFolder^ dst)
    {
        // Copy files
        return create_task(src->GetFilesAsync()).then([dst](IVectorView<StorageFile^>^ files)
        {
            std::vector<task<void>> ops;
            unsigned int n = files ? files->Size : 0;
            ops.reserve(n);
            for (unsigned int i = 0; i < n; ++i)
            {
                auto f = files->GetAt(i);
                ops.emplace_back(create_task(f->CopyAsync(dst, f->Name, NameCollisionOption::ReplaceExisting)).then([](StorageFile^){}));
            }
            return when_all(ops.begin(), ops.end());
        }).then([this, src, dst]()
        {
            // Recurse into subfolders
            return create_task(src->GetFoldersAsync()).then([this, dst](IVectorView<StorageFolder^>^ folders)
            {
                std::vector<task<void>> ops;
                unsigned int n = folders ? folders->Size : 0;
                ops.reserve(n);
                for (unsigned int i = 0; i < n; ++i)
                {
                    auto sf = folders->GetAt(i);
                    ops.emplace_back(create_task(dst->CreateFolderAsync(sf->Name, CreationCollisionOption::OpenIfExists))
                        .then([this, sf](StorageFolder^ newDst)
                    {
                        return CopyFolderRecursiveAsync(sf, newDst);
                    }));
                }
                return when_all(ops.begin(), ops.end());
            });
        });
    }

    Platform::String^ Engine::TranslateToAppxUri(Platform::String^ pathOrUri)
    {
        if (!pathOrUri || pathOrUri->Length() == 0)
            return pathOrUri;

        auto s = pathOrUri->Data();
        // Map common engine schemes to packaged app URIs
        // rbxasset://ScaledWorldv4.7.rbxl -> ms-appx:///PlatformContent/wp/ScaledWorldv4.7.rbxl
        const wchar_t* RBX_ASSET_PREFIX = L"rbxasset://";
        const wchar_t* MS_APPX_PREFIX = L"ms-appx:///";

        std::wstring ws(s);
        if (ws.rfind(RBX_ASSET_PREFIX, 0) == 0)
        {
            std::wstring name = ws.substr(wcslen(RBX_ASSET_PREFIX));
            // If name already contains a path, trust caller; else default to PlatformContent/wp/
            if (name.find(L"/") == std::wstring::npos)
            {
                return ref new Platform::String((std::wstring(MS_APPX_PREFIX) + L"PlatformContent/wp/" + name).c_str());
            }
            else
            {
                return ref new Platform::String((std::wstring(MS_APPX_PREFIX) + name).c_str());
            }
        }
        // Pass through ms-appx and absolute filesystem paths
        if (ws.rfind(L"ms-appx:///", 0) == 0 || ws.rfind(L"ms-appdata:///", 0) == 0)
            return pathOrUri;

        // If it looks like a bare filename, assume PlatformContent/wp/
        if (ws.find(L"://") == std::wstring::npos && ws.find(L"\\") == std::wstring::npos && ws.find(L"/") == std::wstring::npos)
        {
            return ref new Platform::String((std::wstring(MS_APPX_PREFIX) + L"PlatformContent/wp/" + ws).c_str());
        }

        return pathOrUri;
    }

    concurrency::task<Platform::Array<byte>^> Engine::LoadFileBytesAsync(Platform::String^ msAppxPath)
    {
        using namespace Windows::Storage;
        using namespace Windows::Storage::Streams;
        // If msAppxPath starts with ms-appx scheme, use Uri;
        // otherwise attempt to use StorageFile::GetFileFromPathAsync.
        std::wstring ws(msAppxPath->Data());
        if (ws.rfind(L"ms-appx:///", 0) == 0)
        {
            // Use application URI API; catch exceptions in continuations to avoid propagating
            auto uri = ref new Windows::Foundation::Uri(msAppxPath);
            return create_task(StorageFile::GetFileFromApplicationUriAsync(uri))
                .then([msAppxPath](concurrency::task<StorageFile^> t) {
                    try {
                        auto file = t.get();
                        return create_task(FileIO::ReadBufferAsync(file));
                    }
                    catch (...) {
                        OutputDebugStringW((std::wstring(L"LoadFileBytesAsync: missing ms-appx URI ") + msAppxPath->Data() + L"\n").c_str());
                        return concurrency::task_from_result<IBuffer^>(nullptr);
                    }
                })
                .then([](concurrency::task<IBuffer^> t) {
                    IBuffer^ buffer = nullptr;
                    try { buffer = t.get(); }
                    catch (...) { buffer = nullptr; }
                    if (!buffer) return ref new Platform::Array<byte>(0);
                    auto arr = ref new Platform::Array<byte>(buffer->Length);
                    DataReader::FromBuffer(buffer)->ReadBytes(arr);
                    return arr;
                });
        }
        else if (ws.rfind(L"ms-appdata:///", 0) == 0)
        {
            // Use application URI directly for ms-appdata, but catch exceptions and return empty bytes
            auto uri = ref new Windows::Foundation::Uri(msAppxPath);
            return create_task(StorageFile::GetFileFromApplicationUriAsync(uri))
                .then([msAppxPath](concurrency::task<StorageFile^> t) {
                    try {
                        auto file = t.get();
                        return create_task(FileIO::ReadBufferAsync(file));
                    }
                    catch (...) {
                        OutputDebugStringW((std::wstring(L"LoadFileBytesAsync: missing ms-appdata URI ") + msAppxPath->Data() + L"\n").c_str());
                        return concurrency::task_from_result<IBuffer^>(nullptr);
                    }
                })
                .then([](concurrency::task<IBuffer^> t) {
                    IBuffer^ buffer = nullptr;
                    try { buffer = t.get(); }
                    catch (...) { buffer = nullptr; }
                    if (!buffer) return ref new Platform::Array<byte>(0);
                    auto arr = ref new Platform::Array<byte>(buffer->Length);
                    DataReader::FromBuffer(buffer)->ReadBytes(arr);
                    return arr;
                });
        }
        else
        {
            return create_task(StorageFile::GetFileFromPathAsync(msAppxPath))
                .then([msAppxPath](concurrency::task<StorageFile^> t) {
                    try {
                        auto file = t.get();
                        return create_task(FileIO::ReadBufferAsync(file));
                    }
                    catch (...) {
                        OutputDebugStringW((std::wstring(L"LoadFileBytesAsync: missing or inaccessible path ") + msAppxPath->Data() + L"\n").c_str());
                        return concurrency::task_from_result<IBuffer^>(nullptr);
                    }
                })
                .then([](concurrency::task<Windows::Storage::Streams::IBuffer^> t) {
                    Windows::Storage::Streams::IBuffer^ buffer = nullptr;
                    try { buffer = t.get(); }
                    catch (...) { buffer = nullptr; }
                    if (!buffer) return ref new Platform::Array<byte>(0);
                    auto arr = ref new Platform::Array<byte>(buffer->Length);
                    Windows::Storage::Streams::DataReader::FromBuffer(buffer)->ReadBytes(arr);
                    return arr;
                });
        }
    }

}
