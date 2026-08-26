#include "util/MemoryStats.h"

#if defined(_WIN32) // should only be used with Microsoft platforms
#include <Windows.h>

#if !defined(RBX_PLATFORM_DURANGO) && !defined(RBX_PLATFORM_XBOX360)
#include <psapi.h>
#endif

#if (defined(RBX_PLATFORM_UWP) && (defined(_M_ARM) || defined(_M_ARM64))) || defined(RBX_PLATFORM_WIN_PHONE)
#define RBX_USE_APP_MEMORY_LIMIT 1
#endif
#if defined(RBX_USE_APP_MEMORY_LIMIT)
#include <windows.system.h>
#endif

using namespace RBX;
using namespace RBX::MemoryStats;

namespace RBX {
	namespace MemoryStats {
#if !defined(RBX_PLATFORM_DURANGO) && !defined(RBX_PLATFORM_XBOX360)
		MEMORYSTATUSEX globalMemoryStatusEx() {
			MEMORYSTATUSEX statex;
			statex.dwLength = sizeof(statex);
			GlobalMemoryStatusEx(&statex);
			return statex;
		}
#endif

		DWORDLONG usedMemoryBytes() {
#if defined(RBX_USE_APP_MEMORY_LIMIT)
			return Windows::System::MemoryManager::AppMemoryUsage;
#elif !defined(RBX_PLATFORM_DURANGO) && !defined(RBX_PLATFORM_XBOX360)
			PROCESS_MEMORY_COUNTERS pmc;
			GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc));
			return pmc.WorkingSetSize;
#else
			// TODO:WinRT Windows Surface App
			return 0;
#endif
		}

		DWORDLONG freeMemoryBytes() {
#if defined(RBX_USE_APP_MEMORY_LIMIT)
			DWORDLONG quotaFree = Windows::System::MemoryManager::AppMemoryUsageLimit - Windows::System::MemoryManager::AppMemoryUsage;
			MEMORYSTATUSEX statex = globalMemoryStatusEx();
			DWORDLONG physicalFree = statex.ullAvailPhys;
			return (physicalFree < quotaFree) ? physicalFree : quotaFree;
#elif !defined(RBX_PLATFORM_DURANGO) && !defined(RBX_PLATFORM_XBOX360)
			MEMORYSTATUSEX statex = globalMemoryStatusEx();
			return statex.ullAvailPhys;
#else
			// TODO:WinRT Windows Store App
			return 0;
#endif

		}

		DWORDLONG totalMemoryBytes() {
#if defined(RBX_USE_APP_MEMORY_LIMIT)
			return Windows::System::MemoryManager::AppMemoryUsageLimit;
#elif defined(RBX_PLATFORM_DURANGO)
            _TITLEMEMORYSTATUS status;
            status.dwLength = sizeof(TITLEMEMORYSTATUS);
            TitleMemoryStatus(&status);
            return status.ullTotalMem;
#elif defined(RBX_PLATFORM_XBOX360)
            MEMORYSTATUS status;
            status.dwLength = sizeof(MEMORYSTATUS);
            GlobalMemoryStatus(&status);
            return status.dwTotalPhys;
#else
            MEMORYSTATUSEX statex = globalMemoryStatusEx();
            return statex.ullTotalPhys;
#endif
		}
	}
}
#endif // defined(_WIN32)
