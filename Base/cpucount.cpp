#include "CPUCount.h"

#if defined (_WIN32)
#if defined(RBX_PLATFORM_XBOX360) || defined(_XBOX)
#elif _MSC_VER >= 1700
#if !defined(MICROPROFILE_NOCXX11) && !defined(RBX_PLATFORM_XBOX360)
#include <thread>
#endif
#else
#include <windows.h>
#endif
#else
#   include "rbx/SystemUtil.h"
#endif

unsigned int RbxTotalUsableCoreCount(unsigned int defaultValue)
{
#ifdef _WIN32
#if defined(RBX_PLATFORM_XBOX360) || defined(_XBOX)
    unsigned n = 6;
#elif _MSC_VER >= 1700 && !defined(MICROPROFILE_NOCXX11) && !defined(RBX_PLATFORM_XBOX360)
    unsigned n = std::thread::hardware_concurrency();
#else
    SYSTEM_INFO info;
    GetSystemInfo(&info);
    unsigned n = info.dwNumberOfProcessors;
#endif
    return n ? n : defaultValue;
#else
	return RBX::SystemUtil::getCPUCoreCount();
#endif
}
