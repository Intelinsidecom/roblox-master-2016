#pragma once

#include <functional>

namespace Windows { namespace UI { namespace Xaml { namespace Controls { ref class SwapChainPanel; } } } }

extern "C" bool isWPPhone();
extern "C" void* getWPSwapChainPanel();
extern "C" void getWPFramebufferSize(unsigned int* width, unsigned int* height);
extern "C" void updateWPFramebufferSize(unsigned int width, unsigned int height);

class PhonePlatform
{
public:
    static PhonePlatform& GetInstance();

    void initialize();
    void tick();
    void shutdown();

    void setSwapChainPanel(Windows::UI::Xaml::Controls::SwapChainPanel^ panel);

    void setGameReadyCallback(std::function<void()> callback);
    void setGameFailedCallback(std::function<void()> callback);
    void fireGameReady();
    void fireGameFailed();

    bool isInitialized() const { return m_initialized; }
    bool IsLowMemoryDevice() const;

private:
    PhonePlatform();
    ~PhonePlatform();
    PhonePlatform(const PhonePlatform&) = delete;
    void operator=(const PhonePlatform&) = delete;

    void initializeLogging();
    void applyLowMemTuning();

    bool m_initialized;
    Windows::UI::Xaml::Controls::SwapChainPanel^ m_swapChainPanel;
    std::function<void()> m_gameReadyCallback;
    std::function<void()> m_gameFailedCallback;
};
