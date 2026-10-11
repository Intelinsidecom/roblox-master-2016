#if defined(ENABLE_XBOX_BUILD)

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
extern "C" void uwpNotifyFramePresented();
extern "C" bool isSwapChainAttached();
extern "C" IUnknown* getUWPCoreWindow();
extern "C" void uwpMarkSwapChainAttached();
extern "C" void uwpUnmarkSwapChainAttached();

static bool isXbox()
{
    static int result = -1;
    if (result == -1)
    {
        try {
            auto analyticsInfo = Windows::System::Profile::AnalyticsInfo::VersionInfo;
            auto deviceFamily = analyticsInfo->DeviceFamily;
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

static IDXGISwapChain* createSwapchainCoreWindow(ID3D11Device* dev, unsigned w, unsigned h)
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

    IUnknown* coreWindow = getUWPCoreWindow();
    if (!coreWindow)
    {
        spdxgiDevice->Release();
        spdxgiFactory->Release();
        spdxgiAdapter->Release();
    }

    hr = spdxgiFactory->CreateSwapChainForCoreWindow(dev, coreWindow, &swapChainDesc, nullptr, &swapch);

    spdxgiFactory->Release();
    spdxgiAdapter->Release();

    if (FAILED(hr))
    {
        char errorBuf[256];
        sprintf_s(errorBuf, sizeof(errorBuf), "XboxUWP: Unable to create swap chain: %x", hr);
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
            "Gfx/D3D11: CreateSwapChainForCoreWindow failed hr=0x%08X", (unsigned)hr);
        throw std::runtime_error(errorBuf);
    }

    spdxgiDevice->Release();

    uwpMarkSwapChainAttached();

    return swapch;
}

static IDXGISwapChain* createSwapchainXbox(ID3D11Device* dev, unsigned w, unsigned h)
{
    return createSwapchainCoreWindow(dev, w, h);
}

IDXGISwapChain* createSwapchain(ID3D11Device* dev, unsigned w, unsigned h)
{
    if (!getUWPSwapChainPanel())
    {
        return createSwapchainCoreWindow(dev, w, h);
    }
    else if (isXbox())
    {
        return createSwapchainXbox(dev, w, h);
    }
    else
    {
        throw std::runtime_error("SwapChainPanel is null");
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

    D3D_FEATURE_LEVEL armFeatureLevels[] =
    {
        D3D_FEATURE_LEVEL_9_3,
        D3D_FEATURE_LEVEL_9_2,
        D3D_FEATURE_LEVEL_9_1
    };

    bool arm = isARM();
    D3D_FEATURE_LEVEL* levels = arm ? armFeatureLevels : featureLevels;
    UINT levelCount = arm ? (UINT)ARRAYSIZE(armFeatureLevels) : (UINT)ARRAYSIZE(featureLevels);

    D3D_FEATURE_LEVEL actualFeatureLevel = D3D_FEATURE_LEVEL_9_1;

    HRESULT hr = D3D11CreateDevice(
        NULL,
        D3D_DRIVER_TYPE_HARDWARE,
        NULL,
        flags,
        levels,
        levelCount,
        D3D11_SDK_VERSION,
        &dev,
        &actualFeatureLevel,
        &ctx
    );

    if (FAILED(hr) && (flags & D3D11_CREATE_DEVICE_DEBUG) != 0)
    {

        if (dev) { dev->Release(); dev = NULL; }
        if (ctx) { ctx->Release(); ctx = NULL; }
        flags &= ~D3D11_CREATE_DEVICE_DEBUG;

        hr = D3D11CreateDevice(
            NULL,
            D3D_DRIVER_TYPE_HARDWARE,
            NULL,
            flags,
            levels,
            levelCount,
            D3D11_SDK_VERSION,
            &dev,
            &actualFeatureLevel,
            &ctx
        );
    }

    if (FAILED(hr))
    {
        char errorBuf[256];
        sprintf_s(errorBuf, sizeof(errorBuf), "XboxUWP: Unable to create D3D device%s: %x", arm ? " (ARM)" : "", hr);
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
            "Gfx/D3D11: D3D11CreateDevice failed hr=0x%08X arm=%d flags=0x%X",
            (unsigned)hr, arm ? 1 : 0, flags);
        throw std::runtime_error(errorBuf);
    }

    std::pair<unsigned int, unsigned int> fbsize = getFramebufferSize();

    this->device11 = dev;
    this->immediateContext.reset(new DeviceContextD3D11(this, ctx));

    const char* profileName = NULL;

    if (actualFeatureLevel >= D3D_FEATURE_LEVEL_11_0)
    {
        this->shaderProfile = shaderProfile_DX11;
        profileName = "DX11 (SM5)";
    }
    else if (actualFeatureLevel >= D3D_FEATURE_LEVEL_10_0)
    {
        this->shaderProfile = shaderProfile_DX11_level_10_1;
        profileName = "DX11_10.1 (SM4.1)";
    }
    else
    {
        this->shaderProfile = shaderProfile_DX11_level_9_3;
        profileName = "DX11_9.3 (SM4)";
    }

    this->swapChain11 = createSwapchain(dev, fbsize.first, fbsize.second);
}

void DeviceD3D11::present()
{
    if (!isSwapChainAttached() || !swapChain11)
    {
        // Logged once: this early return is silent by design and is the most
        // likely place for rendering to stop without raising anything.
        static bool warnedNotAttached = false;
        if (!warnedNotAttached)
        {
            warnedNotAttached = true;
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO,
                "Gfx/D3D11: present() skipped, isSwapChainAttached=%d swapChain=%p",
                isSwapChainAttached() ? 1 : 0, (void*)swapChain11);
        }
        return;
    }

    DXGI_PRESENT_PARAMETERS parameters = {0};
    parameters.DirtyRectsCount = 0;
    parameters.pDirtyRects = NULL;
    parameters.pScrollRect = NULL;
    parameters.pScrollOffset = NULL;


    HRESULT hr = static_cast<IDXGISwapChain1*>(swapChain11)->Present1(1, 0, &parameters);
    if (SUCCEEDED(hr))
    {
        static bool announcedFirstPresent = false;
        uwpNotifyFramePresented();
    }
    else
    {
        static bool warnedPresentFailed = false;
        if (!warnedPresentFailed)
        {
            warnedPresentFailed = true;
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                "Gfx/D3D11: Present1 failed hr=0x%08X (further failures not logged)",
                (unsigned)hr);
        }
    }
}

void DeviceD3D11::resizeSwapchain()
{
    IDXGISwapChain1* swapChain1 = static_cast<IDXGISwapChain1*>(swapChain11);

    std::pair<unsigned int, unsigned int> dimensions = getFramebufferSize();

    HRESULT hr = swapChain1->ResizeBuffers(0, dimensions.first, dimensions.second, DXGI_FORMAT_UNKNOWN, 0);
    if (FAILED(hr))
    {
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO,
            "Gfx/D3D11: ResizeBuffers(%ux%u) failed hr=0x%08X - recreating swap chain",
            dimensions.first, dimensions.second, (unsigned)hr);
        uwpUnmarkSwapChainAttached();
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

} // namespace Graphics
} // namespace RBX

#endif // ENABLE_XBOX_BUILD