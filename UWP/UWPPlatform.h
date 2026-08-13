#pragma once

#include <functional>
#include <chrono>

#include "FunctionMarshaller.h"
#include "util/standardout.h"

namespace RBX
{
    class DataModel;
}

extern "C" bool isUWPWindowsPhone();
extern "C" IUnknown* getUWPSwapChainPanel();
extern "C" void getUWPFramebufferSize(unsigned int* width, unsigned int* height);
extern "C" void getUWPCompositionScale(float* scaleX, float* scaleY);
extern "C" void setSwapChainOnUIThread(IUnknown* swapChain);
extern "C" void uwpNotifyFramePresented();

class UWPPlatform
{
public:
    static UWPPlatform& GetInstance();

    void initialize();
    void tick();
    void setSwapChainPanel(Windows::UI::Xaml::Controls::SwapChainPanel^ panel);
    void setLeaveGameCallback(std::function<void()> callback);
    void setGameReadyCallback(std::function<void()> callback);
    void setGameFailedCallback(std::function<void()> callback);
    void fireGameReady();
    void fireGameFailed();
    bool isInitialized() const { return m_initialized; }
    bool IsLowMemoryDevice() const;
    void HandleMemoryPressure();
    void StartMemoryPressureMonitor();
    void ShedFrontendMemory();
    bool ShouldDropShellForGame() const;

private:
    UWPPlatform();
    ~UWPPlatform();

    void initializeLogging();
    void onStandardOutMessage(const RBX::StandardOutMessage& message);
    void onMemoryUsageIncreased();
    Windows::Foundation::EventRegistrationToken m_memUsageIncreasedToken;
    Windows::Foundation::EventRegistrationToken m_memLimitChangingToken;
    Windows::UI::Xaml::DispatcherTimer^ m_memPressureTimer;
    bool m_memPressureStarted;
    std::chrono::steady_clock::time_point m_lastPressureGc;

    bool m_initialized;
    Windows::UI::Xaml::Controls::SwapChainPanel^ m_swapChainPanel;
    std::function<void()> m_gameReadyCallback;
    std::function<void()> m_gameFailedCallback;
    rbx::signals::connection m_standardOutConnection;
};
