#include "rbx/SystemUtil.h"

namespace RBX
{
    namespace SystemUtil
    {
        std::string osVer()
        {
            return "Xenon";
        }

        bool isCPU64Bit()
        {
            return false;
        }

        int osPlatformId()
        {
            return -1;
        }

        std::string osPlatform()
        {
            return "Xenon";
        }

        std::string getGPUMake()
        {
            return "Xenon";
        }

        std::string deviceName()
        {
            return "Xenon";
        }

        uint64_t getVideoMemory()
        { 
            return ((1U<<31U)-1); 
        } 
    }
}