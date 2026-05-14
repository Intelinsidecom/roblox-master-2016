#ifdef RBX_PLATFORM_UWP

#include "stdafx.h"
#include "util/FileSystem.h"
#include "util/standardout.h"

#include <wrl.h>

namespace RBX
{
namespace FileSystem
{
    boost::filesystem::path getUserDirectory(bool create, FileSystemDir dir, const char *subDirectory)
    {
        boost::filesystem::path storage(Windows::Storage::ApplicationData::Current->LocalFolder->Path->Data());
        boost::system::error_code ec;


        storage /= L"Roblox";
        if (subDirectory)
            storage /= subDirectory;

        if (create)
        {
            try {
                bool created = boost::filesystem::create_directories(storage, ec);
                RBX::StandardOut::singleton()->print(RBX::MESSAGE_INFO, RBX::format("create_directories result: %s, ec: %s", created ? "true" : "false", ec.message().c_str()).c_str());
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

#endif
