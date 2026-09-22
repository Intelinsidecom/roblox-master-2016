#include "pch.h"
#include "PhonePlatform.h"
#include "WPFunctionMarshaller.h"

#include <atomic>
#include <chrono>
#include <cmath>
#include <wrl.h>
#include <windows.ui.xaml.media.dxinterop.h>

#include "util/standardout.h"
#include "util/Http.h"
#include "v8datamodel/FastLogSettings.h"

namespace
{
    std::atomic<bool> g_isLowMemoryDevice{false};
    std::atomic<bool> g_isLowMemoryDeviceKnown{false};

    struct MemoryStatusExLocal
    {
        DWORD     dwLength;
        DWORD     dwMemoryLoad;
        DWORDLONG ullTotalPhys;
        DWORDLONG ullAvailPhys;
        DWORDLONG ullTotalPageFile;
        DWORDLONG ullAvailPageFile;
        DWORDLONG ullTotalVirtual;
        DWORDLONG ullAvailVirtual;
        DWORDLONG ullAvailExtendedVirtual;
    };

    extern "C" __declspec(dllimport) BOOL WINAPI GlobalMemoryStatusEx(MemoryStatusExLocal* lpBuffer);

    static bool computeIsLowMemoryDevice()
    {
        MemoryStatusExLocal status;
        status.dwLength = sizeof(status);
        if (GlobalMemoryStatusEx(&status))
        {
            bool lowMem = status.ullTotalPhys <= (1024ull * 1024 * 1024);
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO,
                "RAM detected: %llu MB (lowMem=%d)",
                (unsigned long long)(status.ullTotalPhys / (1024 * 1024)),
                (int)lowMem);
            return lowMem;
        }
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_INFO,
            "GlobalMemoryStatusEx failed, assuming uncapable device");
        return true;
    }
}

namespace
{
    Windows::UI::Xaml::Controls::SwapChainPanel^ g_panel = nullptr;
    std::atomic<unsigned int> g_fbW{0};
    std::atomic<unsigned int> g_fbH{0};
    std::atomic<float> g_scaleX{1.0f};
    std::atomic<float> g_scaleY{1.0f};
    std::chrono::steady_clock::time_point g_lastSizeChange{};

    float ComputeEffectiveScale(float compositionScale, float recommended)
    {
        float eff = compositionScale;
        if (eff > recommended) eff = recommended;
        if (eff < 0.5f) eff = 0.5f;
        return eff;
    }

    float RecommendedScaleForPhone()
    {
        if (PhonePlatform::GetInstance().IsLowMemoryDevice())
            return 0.75f;
        return 1.0f;
    }
}

extern "C" bool isWPPhone()
{
    return true;
}

extern "C" void* getWPSwapChainPanel()
{
    if (!g_panel)
        return nullptr;
    IInspectable* inspectable = reinterpret_cast<IInspectable*>(g_panel);
    inspectable->AddRef();
    return inspectable;
}

extern "C" void getWPFramebufferSize(unsigned int* width, unsigned int* height)
{
    unsigned int w = g_fbW.load(std::memory_order_relaxed);
    unsigned int h = g_fbH.load(std::memory_order_relaxed);
    if (w == 0) w = 800;
    if (h == 0) h = 600;
    if (width) *width = w;
    if (height) *height = h;
}

PhonePlatform::PhonePlatform()
    : m_initialized(false)
    , m_swapChainPanel(nullptr)
{
}

PhonePlatform::~PhonePlatform()
{
}

PhonePlatform& PhonePlatform::GetInstance()
{
    static PhonePlatform instance;
    return instance;
}

bool PhonePlatform::IsLowMemoryDevice() const
{
    if (!g_isLowMemoryDeviceKnown.load(std::memory_order_acquire))
    {
        g_isLowMemoryDevice.store(computeIsLowMemoryDevice(), std::memory_order_release);
        g_isLowMemoryDeviceKnown.store(true, std::memory_order_release);
    }
    return g_isLowMemoryDevice.load(std::memory_order_acquire);
}

void PhonePlatform::initializeLogging()
{
    RBX::StandardOut::singleton()->messageOut.connect(
        [](const RBX::StandardOutMessage& msg)
        {
            if (!IsDebuggerPresent())
                return;
            std::string prefix;
            switch (msg.type)
            {
            case RBX::MESSAGE_OUTPUT: prefix = "[OUTPUT] "; break;
            case RBX::MESSAGE_INFO: prefix = "[INFO] "; break;
            case RBX::MESSAGE_WARNING: prefix = "[WARNING] "; break;
            case RBX::MESSAGE_ERROR: prefix = "[ERROR] "; break;
            default: prefix = "[?] "; break;
            }
            std::string full = prefix + msg.message + "\n";
            std::wstring w(full.begin(), full.end());
            OutputDebugStringW(w.c_str());
        });
}

void PhonePlatform::applyLowMemTuning()
{
    FLog::SetValue("StreamingMemoryUsagePercent", "10");
    FLog::SetValue("StreamingSafeMemWatermarkMB", "90");
    FLog::SetValue("StreamingLowMemWatermarkMB", "60");
    FLog::SetValue("StreamingCriticalLowMemWatermarkMB", "40");
    FLog::SetValue("RenderTextureManagerBudget", "16");
    FLog::SetValue("RenderTextureManagerBudgetFor4k", "256");
    FLog::SetValue("RenderTextureManagerMaxTextureSize", "512");
    FLog::SetValue("RenderTextureCompositorBudget", "4");
    FLog::SetValue("RenderTextureCompositorDisabled", "1");

    FLog::SetValue("FFlagSmoothTerrainRenderLOD", "True");
    FLog::SetValue("FIntRenderShadowIntensity", "40");
    FLog::SetValue("FIntFRMRecomputeDistanceFrameDelay", "200");
    FLog::SetValue("FIntFastClusterUpdateWaitingBudgetMs", "6");
    FLog::SetValue("FIntRenderMaxParticleSize", "128");
}

