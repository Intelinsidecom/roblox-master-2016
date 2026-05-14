#if defined(RBX_PLATFORM_UWP)
#include <windows.h>
#include <inspectable.h>
#include <unknwn.h>
#include "DeviceD3D11.h"

#include "HeadersD3D11.h"
#include <wrl.h>
#include <Windows.UI.Xaml.Interop.h>
#include <Windows.UI.Xaml.Controls.h>
#include <Windows.UI.Composition.h>
#include <Windows.Graphics.DirectX.Direct3D11.h>
#include <windows.foundation.h>
#include <windows.foundation.collections.h>
#include <windows.ui.xaml.media.dxinterop.h>
#include <windows.system.profile.h>
#include <windows.ui.core.h>
#include "util/standardout.h"

FASTFLAG(DebugD3D11DebugMode)

namespace RBX
{
namespace Graphics
{

extern "C" IUnknown* getUWPSwapChainPanel();
    extern "C" void getUWPFramebufferSize(unsigned int* width, unsigned int* height);
    extern "C" void getUWPCompositionScale(float* scaleX, float* scaleY);
    extern "C" void setSwapChainOnUIThread(IUnknown* swapChain);

    static bool isXbox()
    {
        static int result = -1;
        if (result == -1)
        {
            try {
                auto deviceFamily = Windows::System::Profile::AnalyticsInfo::VersionInfo->DeviceFamily;
                result = (deviceFamily == "Windows.Xbox") ? 1 : 0;
            } catch (...) {
                result = 0;
            }
        }
        return result == 1;
    }

    static bool isARM()
    {
        static int result = -1;
        if (result == -1)
        {
            SYSTEM_INFO sysInfo;
            GetNativeSystemInfo(&sysInfo);
            result = (sysInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_ARM) ? 1 : 0;
        }
        return result == 1;
    }

    static IDXGISwapChain* createSwapchainXbox(ID3D11Device* dev, unsigned w, unsigned h)
    {
        HRESULT hr;
        IDXGISwapChain1* swapch = nullptr;

        IDXGIDevice1* spdxgiDevice = nullptr;
        hr = dev->QueryInterface(IID_PPV_ARGS(&spdxgiDevice));
        if (FAILED(hr))
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "Xbox: Failed to get IDXGIDevice1: 0x%x", hr);
            throw std::runtime_error("Failed to get IDXGIDevice1");
        }

