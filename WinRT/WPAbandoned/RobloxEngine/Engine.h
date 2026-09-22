#pragma once

#include <wrl.h>
#include <ppltasks.h>
#include <d3d11_1.h>
#include <dxgi1_3.h>
#include <string>
#include <functional>
#include <vector>
#include <mutex>

// For SwapChainPanel interop
#include <windows.ui.xaml.media.dxinterop.h>
namespace RobloxEngine
{
    // Forward declaration
    class RendererBootstrap;

    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class Engine sealed
    {
    public:
        Engine();
        // Note: Initialize and StartAsync are deprecated - use RendererBootstrap directly
        Windows::Foundation::IAsyncOperation<bool>^ LoadPlaceAsync(Platform::String^ pathOrUri);

        void SetDebugOverlayEnabled(bool enabled);
        Platform::String^ GetDebugOverlayText();
        
        Platform::String^ GetShaderFolderPath() { return m_shaderFolderPath; }

    internal:
        // Internal method - not exposed to WinRT consumers
        void SetRendererBootstrapInternal(RendererBootstrap* bootstrap) { m_bootstrap = bootstrap; }

    internal:
        // URI translation and file I/O helpers
        Platform::String^ TranslateToAppxUri(Platform::String^ pathOrUri);
        concurrency::task<Platform::Array<byte>^> LoadFileBytesAsync(Platform::String^ msAppxPath);

    private:
        // Ensure shader packs are available in LocalFolder (deprecated - unused)
        void EnsureShaderPacksPrepared();
        concurrency::task<void> CopyFolderRecursiveAsync(Windows::Storage::StorageFolder^ src, Windows::Storage::StorageFolder^ dst);

        // Run state and overlay/debug
        bool m_debugOverlayEnabled;
        Platform::String^ m_lastRequestedPlace;
        D3D_FEATURE_LEVEL m_featureLevel; // For display only

        // One-time flag for shader pack preparation
        bool m_shadersPrepared;

        // Local shader folder path prepared from ms-appx packaged content
        Platform::String^ m_shaderFolderPath;
        
        // Pointer to the actual renderer (not owned)
        RendererBootstrap* m_bootstrap;
    };
}

