#include "pch.h"
#include <windows.ui.core.h>
#include <windows.ui.xaml.media.dxinterop.h>
#include <windows.graphics.display.h>
#include <atomic>
#include <string>

namespace
{
    Windows::UI::Core::CoreWindow^ g_coreWindow = nullptr;
    std::atomic<unsigned int> g_cachedFbWidth{ 0 };
    std::atomic<unsigned int> g_cachedFbHeight{ 0 };
    std::atomic<float> g_cachedCompScaleX{ 1.0f };
    std::atomic<float> g_cachedCompScaleY{ 1.0f };
    std::atomic<bool> g_swapChainAttached{ false };
    std::atomic<bool> g_gameReadyFired{ false };
}

extern "C" void uwpMarkSwapChainAttached();
extern "C" void uwpUnmarkSwapChainAttached();

extern void dprintf(const char* fmt, ...);

void UwpHooks_SetCoreWindow(Windows::UI::Core::CoreWindow^ cw)
{
    g_coreWindow = cw;
    g_coreWindow = cw;
    if (!cw)
    {
        return;
    }

    try
    {
        auto displayInfo = Windows::Graphics::Display::DisplayInformation::GetForCurrentView();
        if (displayInfo)
        {
            float scale = displayInfo->RawPixelsPerViewPixel;
            g_cachedCompScaleX.store(scale, std::memory_order_relaxed);
            g_cachedCompScaleY.store(scale, std::memory_order_relaxed);

            auto bounds = cw->Bounds;
            unsigned int w = static_cast<unsigned int>(bounds.Width * scale);
            unsigned int h = static_cast<unsigned int>(bounds.Height * scale);
            g_cachedFbWidth.store(w, std::memory_order_relaxed);
            g_cachedFbHeight.store(h, std::memory_order_relaxed);

        }
        else
        {
            dprintf("DisplayInformation::GetForCurrentView() returned null\n");
        }
    }
    catch (Platform::Exception^ ex)
    {
        dprintf("DisplayInformation::GetForCurrentView() threw hr=0x%08X\n",
            (unsigned)ex->HResult);
    }
    catch (...)
    {
        dprintf("DisplayInformation::GetForCurrentView() threw\n");
    }
}

extern "C" void getUWPCompositionScale(float* scaleX, float* scaleY)
{
    float x = g_cachedCompScaleX.load(std::memory_order_relaxed);
    float y = g_cachedCompScaleY.load(std::memory_order_relaxed);
    if (scaleX) *scaleX = x;
    if (scaleY) *scaleY = y;
}

extern "C" void getUWPFramebufferSize(unsigned int* width, unsigned int* height)
{
    static std::string deviceFamily = []() {
        try {
            auto family = Windows::System::Profile::AnalyticsInfo::VersionInfo->DeviceFamily;
            std::wstring wfamily(family->Begin(), family->End());
            return std::string(wfamily.begin(), wfamily.end());
        }
        catch (...) {
            return std::string("Windows.Desktop");
        }
    }();

    static bool loggedFrameBuffer = false;

    if (deviceFamily == "Windows.Xbox")
    {
        if (width)  *width = 1920;
        if (height) *height = 1080;

        return;
    }

    unsigned int w = g_cachedFbWidth.load(std::memory_order_relaxed);
    unsigned int h = g_cachedFbHeight.load(std::memory_order_relaxed);

    if (w == 0 || h == 0)
    {
        try
        {
            if (g_coreWindow)
            {
                auto bounds = g_coreWindow->Bounds;
                auto displayInfo = Windows::Graphics::Display::DisplayInformation::GetForCurrentView();
                float scale = displayInfo ? displayInfo->RawPixelsPerViewPixel : 1.0f;
                w = static_cast<unsigned int>(bounds.Width * scale);
                h = static_cast<unsigned int>(bounds.Height * scale);
            }
        }
        catch (...)
        {
        }
    }

    if (w == 0) w = 800;
    if (h == 0) h = 600;

    if (width)  *width = w;
    if (height) *height = h;
}

extern "C" IUnknown* getUWPSwapChainPanel()
{
    return nullptr; // No XAML SwapChainPanel in this app
}

extern "C" IUnknown* getUWPCoreWindow()
{
    if (g_coreWindow)
    {
        return reinterpret_cast<IUnknown*>(g_coreWindow);
    }
    return nullptr;
}

extern "C" void setSwapChainOnUIThread(IUnknown* swapChain)
{
    (void)swapChain;
    if (swapChain)
    {
        uwpMarkSwapChainAttached();
    }
}

extern "C" void uwpMarkSwapChainAttached()
{
    g_swapChainAttached.store(true, std::memory_order_release);
}

extern "C" void uwpUnmarkSwapChainAttached()
{
    g_swapChainAttached.store(false, std::memory_order_release);
}

extern "C" void uwpNotifyFramePresented()
{
    if (!g_swapChainAttached.load(std::memory_order_acquire))
        return;

    bool expected = false;
    if (!g_gameReadyFired.compare_exchange_strong(expected, true, std::memory_order_acq_rel))
        return;
}

extern "C" bool isSwapChainAttached()
{
    return g_swapChainAttached.load(std::memory_order_acquire);
}