#if defined(RBX_PLATFORM_WIN_PHONE)

#include "DeviceD3D11.h"
#include "HeadersD3D11.h"

#include <windows.h>
#include <objbase.h>
#include <inspectable.h>
#include <unknwn.h>
#include <windows.ui.xaml.media.dxinterop.h>

#include <atomic>
#include "util/standardout.h"

FASTFLAG(DebugD3D11DebugMode)

namespace
{
    static std::atomic<bool> g_swapChainAttached(false);
    static std::atomic<uint64_t> g_fbSize((uint64_t(800) << 32) | 600);
    static IDXGISwapChain* createSwapChainForPanel(ID3D11Device* dev, unsigned w, unsigned h, void* panel)
    {
        IDXGIDevice1* dxgiDevice = NULL;
        if (FAILED(dev->QueryInterface(__uuidof(IDXGIDevice1), (void**)&dxgiDevice)))
            throw std::runtime_error("WP: no IDXGIDevice1");

        IDXGIAdapter* adapter = NULL;
        HRESULT hr = dxgiDevice->GetAdapter(&adapter);
        if (FAILED(hr))
        {
            dxgiDevice->Release();
            throw std::runtime_error("WP: no IDXGIAdapter");
        }

        IDXGIFactory2* factory = NULL;
        hr = adapter->GetParent(__uuidof(IDXGIFactory2), (void**)&factory);
        adapter->Release();
        if (FAILED(hr))
        {
            dxgiDevice->Release();
            throw std::runtime_error("WP: no IDXGIFactory2");
        }

        DXGI_SWAP_CHAIN_DESC1 desc = {};
        desc.Width = w;
        desc.Height = h;
        desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        desc.SampleDesc.Count = 1;
        desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        desc.BufferCount = 2;
        desc.Scaling = DXGI_SCALING_STRETCH;
        desc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
        desc.AlphaMode = DXGI_ALPHA_MODE_IGNORE;

        IDXGISwapChain1* swapch = nullptr;
        hr = factory->CreateSwapChainForComposition(dev, &desc, nullptr, &swapch);
        factory->Release();
        if (FAILED(hr))
        {
            dxgiDevice->Release();
            throw RBX::runtime_error("WP: CreateSwapChainForComposition: %x", hr);
        }

        dxgiDevice->SetMaximumFrameLatency(1);
        dxgiDevice->Release();

        if (!panel)
        {
            swapch->Release();
            throw std::runtime_error("WP: null SwapChainPanel");
        }

        g_swapChainAttached.store(false, std::memory_order_release);
        IInspectable* inspectable = reinterpret_cast<IInspectable*>(panel);
        ISwapChainPanelNative* native = NULL;
        hr = inspectable->QueryInterface(__uuidof(ISwapChainPanelNative), (void**)&native);
        if (SUCCEEDED(hr) && native)
        {
            hr = native->SetSwapChain(swapch);
            native->Release();
            if (SUCCEEDED(hr))
            {
                g_swapChainAttached.store(true, std::memory_order_release);
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO,
                    "WP: Swap chain attached (%dx%d, R8G8B8A8 flip-sequential)", w, h);
            }
            else
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "WP: SetSwapChain failed: 0x%x (UI thread?)", hr);
        }
        else
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                "WP: no ISwapChainPanelNative: 0x%x (create view on UI thread)", hr);

        inspectable->Release();
        return swapch;
    }
}

extern "C" void updateWPFramebufferSize(unsigned int width, unsigned int height)
{
    if (width && height)
        g_fbSize.store((uint64_t(width) << 32) | height, std::memory_order_release);
}

namespace RBX
{
namespace Graphics
{

