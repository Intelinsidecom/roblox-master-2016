#ifdef RBX_PLATFORM_XBOX360

#include "stdafx.h"
#include "util/FileSystem.h"

namespace RBX
{
namespace FileSystem
{
    static boost::filesystem::path getXenonStorageDirectory()
    {
        return boost::filesystem::path("T:\\Roblox");
    }

    boost::filesystem::path getUserDirectory(bool create, FileSystemDir dir, const char *subDirectory)
    {
        boost::filesystem::path storage = getXenonStorageDirectory();

        switch (dir)
        {
        case DirPicture:
            storage /= "Pictures";
            break;
        case DirVideo:
            storage /= "Videos";
            break;
        case DirExe:
        {
            char modulePath[MAX_PATH];
            if (GetModuleFileNameA(NULL, modulePath, MAX_PATH))
                storage = boost::filesystem::path(modulePath).parent_path();
            break;
        }
        case DirAppData:
        default:
            break;
        }

        if (subDirectory)
            storage /= subDirectory;

        if (create)
            CreateDirectoryA(storage.string().c_str(), NULL);

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

    boost::filesystem::path getLogsDirectory()
    {
        return boost::filesystem::path( getUserDirectory(true, DirAppData, "logs") );
    }

    void clearCacheDirectory(const char* subDirectory)
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
