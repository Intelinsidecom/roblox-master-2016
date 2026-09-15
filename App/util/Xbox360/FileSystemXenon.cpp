#ifdef RBX_PLATFORM_XBOX360

#include "stdafx.h"
#include "util/FileSystem.h"

extern "C" int XexCheckExecutablePrivilege(unsigned long PrivilegeType);
#define FS_STAGE(t) XexCheckExecutablePrivilege(t)

namespace RBX
{
namespace FileSystem
{
    static boost::filesystem::path getXenonStorageDirectory()
    {
        return boost::filesystem::path("D:\\Roblox");
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

        FS_STAGE(0x1B0);

        if (subDirectory)
            storage /= subDirectory;

        if (create)
        {
            FS_STAGE(0x1B1);
            try
            {
                boost::system::error_code ec;
                boost::filesystem::create_directories(storage, ec);
                FS_STAGE(0x1B2);
                if (ec)
                {
                    char modulePath[MAX_PATH];
                    if (GetModuleFileNameA(NULL, modulePath, MAX_PATH))
                    {
                        boost::filesystem::path fb = boost::filesystem::path(modulePath).parent_path() / "Roblox";
                        switch (dir)
                        {
                        case DirPicture: fb /= "Pictures"; break;
                        case DirVideo:   fb /= "Videos"; break;
                        case DirExe:     fb = boost::filesystem::path(modulePath).parent_path(); break;
                        default: break;
                        }
                        if (subDirectory)
                            fb /= subDirectory;
                        boost::system::error_code ec2;
                        boost::filesystem::create_directories(fb, ec2);
                        if (!ec2 || boost::filesystem::exists(fb, ec2))
                            storage = fb;
                    }
                }
            }
            catch (...)
            {
                FS_STAGE(0x1B2);
            }
        }

        FS_STAGE(0x1B3);

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
        if (cachePath.empty())
            return;

#if defined(RBX_PLATFORM_XBOX360)
        std::string cacheString = cachePath.string();
        std::string search = cacheString + "\\*";
        WIN32_FIND_DATAA findData;
        HANDLE hFind = FindFirstFileA(search.c_str(), &findData);
        if (hFind != INVALID_HANDLE_VALUE)
        {
            do
            {
                if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
                    DeleteFileA((cacheString + "\\" + findData.cFileName).c_str());
            } while (FindNextFileA(hFind, &findData));
            CloseHandle(hFind);
        }
#else
        namespace fs = boost::filesystem;
        boost::system::error_code ec;
        if (fs::exists(cachePath, ec) && !ec)
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
#endif
    }
}
}

#endif
