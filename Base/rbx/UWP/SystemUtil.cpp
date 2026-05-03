#include "rbx/SystemUtil.h"
#include "rbx/ProcessPerfCounter.h"
#include "util/RegistryUtil.h"
#include "FastLog.h"

#define _WIN32_WINNT 0x0A00
#define NTDDI_VERSION 0x0A000000
#include <windows.h>
#include <dxgi1_2.h>

#pragma comment(lib, "dxgi.lib")

LOGVARIABLE(DXVideoMemory, 4)

namespace RBX
{
namespace SystemUtil
{
    std::string osVer()
    {
        return "10.0.14393.0";
    }

    bool isCPU64Bit()
    {
#if defined(_WIN64)
        return true;
#else
        return false;
#endif
    }

    int osPlatformId()
    {
        return VER_PLATFORM_WIN32_NT;
    }

    std::string osPlatform()
    {
        return "Win32";
    }

    std::string deviceName()
    {
        return "PC";
    }

    std::string getGPUMake()
    {
        IDXGIFactory2* pFactory = nullptr;
        HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory2), (void**)&pFactory);
 
        if (SUCCEEDED(hr))
        {
            IDXGIAdapter1* pAdapter = nullptr;
            if (SUCCEEDED(pFactory->EnumAdapters1(0, &pAdapter)))
            {
                DXGI_ADAPTER_DESC1 desc;
                pAdapter->GetDesc1(&desc);
                
                char adapterName[128];
                WideCharToMultiByte(CP_UTF8, 0, desc.Description, -1, adapterName, 128, nullptr, nullptr);
                
                pAdapter->Release();
                pFactory->Release();
                return std::string(adapterName);
            }
            pFactory->Release();
        }
        
        return "Unknown";
    }

    static DWORD GetDirecXVideoMemorySize() 
    {
        DWORD totalVidSize = 0;
        
        IDXGIFactory2* pFactory = nullptr;
        HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory2), (void**)&pFactory);
 
        if (FAILED(hr))
        {
            FASTLOG1(FLog::DXVideoMemory, "DXVRAM: CreateDXGIFactory1 returned %x", hr);
            return 0;
        }

        IDXGIAdapter2* pAdapter = nullptr;
        hr = pFactory->EnumAdapters1(0, reinterpret_cast<IDXGIAdapter1**>(&pAdapter));
 
        if (FAILED(hr))
        {
            FASTLOG1(FLog::DXVideoMemory, "DXVRAM: EnumAdapters1 returned %x", hr);
            pFactory->Release();
            return 0;
        }
        
        DXGI_ADAPTER_DESC1 desc;
        hr = pAdapter->GetDesc1(&desc);
        
        if (SUCCEEDED(hr))
        {
            totalVidSize = (DWORD)(desc.DedicatedVideoMemory / (1024 * 1024)); // Convert to MB
            
            FASTLOG2(FLog::DXVideoMemory, "DXVRAM: DXGI succeeded, total %d MB, shared %d MB", 
                totalVidSize, 
                (DWORD)(desc.SharedSystemMemory / (1024 * 1024)));
        }
        else
        {
            FASTLOG1(FLog::DXVideoMemory, "DXVRAM: GetDesc2 returned %x", hr);
        }
        
        pAdapter->Release();
        pFactory->Release();
        
        return totalVidSize;
    }

    uint64_t getVideoMemory()
    {
        static DWORD size = GetDirecXVideoMemorySize();
        return size;
    }
}
}