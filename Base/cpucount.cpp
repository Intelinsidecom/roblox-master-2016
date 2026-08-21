#include "CPUCount.h"

#if defined (_WIN32)
#if _MSC_VER >= 1700
#ifndef MICROPROFILE_NOCXX11
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
#if _MSC_VER >= 1700 && !defined(MICROPROFILE_NOCXX11)
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
