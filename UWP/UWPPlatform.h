#pragma once

#include "stdafx.h"
#include "Marshaller.h"
#include "GfxBase/ViewBase.h"
#include <map>
#include <atomic>

#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>

#include "SDL.h"
#include "SDLGameController.h"
#include "rbx/signal.h"

class UserInput;

namespace RBX
{
    class Game;
    class DataModel;
    class BaseRenderJob;
    class StandardOut;
    struct StandardOutMessage;
}

class RenderJob;

class UWPPlatform
{
public:
    UWPPlatform();
    virtual ~UWPPlatform();

    void tick();
    Marshaller* getMarshaller() { return m_marshaller; }
    void initialize();
    void shutdown();
    void onLogMessage(const std::string& message);
    void setLogCallback(std::function<void(const std::string&)> callback);
    void setSwapChainPanel(Windows::UI::Xaml::Controls::SwapChainPanel^ panel);
    void setRenderingInitializedCallback(std::function<void()> callback);
    void setLoadingStatusCallback(std::function<void(const std::string&)> callback);
    bool isInitializationComplete() const { return m_initializationComplete.load(std::memory_order_acquire); }

private:
    Marshaller* m_marshaller;
    RBX::Game* m_game;
    boost::shared_ptr<RBX::DataModel> m_dataModel;
    RBX::ViewBase* m_view;
    boost::shared_ptr<RenderJob> m_renderJob;
    RBX::OSContext m_context;
    Windows::UI::Xaml::Controls::SwapChainPanel^ m_swapChainPanel;
    Windows::UI::Core::CoreDispatcher^ m_dispatcher;
    boost::scoped_ptr<SDLGameController> m_gameController;
    SDL_Window* m_sdlWindow;
    std::unique_ptr<UserInput> m_userInput;
    std::function<void(const std::string&)> m_logCallback;
    std::function<void()> m_renderingInitializedCallback;
    std::function<void(const std::string&)> m_loadingStatusCallback;
    std::mutex m_logMutex;
    std::atomic<bool> m_initializationComplete;
    std::atomic<bool> m_cachedIsWindowsPhone;
    bool m_sdlInitialized;
    rbx::signals::connection m_standardOutConnection;
    void onStandardOutMessage(const RBX::StandardOutMessage& message);
    void initializeBackground();
    void initializeGameWorld();
    void initializeRendering();
    void initializeInput();
    void initializeLogging();
    void initializeSettings();
    void updateLoadingStatus(const std::string& status);
};