        IDXGIAdapter* spdxgiAdapter = nullptr;
        hr = spdxgiDevice->GetAdapter(&spdxgiAdapter);
        if (FAILED(hr))
        {
            spdxgiDevice->Release();
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "Xbox: Failed to get IDXGIAdapter: 0x%x", hr);
            throw std::runtime_error("Failed to get IDXGIAdapter");
        }

        IDXGIFactory2* spdxgiFactory = nullptr;
        hr = spdxgiAdapter->GetParent(IID_PPV_ARGS(&spdxgiFactory));
        if (FAILED(hr))
        {
            spdxgiAdapter->Release();
            spdxgiDevice->Release();
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "Xbox: Failed to get IDXGIFactory2: 0x%x", hr);
            throw std::runtime_error("Failed to get IDXGIFactory2");
        }

        DXGI_SWAP_CHAIN_DESC1 swapChainDesc = {0};
        swapChainDesc.Width = w;
        swapChainDesc.Height = h;
        swapChainDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        swapChainDesc.Stereo = false;
        swapChainDesc.SampleDesc.Count = 1;
        swapChainDesc.SampleDesc.Quality = 0;
        swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        swapChainDesc.BufferCount = 2;
        swapChainDesc.Scaling = DXGI_SCALING_STRETCH;
        swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
        swapChainDesc.AlphaMode = DXGI_ALPHA_MODE_IGNORE;
        swapChainDesc.Flags = 0;

        hr = spdxgiFactory->CreateSwapChainForComposition(dev, &swapChainDesc, nullptr, &swapch);

        spdxgiFactory->Release();
        spdxgiAdapter->Release();

        if (FAILED(hr))
        {
            spdxgiDevice->Release();
            throw RBX::runtime_error("failed to create swapchain: %x", hr);
        }

        IDXGIDevice3* dxgiDevice3 = nullptr;
        hr = spdxgiDevice->QueryInterface(IID_PPV_ARGS(&dxgiDevice3));
        if (SUCCEEDED(hr) && dxgiDevice3)
        {
            hr = dxgiDevice3->SetMaximumFrameLatency(1);
            dxgiDevice3->Release();
        }

        setSwapChainOnUIThread(swapch);

        float compositionScaleX = 1.0f, compositionScaleY = 1.0f;
        getUWPCompositionScale(&compositionScaleX, &compositionScaleY);

        IDXGISwapChain2* swapChain2 = nullptr;
        hr = swapch->QueryInterface(IID_PPV_ARGS(&swapChain2));
        if (SUCCEEDED(hr) && swapChain2)
        {
            DXGI_MATRIX_3X2_F inverseScale = { 0 };
            inverseScale._11 = 1.0f / compositionScaleX;
            inverseScale._22 = 1.0f / compositionScaleY;
            hr = swapChain2->SetMatrixTransform(&inverseScale);
            if (FAILED(hr))
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "Xbox: SetMatrixTransform failed: 0x%x", hr);
            }
            else
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "Xbox: SetMatrixTransform set (%.2f, %.2f)", compositionScaleX, compositionScaleY);
            }
            swapChain2->Release();
        }

        spdxgiDevice->Release();

        return swapch;
    }

    static IDXGISwapChain* createSwapchainDesktop(ID3D11Device* dev, unsigned w, unsigned h)
    {
        HRESULT hr;
        IDXGISwapChain1* swapch = nullptr;

        IDXGIDevice1* spdxgiDevice = nullptr;
        hr = dev->QueryInterface(IID_PPV_ARGS(&spdxgiDevice));
        if (FAILED(hr))
        {
            throw std::runtime_error("Failed to get IDXGIDevice1");
        }

        IDXGIAdapter* spdxgiAdapter = nullptr;
        hr = spdxgiDevice->GetAdapter(&spdxgiAdapter);
        if (FAILED(hr))
        {
            spdxgiDevice->Release();
            throw std::runtime_error("Failed to get IDXGIAdapter");
        }

        IDXGIFactory2* spdxgiFactory = nullptr;
        hr = spdxgiAdapter->GetParent(IID_PPV_ARGS(&spdxgiFactory));
        if (FAILED(hr))
        {
            spdxgiDevice->Release();
            spdxgiAdapter->Release();
            throw std::runtime_error("Failed to get IDXGIFactory2");
        }

        DXGI_SWAP_CHAIN_DESC1 swapChainDesc = {0};
        swapChainDesc.Width = w;
        swapChainDesc.Height = h;
        swapChainDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        swapChainDesc.Stereo = false;
        swapChainDesc.SampleDesc.Count = 1;
        swapChainDesc.SampleDesc.Quality = 0;
        swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        swapChainDesc.BufferCount = 2;
        swapChainDesc.Scaling = DXGI_SCALING_STRETCH;
        swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
        swapChainDesc.AlphaMode = DXGI_ALPHA_MODE_IGNORE;
        swapChainDesc.Flags = 0;

        IUnknown* swapChainPanel = getUWPSwapChainPanel();
        if (!swapChainPanel)
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "createSwapchain: SwapChainPanel is NULL!");
            spdxgiDevice->Release();
            spdxgiFactory->Release();
            spdxgiAdapter->Release();
            throw std::runtime_error("SwapChainPanel is null");
        }

        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "createSwapchain: Creating SwapChain (%dx%d)...", w, h);
        hr = spdxgiFactory->CreateSwapChainForComposition(dev, &swapChainDesc, nullptr, &swapch);

        spdxgiFactory->Release();
        spdxgiAdapter->Release();

        if (FAILED(hr))
        {
            char errorBuf[256];
            sprintf_s(errorBuf, sizeof(errorBuf), "Unable to create swap chain: %x", hr);
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, errorBuf);
            throw std::runtime_error(errorBuf);
        }

        setSwapChainOnUIThread(swapch);

        float compositionScaleX = 1.0f, compositionScaleY = 1.0f;
        getUWPCompositionScale(&compositionScaleX, &compositionScaleY);

        IDXGISwapChain2* swapChain2 = nullptr;
        hr = swapch->QueryInterface(IID_PPV_ARGS(&swapChain2));
        if (SUCCEEDED(hr) && swapChain2)
        {
            DXGI_MATRIX_3X2_F inverseScale = { 0 };
            inverseScale._11 = 1.0f / compositionScaleX;
            inverseScale._22 = 1.0f / compositionScaleY;
            hr = swapChain2->SetMatrixTransform(&inverseScale);
            if (FAILED(hr))
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "SetMatrixTransform failed: 0x%x", hr);
            }
            swapChain2->Release();
        }

        spdxgiDevice->Release();

        return swapch;
    }

    IDXGISwapChain* createSwapchain(ID3D11Device* dev, unsigned w, unsigned h)
    {

        if (isXbox())
        {
            return createSwapchainXbox(dev, w, h);
        }
        else
        {
            return createSwapchainDesktop(dev, w, h);
        }
    }

    void DeviceD3D11::createDevice()
    {
        ID3D11Device* dev = NULL;
        ID3D11DeviceContext* ctx = NULL;

        UINT flags = 0;
        if (FFlag::DebugD3D11DebugMode)
        {
            flags |= D3D11_CREATE_DEVICE_DEBUG;
        }

D3D_FEATURE_LEVEL featureLevels[] = {
    D3D_FEATURE_LEVEL_11_1,
    D3D_FEATURE_LEVEL_11_0,
    D3D_FEATURE_LEVEL_10_1,
    D3D_FEATURE_LEVEL_10_0,
    D3D_FEATURE_LEVEL_9_3,
    D3D_FEATURE_LEVEL_9_2,
    D3D_FEATURE_LEVEL_9_1
};

UINT numFeatureLevels;
D3D_FEATURE_LEVEL actualFeatureLevel;
HRESULT hr;

if (isARM())
{
    D3D_FEATURE_LEVEL armFeatureLevels[] = {
        D3D_FEATURE_LEVEL_9_3,
        D3D_FEATURE_LEVEL_9_2,
        D3D_FEATURE_LEVEL_9_1
    };
    numFeatureLevels = ARRAYSIZE(armFeatureLevels);
    hr = D3D11CreateDevice(
        NULL,
        D3D_DRIVER_TYPE_HARDWARE,
        NULL,
        flags,
        armFeatureLevels,
        numFeatureLevels,
        D3D11_SDK_VERSION,
        &dev,
        &actualFeatureLevel,
        &ctx
    );
}
else
{
    numFeatureLevels = ARRAYSIZE(featureLevels);
    hr = D3D11CreateDevice(
        NULL,
        D3D_DRIVER_TYPE_HARDWARE,
        NULL,
        flags,
        featureLevels,
        numFeatureLevels,
        D3D11_SDK_VERSION,
        &dev,
        &actualFeatureLevel,
        &ctx
    );
}

        if (FAILED(hr))
        {
            char errorBuf[256];
            sprintf_s(errorBuf, sizeof(errorBuf), "Unable to create D3D device: %x", hr);
            throw std::runtime_error(errorBuf);
        }


        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "D3D11 Device created. Feature Level: 0x%x", actualFeatureLevel);

        std::pair<unsigned int, unsigned int> fbsize = getFramebufferSize();

        this->device11 = dev;
        this->immediateContext.reset(new DeviceContextD3D11(this, ctx));

        if (isARM())
        {
            this->shaderProfile = shaderProfile_DX11_level_9_3;
        }
        else
        {
            this->shaderProfile = shaderProfile_DX11;
        }

        this->swapChain11 = createSwapchain(dev, fbsize.first, fbsize.second);
    }

    void DeviceD3D11::present()
    {
        DXGI_PRESENT_PARAMETERS parameters = {0};
        parameters.DirtyRectsCount = 0;
        parameters.pDirtyRects = NULL;
        parameters.pScrollRect = NULL;
        parameters.pScrollOffset = NULL;

        HRESULT hr = static_cast<IDXGISwapChain1*>(swapChain11)->Present1(1, 0, &parameters);
        if (FAILED(hr))
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "Present1 failed: %x", hr);
        }
    }

    void DeviceD3D11::resizeSwapchain()
    {
        IDXGISwapChain1* swapChain1 = static_cast<IDXGISwapChain1*>(swapChain11);

        HRESULT hr = swapChain1->ResizeBuffers(0, 0, 0, DXGI_FORMAT_UNKNOWN, 0);
        if (FAILED(hr))
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_OUTPUT, "ResizeBuffers failed: %x, recreating swap chain", hr);
            std::pair<unsigned int, unsigned int> dimensions = getFramebufferSize();
            ReleaseCheck(swapChain11);
            swapChain11 = createSwapchain(device11, dimensions.first, dimensions.second);
        }
        RBXASSERT(swapChain11);
    }

    std::pair<unsigned int, unsigned int> DeviceD3D11::getFramebufferSize()
    {
        unsigned int width = 800, height = 600;
        getUWPFramebufferSize(&width, &height);
        return std::make_pair(width, height);
    }

}}
#endif