void PhonePlatform::initialize()
{
    if (m_initialized)
        return;

    RBX::FunctionMarshaller::GetWindow();

    initializeLogging();
	// even my lumia 930 gets hot in menu, i need it to be smooth
    applyLowMemTuning();

    RBX::Http::rbxUserAgent = "Roblox/WP81";

    m_initialized = true;
}

void PhonePlatform::shutdown()
{
    m_initialized = false;
    m_swapChainPanel = nullptr;
    g_panel = nullptr;
}

void PhonePlatform::tick()
{
    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (marshaller)
        marshaller->ProcessMessages();
}

void PhonePlatform::setSwapChainPanel(Windows::UI::Xaml::Controls::SwapChainPanel^ panel)
{
    m_swapChainPanel = panel;
    g_panel = panel;
    if (!panel)
        return;

    float csX = static_cast<float>(panel->CompositionScaleX);
    float csY = static_cast<float>(panel->CompositionScaleY);
    if (csX <= 0.0f) csX = 1.0f;
    if (csY <= 0.0f) csY = 1.0f;
    float effX = ComputeEffectiveScale(csX, RecommendedScaleForPhone());
    float effY = ComputeEffectiveScale(csY, RecommendedScaleForPhone());

    unsigned int w = static_cast<unsigned int>(lround(panel->ActualWidth * effX));
    unsigned int h = static_cast<unsigned int>(lround(panel->ActualHeight * effY));
    if (w == 0) w = 800;
    if (h == 0) h = 600;

    g_fbW.store(w, std::memory_order_release);
    g_fbH.store(h, std::memory_order_release);
    g_scaleX.store(effX, std::memory_order_release);
    g_scaleY.store(effY, std::memory_order_release);
    updateWPFramebufferSize(w, h);

    panel->SizeChanged += ref new Windows::UI::Xaml::SizeChangedEventHandler(
        [](Platform::Object^, Windows::UI::Xaml::SizeChangedEventArgs^ args)
        {
            auto now = std::chrono::steady_clock::now();
            if (now - g_lastSizeChange < std::chrono::milliseconds(16))
                return;
            g_lastSizeChange = now;

            auto sz = args->NewSize;
            if (sz.Width <= 0 || sz.Height <= 0 || !g_panel)
                return;
            float sX = static_cast<float>(g_panel->CompositionScaleX);
            float sY = static_cast<float>(g_panel->CompositionScaleY);
            if (sX <= 0.0f) sX = 1.0f;
            if (sY <= 0.0f) sY = 1.0f;
            float eX = ComputeEffectiveScale(sX, RecommendedScaleForPhone());
            float eY = ComputeEffectiveScale(sY, RecommendedScaleForPhone());
            unsigned int nw = static_cast<unsigned int>(lround(sz.Width * eX));
            unsigned int nh = static_cast<unsigned int>(lround(sz.Height * eY));
            if (nw == 0 || nh == 0)
                return;
            g_fbW.store(nw, std::memory_order_release);
            g_fbH.store(nh, std::memory_order_release);
            g_scaleX.store(eX, std::memory_order_release);
            g_scaleY.store(eY, std::memory_order_release);
            updateWPFramebufferSize(nw, nh);
        });

    panel->CompositionScaleChanged +=
        ref new Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::SwapChainPanel^, Platform::Object^>(
            [](Windows::UI::Xaml::Controls::SwapChainPanel^ p, Platform::Object^)
            {
                auto now = std::chrono::steady_clock::now();
                if (now - g_lastSizeChange < std::chrono::milliseconds(16))
                    return;
                g_lastSizeChange = now;

                if (!p || p->ActualWidth <= 0 || p->ActualHeight <= 0)
                    return;
                float sX = static_cast<float>(p->CompositionScaleX);
                float sY = static_cast<float>(p->CompositionScaleY);
                float eX = ComputeEffectiveScale(sX, RecommendedScaleForPhone());
                float eY = ComputeEffectiveScale(sY, RecommendedScaleForPhone());
                g_scaleX.store(eX, std::memory_order_release);
                g_scaleY.store(eY, std::memory_order_release);
                unsigned int nw = static_cast<unsigned int>(lround(p->ActualWidth * eX));
                unsigned int nh = static_cast<unsigned int>(lround(p->ActualHeight * eY));
                if (nw == 0 || nh == 0)
                    return;
                g_fbW.store(nw, std::memory_order_release);
                g_fbH.store(nh, std::memory_order_release);
                updateWPFramebufferSize(nw, nh);
            });
}

void PhonePlatform::setGameReadyCallback(std::function<void()> callback)
{
    m_gameReadyCallback = std::move(callback);
}

void PhonePlatform::setGameFailedCallback(std::function<void()> callback)
{
    m_gameFailedCallback = std::move(callback);
}

void PhonePlatform::fireGameReady()
{
    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (!marshaller)
        return;
    marshaller->Submit([this]() { if (m_gameReadyCallback) m_gameReadyCallback(); });
}

void PhonePlatform::fireGameFailed()
{
    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (!marshaller)
        return;
    marshaller->Submit([this]() { if (m_gameFailedCallback) m_gameFailedCallback(); });
}
