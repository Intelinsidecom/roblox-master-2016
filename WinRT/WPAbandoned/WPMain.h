#pragma once

#include "Common\StepTimer.h"
#include "Common\DeviceResources.h"
#include "Content\Sample3DSceneRenderer.h"
#include "Content\SampleFpsTextRenderer.h"

// Renders Direct2D and 3D content on the screen.
namespace WP
{
    class WPMain : public DX::IDeviceNotify
    {
    public:
        WPMain(const std::shared_ptr<DX::DeviceResources>& deviceResources);
        ~WPMain();
        void CreateWindowSizeDependentResources();
        void StartTracking() { if (m_sceneRenderer) m_sceneRenderer->StartTracking(); }
        void TrackingUpdate(float positionX) { m_pointerLocationX = positionX; }
        void StopTracking() { if (m_sceneRenderer) m_sceneRenderer->StopTracking(); }
        bool IsTracking() { return m_sceneRenderer ? m_sceneRenderer->IsTracking() : false; }

        void StartRenderLoop();
        void StopRenderLoop();
        // Accessor used by DirectXPage to guard UI-size-dependent updates
        Concurrency::critical_section& GetCriticalSection() { return *m_criticalSection; }
        // Backward-compatible alias (can be removed later)
        Concurrency::critical_section& GetSection() { return *m_criticalSection; }

        // IDeviceNotify
        virtual void OnDeviceLost();
        virtual void OnDeviceRestored();

    private:
        void ProcessInput();
        void Update();
        bool Render();

        // Cached pointer to device resources.
        std::shared_ptr<DX::DeviceResources> m_deviceResources;

        // TODO: Replace with your own content renderers.
        std::unique_ptr<Sample3DSceneRenderer> m_sceneRenderer;
        std::unique_ptr<SampleFpsTextRenderer> m_fpsTextRenderer;

        Windows::Foundation::IAsyncAction^ m_renderLoopWorker;
        // Shared ownership ensures critical_section outlives async lambda cleanup
        std::shared_ptr<Concurrency::critical_section> m_criticalSection;

        // Rendering loop timer.
        DX::StepTimer m_timer;

        // Track current input pointer position.
        float m_pointerLocationX;
    };
}