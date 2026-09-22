#include "stdafx.h"
#include "util/FileSystem.h"
#include "util/standardout.h"

#include <wrl.h>
#include <wrl/wrappers/corewrappers.h>
#include <windows.storage.h>
#include <roapi.h>
#include <string>

namespace RBX
{
namespace FileSystem
{
    static boost::filesystem::path getLocalFolderPath()
    {
        using namespace Microsoft::WRL;
        using namespace Microsoft::WRL::Wrappers;
        using namespace ABI::Windows::Storage;

        ComPtr<IApplicationDataStatics> statics;
        HRESULT hr = RoGetActivationFactory(
            HStringReference(RuntimeClass_Windows_Storage_ApplicationData).Get(),
            IID_PPV_ARGS(&statics));
        if (FAILED(hr) || !statics)
            return boost::filesystem::path();

        ComPtr<IApplicationData> appData;
        hr = statics->get_Current(&appData);
        if (FAILED(hr) || !appData)
            return boost::filesystem::path();

        ComPtr<IStorageFolder> localFolder;
        hr = appData->get_LocalFolder(&localFolder);
        if (FAILED(hr) || !localFolder)
            return boost::filesystem::path();

        ComPtr<IStorageItem> localItem;
        hr = localFolder.As(&localItem);
        if (FAILED(hr) || !localItem)
            return boost::filesystem::path();

        HString pathHString;
        hr = localItem->get_Path(pathHString.GetAddressOf());
        if (FAILED(hr))
            return boost::filesystem::path();

        unsigned int length = 0;
        const wchar_t* raw = WindowsGetStringRawBuffer(pathHString.Get(), &length);
        if (raw == NULL || length == 0)
            return boost::filesystem::path();

        return boost::filesystem::path(std::wstring(raw, length));
    }

    boost::filesystem::path getUserDirectory(bool create, FileSystemDir dir, const char *subDirectory)
    {
        boost::filesystem::path storage = getLocalFolderPath();
        if (storage.empty())
            return storage;
        boost::system::error_code ec;


        storage /= L"Roblox";
        if (subDirectory)
            storage /= subDirectory;

        if (create)
        {
            try {
                boost::filesystem::create_directories(storage, ec);
            } catch (...) {
                RBX::StandardOut::singleton()->print(RBX::MESSAGE_ERROR, "create_directories threw exception");
            }
        }

        return storage;
    }

    boost::filesystem::path getCacheDirectory(bool create, const char* subDirectory)
    {
        return boost::filesystem::path( getUserDirectory(true, DirAppData, subDirectory) );
    }

    boost::filesystem::path getTempFilePath()
    {
        return boost::filesystem::path( getUserDirectory(true, DirAppData, "temp") );
    }

    void FileSystem::clearCacheDirectory(const char* subDirectory)
    {
        boost::filesystem::path cachePath = getCacheDirectory(false, subDirectory);
        namespace fs = boost::filesystem;
        boost::system::error_code ec;
        if (!cachePath.empty() && fs::exists(cachePath, ec) && !ec)
        {
            fs::directory_iterator end_iter;
            for (fs::directory_iterator iter(cachePath); end_iter != iter; ++iter)
            {
                if (!fs::is_directory(iter->status()))
                {
                    boost::system::error_code ec;
                    boost::filesystem::remove(*iter, ec);
                }
            }
        }
    }

}
}

