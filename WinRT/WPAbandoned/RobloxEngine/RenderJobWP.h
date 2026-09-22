#pragma once

#include <memory>
#include <functional>
#include <mutex>
#include "rbx/TaskScheduler.Job.h"
#include "rbx/TaskScheduler.h"
#include "../../../Rendering/GfxBase/include/GfxBase/ViewBase.h"
#include "../../../Rendering/GfxBase/include/GfxBase/RenderSettings.h"
#include <windows.ui.xaml.controls.h>

#include "FunctionMarshallerWP.h"
#include "../../../Rendering/GfxCore/D3D11/DeviceD3D11.h"
#include "GameHost.h"

namespace RobloxEngine
{
    // Statistics reported by RenderJobWP
    struct RenderStats
    {
        double fps;
        int frameCount;
        double lastFrameTime;
    };

    // A TaskScheduler job that mirrors WindowsClient RenderJob sequencing on WP
    class RenderJobWP : public RBX::TaskScheduler::Job
    {
    public:
        RenderJobWP(GameHost* host,
                    RBX::Graphics::DeviceD3D11* device,
                    FunctionMarshallerWP* marshaller,
                    Windows::UI::Xaml::Controls::SwapChainPanel^ panel,
                    double minFps = 30.0,
                    double maxFps = 60.0);
        ~RenderJobWP();

        // RBX::TaskScheduler::Job overrides
        virtual RBX::Time::Interval sleepTime(const Stats& stats);
        virtual Error error(const Stats& stats);
        virtual double getPriorityFactor();
        virtual RBX::TaskScheduler::StepResult step(const Stats& stats);

        // Control
        void stop();
        
        // Statistics
        RenderStats getStats() const;
        
        // Check if view is fully initialized
        bool isViewInitialized() const { return m_viewInitialized; }
        
        // Get the view (for rebinding workspace after place load)
        std::shared_ptr<RBX::ViewBase> getView() const { 
            std::lock_guard<std::mutex> lock(const_cast<std::mutex&>(m_viewMutex)); 
            return m_view; 
        }

    private:
        void ensureViewInitialized();

    private:
        GameHost* m_host;                       // not owned
        RBX::Graphics::DeviceD3D11* m_device;   // not owned
        FunctionMarshallerWP* m_marshaller;     // not owned
        Windows::UI::Xaml::Controls::SwapChainPanel^ m_panel; // xaml owner
        double m_minFps;
        double m_maxFps;
        rbx::atomic<int> m_stopped;
        RBX::Time m_lastStepTime;

        // Graphics view/pipeline like WindowsClient
        RBX::CRenderSettings m_settings;
        RBX::OSContext m_context;
        std::shared_ptr<RBX::ViewBase> m_view;  // shared_ptr to ensure lifetime across async operations
        std::mutex m_viewMutex;                 // protects m_view from concurrent access
        unsigned m_lastW = 0, m_lastH = 0;
        
        // FPS tracking
        mutable std::mutex m_statsMutex;
        int m_frameCount;
        double m_fps;
        RBX::Time m_lastFpsTime;
        
        // View initialization tracking (for deferred place loading)
        bool m_viewInitialized;
    };
}

