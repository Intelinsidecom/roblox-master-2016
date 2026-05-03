



#if defined(_WIN32) && !defined(RBX_PLATFORM_DURANGO) && !defined(__GNUC__)  &&!defined(__GCCXML__)

#include "gettimeofday.h"

// From http://www.openasthra.com/c-tidbits/gettimeofday-function-for-windows/

#include "WindowsIncludes.h"

#if defined(_MSC_VER) || defined(_MSC_EXTENSIONS)
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000Ui64
#else
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000ULL
#endif

int gettimeofday(struct timeval *tv, struct timezone *tz)
{
  FILETIME ft;
  unsigned __int64 tmpres = 0;
  static int tzflag;

  if (NULL != tv)
  {
    GetSystemTimeAsFileTime(&ft);

    tmpres |= ft.dwHighDateTime;
    tmpres <<= 32;
    tmpres |= ft.dwLowDateTime;

    /*converting file time to unix epoch*/
    tmpres /= 10;  /*convert into microseconds*/
    tmpres -= DELTA_EPOCH_IN_MICROSECS;
    tv->tv_sec = (long)(tmpres / 1000000UL);
    tv->tv_usec = (long)(tmpres % 1000000UL);
  }

  if (NULL != tz)
  {
#if defined(RBX_PLATFORM_UWP)
    long timezone_seconds = 0;
    int daylight_val = 0;
    _get_timezone(&timezone_seconds);
    _get_daylight(&daylight_val);

    tz->tz_minuteswest = timezone_seconds / 60;
    tz->tz_dsttime = daylight_val;
#else
    if (!tzflag)
    {
      _tzset();
      tzflag++;
    }
    tz->tz_minuteswest = _timezone / 60;
    tz->tz_dsttime = _daylight;
#endif
  }

  return 0;
}

#endif

