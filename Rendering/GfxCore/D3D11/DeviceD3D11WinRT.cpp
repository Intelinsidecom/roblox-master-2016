#if defined(RBX_PLATFORM_WIN_PHONE)

#include "DeviceD3D11.h"
#include "HeadersD3D11.h"

#include <windows.h>
#include <objbase.h>
#include <inspectable.h>
#include <unknwn.h>

#include <atomic>
#include "util/standardout.h"

MIDL_INTERFACE("79118DCD-CA4E-4D07-BD4E-5FC5BE127017")
ISwapChainPanelNative : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetSwapChain(IUnknown* swapChain) = 0;
};

FASTFLAG(DebugD3D11DebugMode)

namespace
{
    static std::atomic<bool> g_swapChainAttached(false);
    static std::atomic<unsigned int> g_cachedFbWidth(0);
    static std::atomic<unsigned int> g_cachedFbHeight(0);

    static IDXGISwapChain* createSwapChainForPanel(ID3D11Device* dev, unsigned w, unsigned h, void* windowHandle)
    {
        HRESULT hr;

        IDXGIDevice1* spdxgiDevice = NULL;
        hr = dev->QueryInterface(__uuidof(IDXGIDevice1), (void**)&spdxgiDevice);
        if (FAILED(hr))
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "WP: Failed to get IDXGIDevice1: 0x%x", hr);
            throw std::runtime_error("Failed to get IDXGIDevice1");
        }

        IDXGIAdapter* spdxgiAdapter = NULL;
        hr = spdxgiDevice->GetAdapter(&spdxgiAdapter);
        if (FAILED(hr))
        {
            spdxgiDevice->Release();
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "WP: Failed to get IDXGIAdapter: 0x%x", hr);
            throw std::runtime_error("Failed to get IDXGIAdapter");
        }

        IDXGIFactory2* spdxgiFactory = NULL;
        hr = spdxgiAdapter->GetParent(__uuidof(IDXGIFactory2), (void**)&spdxgiFactory);
        spdxgiAdapter->Release();
        if (FAILED(hr))
        {
            spdxgiDevice->Release();
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "WP: Failed to get IDXGIFactory2: 0x%x", hr);
            throw std::runtime_error("Failed to get IDXGIFactory2");
        }

        DXGI_SWAP_CHAIN_DESC1 swapChainDesc = {};
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

        IDXGISwapChain1* swapch = nullptr;
        hr = spdxgiFactory->CreateSwapChainForComposition(dev, &swapChainDesc, nullptr, &swapch);
        if (FAILED(hr))
        {
            spdxgiFactory->Release();
            char errorBuf[256];
            sprintf_s(errorBuf, sizeof(errorBuf), "WP: Unable to create swap chain: %x", hr);
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, errorBuf);
            throw std::runtime_error(errorBuf);
        }

        spdxgiFactory->Release();

        spdxgiDevice->SetMaximumFrameLatency(1);
        spdxgiDevice->Release();

        if (!windowHandle)
        {
            swapch->Release();
            throw std::runtime_error("WP: windowHandle is null");
        }

        g_swapChainAttached.store(false, std::memory_order_release);

        IInspectable* inspectable = reinterpret_cast<IInspectable*>(windowHandle);
        ISwapChainPanelNative* panelNative = NULL;
        hr = inspectable->QueryInterface(__uuidof(ISwapChainPanelNative), (void**)&panelNative);
        if (SUCCEEDED(hr) && panelNative)
        {
            hr = panelNative->SetSwapChain(swapch);
            panelNative->Release();
            if (FAILED(hr))
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "WP: SetSwapChain failed: 0x%x", hr);
            }
            else
            {
                g_swapChainAttached.store(true, std::memory_order_release);
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "WP: Swap chain attached to panel (%dx%d)", w, h);
            }
        }
        else
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "WP: Failed to get ISwapChainPanelNative: 0x%x", hr);
        }

        return swapch;
    }
}

extern "C" void updateWPFramebufferSize(unsigned int width, unsigned int height)
{
    g_cachedFbWidth.store(width, std::memory_order_relaxed);
    g_cachedFbHeight.store(height, std::memory_order_relaxed);
}

namespace RBX
{
namespace Graphics
{

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
            D3D_FEATURE_LEVEL_9_3,
            D3D_FEATURE_LEVEL_9_2,
            D3D_FEATURE_LEVEL_9_1
        };