    void DeviceD3D11::createDevice()
    {
        UINT flags = 0;
        if (FFlag::DebugD3D11DebugMode)
            flags |= D3D11_CREATE_DEVICE_DEBUG;

        D3D_FEATURE_LEVEL levels[] = { D3D_FEATURE_LEVEL_9_3, D3D_FEATURE_LEVEL_9_2, D3D_FEATURE_LEVEL_9_1 };
        D3D_FEATURE_LEVEL actual = D3D_FEATURE_LEVEL_9_1;
        ID3D11Device* dev = NULL;
        ID3D11DeviceContext* ctx = NULL;

        HRESULT hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, flags,
            levels, ARRAYSIZE(levels), D3D11_SDK_VERSION, &dev, &actual, &ctx);
        if (FAILED(hr))
            hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_WARP, NULL, flags,
                levels, ARRAYSIZE(levels), D3D11_SDK_VERSION, &dev, &actual, &ctx);
        if (FAILED(hr))
            throw RBX::runtime_error("WP: Unable to create D3D device: %x", hr);

        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO,
            "WP D3D11 Device created. Feature Level: 0x%x", actual);

        this->device11 = dev;
        this->immediateContext.reset(new DeviceContextD3D11(this, ctx));
        this->shaderProfile = shaderProfile_DX11_level_9_3;

        std::pair<unsigned int, unsigned int> fb = getFramebufferSize();
        this->swapChain11 = createSwapChainForPanel(dev, fb.first, fb.second, windowHandle);
        this->swapChainNeedsRebind = false;
    }

    void DeviceD3D11::present()
    {
        if (!swapChain11 || !g_swapChainAttached.load(std::memory_order_acquire))
            return;
        std::pair<unsigned int, unsigned int> d = getFramebufferSize();
        if (d.first == 0 || d.second == 0)
            return;
        HRESULT hr = swapChain11->Present(1, 0);
        if (FAILED(hr))
        {
            if (hr == DXGI_ERROR_DEVICE_REMOVED)
            {
                HRESULT reason = device11 ? device11->GetDeviceRemovedReason() : S_OK;
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "WP Present: device removed (hr=%08x, reason=%08x)", hr, reason);
                g_swapChainAttached.store(false, std::memory_order_release);
            }
            else if (hr != DXGI_ERROR_DEVICE_RESET)
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "WP Present failed: %08x", hr);
            }
        }
    }

    void DeviceD3D11::resizeSwapchain()
    {
        if (!swapChain11)
            return;
        std::pair<unsigned int, unsigned int> d = getFramebufferSize();
        HRESULT hr = static_cast<IDXGISwapChain1*>(swapChain11)->ResizeBuffers(
            0, d.first, d.second, DXGI_FORMAT_UNKNOWN, 0);
        if (FAILED(hr))
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_OUTPUT,
                "WP ResizeBuffers(%dx%d) failed: %x, recreating swap chain", d.first, d.second, hr);
            ReleaseCheck(swapChain11);
            reinterpret_cast<IInspectable*>(windowHandle)->AddRef();
            swapChain11 = createSwapChainForPanel(device11, d.first, d.second, windowHandle);
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO,
                "WP swap chain recreated (%dx%d)", d.first, d.second);
            swapChainNeedsRebind = false;
        }
        else
        {
            // Composition needs SetSwapChain again after ResizeBuffers.
            rebindSwapChain();
        }
        RBXASSERT(swapChain11);
    }

    std::pair<unsigned int, unsigned int> DeviceD3D11::getFramebufferSize()
    {
        uint64_t v = g_fbSize.load(std::memory_order_acquire);
        return std::make_pair(unsigned int(v >> 32), unsigned int(v & 0xFFFFFFFF));
    }

    void DeviceD3D11::rebindSwapChain()
    {
        if (!swapChain11 || !windowHandle)
            return;
        ISwapChainPanelNative* native = NULL;
        HRESULT hr = reinterpret_cast<IInspectable*>(windowHandle)->QueryInterface(
            __uuidof(ISwapChainPanelNative), (void**)&native);
        if (FAILED(hr) || !native)
            return;
        g_swapChainAttached.store(false, std::memory_order_release);
        hr = native->SetSwapChain(swapChain11);
        native->Release();
        if (SUCCEEDED(hr))
            g_swapChainAttached.store(true, std::memory_order_release);
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
