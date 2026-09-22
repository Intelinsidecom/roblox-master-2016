#pragma once

#include <wrl.h>
#include <memory>
#include <vector>
#include <ppltasks.h>
#include <windows.ui.xaml.controls.h>

// Gfx renderer (relative to WinRT/WP/RobloxEngine/ -> ../../../ reaches repo root)
#include "../../../Rendering/GfxCore/D3D11/DeviceD3D11.h"
#include "../../../Rendering/GfxCore/include/GfxCore/Device.h"
// Minimal DataModel host mirroring WindowsClient flow
#include "GameHost.h"
#include "FunctionMarshallerWP.h"
#include "RenderJobWP.h"
#include <boost/shared_ptr.hpp>

namespace RobloxEngine
{
    // Boots RBX::Graphics on Windows Phone by handing it the SwapChainPanel (IUnknown*)
    class RendererBootstrap
    {
    public:
        RendererBootstrap();
        ~RendererBootstrap();

        // Start renderer on a background worker, owning the given SwapChainPanel
        void Start(Windows::UI::Xaml::Controls::SwapChainPanel^ panel);
        // Stop the background render loop and release renderer
        void Stop();
        
        // Load a place file into the DataModel
        bool LoadPlace(Platform::String^ filePath);
        
        // Load a place from binary data in memory
        bool LoadPlaceFromBytes(const unsigned char* data, size_t length);
        
        // Store place bytes and load after view initialization (avoids file I/O deadlock)
        bool LoadPlaceFromBytesDeferred(const unsigned char* data, size_t length);
        
        // Get rendering statistics (FPS, frame count, etc.)
        RenderStats getRenderStats() const;

    private:
        void runLoop();

        // WP XAML panel (kept as weak ref to avoid lifetime issues)
        Platform::WeakReference m_panelWR;
        // RBX renderer device
        std::unique_ptr<RBX::Graphics::DeviceD3D11> m_device;
        // DataModel/Game host (no join/config)
        std::unique_ptr<GameHost> m_host;
        // UI marshaller for prepare-like work if needed
        std::unique_ptr<FunctionMarshallerWP> m_marshaller;
        // Render job scheduled on TaskScheduler
        boost::shared_ptr<RBX::TaskScheduler::Job> m_renderJob;
        // Render thread
        Windows::Foundation::IAsyncAction^ m_renderTask;
        // Flag
        volatile bool m_running;
        // Deferred place loading (to avoid file I/O deadlock during view init)
        std::vector<unsigned char> m_deferredPlaceBytes;
        volatile bool m_hasDeferredPlace;
    };
}