        D3D_FEATURE_LEVEL actualFeatureLevel;
        UINT numFeatureLevels = ARRAYSIZE(featureLevels);

        HRESULT hr = D3D11CreateDevice(
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

        if (FAILED(hr))
        {
            hr = D3D11CreateDevice(
                NULL,
                D3D_DRIVER_TYPE_WARP,
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
            sprintf_s(errorBuf, sizeof(errorBuf), "WP: Unable to create D3D device: %x", hr);
            throw std::runtime_error(errorBuf);
        }

        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "WP D3D11 Device created. Feature Level: 0x%x", actualFeatureLevel);

        this->device11 = dev;
        this->immediateContext.reset(new DeviceContextD3D11(this, ctx));
        this->shaderProfile = shaderProfile_DX11_level_9_3;

        std::pair<unsigned int, unsigned int> fbsize = getFramebufferSize();

        this->swapChain11 = createSwapChainForPanel(dev, fbsize.first, fbsize.second, windowHandle);
        this->swapChainNeedsRebind = false;
    }

    void DeviceD3D11::present()
    {
        if (!swapChain11)
            return;

        if (!g_swapChainAttached.load(std::memory_order_acquire))
            return;

        IDXGISwapChain1* swapChain1 = static_cast<IDXGISwapChain1*>(swapChain11);
        HRESULT hr = swapChain1->Present1(1, 0, NULL);

        if (FAILED(hr))
        {
            if (hr == DXGI_ERROR_DEVICE_REMOVED)
            {
                HRESULT reason = device11 ? device11->GetDeviceRemovedReason() : S_OK;
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "WP Present1: D3D11 device removed (hr=%08x, reason=%08x)", hr, reason);
            }
            else if (hr == DXGI_ERROR_DEVICE_RESET)
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "WP Present1: D3D11 device reset (hr=%08x)", hr);
            }
            else
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "WP Present1 failed: %08x", hr);
            }
        }
    }

    void DeviceD3D11::resizeSwapchain()
    {
        if (!swapChain11)
            return;

        IDXGISwapChain1* swapChain1 = static_cast<IDXGISwapChain1*>(swapChain11);

        std::pair<unsigned int, unsigned int> dimensions = getFramebufferSize();

        HRESULT hr = swapChain1->ResizeBuffers(0, dimensions.first, dimensions.second, DXGI_FORMAT_UNKNOWN, 0);
        if (FAILED(hr))
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_OUTPUT, "WP ResizeBuffers failed: %x, recreating swap chain", hr);
            ReleaseCheck(swapChain11);
            swapChain11 = createSwapChainForPanel(device11, dimensions.first, dimensions.second, windowHandle);
            swapChainNeedsRebind = false;
        }
        else
        {
            swapChainNeedsRebind = true;
        }
        RBXASSERT(swapChain11);
    }

    std::pair<unsigned int, unsigned int> DeviceD3D11::getFramebufferSize()
    {
        unsigned int w = g_cachedFbWidth.load(std::memory_order_relaxed);
        unsigned int h = g_cachedFbHeight.load(std::memory_order_relaxed);
        if (w == 0) w = 800;
        if (h == 0) h = 600;
        return std::make_pair(w, h);
    }

    void DeviceD3D11::rebindSwapChain()
    {
        if (!swapChain11 || !windowHandle)
            return;

        IInspectable* inspectable = reinterpret_cast<IInspectable*>(windowHandle);
        ISwapChainPanelNative* panelNative = NULL;
        HRESULT hr = inspectable->QueryInterface(__uuidof(ISwapChainPanelNative), (void**)&panelNative);
        if (FAILED(hr) || !panelNative)
            return;

        g_swapChainAttached.store(false, std::memory_order_release);

        hr = panelNative->SetSwapChain(static_cast<IUnknown*>(swapChain11));
        panelNative->Release();
        if (SUCCEEDED(hr))
        {
            g_swapChainAttached.store(true, std::memory_order_release);
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "WP: Swap chain rebound to panel");
        }
        else
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "WP: SetSwapChain rebind failed: 0x%x", hr);
        }

        swapChainNeedsRebind = false;
    }

    extern "C" void getWPCompositionScale(float* scaleX, float* scaleY)
    {
        if (scaleX) *scaleX = 1.0f;
        if (scaleY) *scaleY = 1.0f;
    }

}
}

#endif
