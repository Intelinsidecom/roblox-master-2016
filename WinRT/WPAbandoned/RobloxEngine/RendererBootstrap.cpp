#include "pch.h"
#include "RendererBootstrap.h"

#include <windows.ui.xaml.media.dxinterop.h>

using Microsoft::WRL::ComPtr;

namespace RobloxEngine
{
    RendererBootstrap::RendererBootstrap()
        : m_running(false)
        , m_hasDeferredPlace(false)
    {
    }

    RendererBootstrap::~RendererBootstrap()
    {
        Stop();
    }

    void RendererBootstrap::Start(Windows::UI::Xaml::Controls::SwapChainPanel^ panel)
    {
        Stop();
        m_panelWR = Platform::WeakReference(panel);
        m_running = true;

        // Run the render loop on a high-priority threadpool thread
        auto work = ref new Windows::System::Threading::WorkItemHandler([this](Windows::Foundation::IAsyncAction^){ runLoop(); });
        m_renderTask = Windows::System::Threading::ThreadPool::RunAsync(work, Windows::System::Threading::WorkItemPriority::High, Windows::System::Threading::WorkItemOptions::TimeSliced);
    }

    void RendererBootstrap::Stop()
    {
        m_running = false;
        if (m_renderTask)
        {
            try { m_renderTask->Cancel(); } catch (...) {}
            m_renderTask = nullptr;
        }
        if (m_renderJob)
        {
            try { RBX::TaskScheduler::singleton().removeBlocking(m_renderJob); } catch (...) {}
            m_renderJob.reset();
        }
        m_marshaller.reset();
        // Release DataModel/Game before device teardown
        m_host.reset();
        m_device.reset();
    }

    bool RendererBootstrap::LoadPlace(Platform::String^ filePath)
    {
        if (!m_host)
        {
            OutputDebugStringA("[RendererBootstrap::LoadPlace] ERROR: Host not initialized!\n");
            return false;
        }

        if (!filePath)
        {
            OutputDebugStringA("[RendererBootstrap::LoadPlace] ERROR: File path is null!\n");
            return false;
        }

        // Convert Platform::String to std::string
        std::wstring wstr(filePath->Data());
        std::string str(wstr.begin(), wstr.end());

        return m_host->LoadPlace(str);
    }

    bool RendererBootstrap::LoadPlaceFromBytes(const unsigned char* data, size_t length)
    {
        if (!m_host)
        {
            OutputDebugStringA("[RendererBootstrap::LoadPlaceFromBytes] ERROR: Host not initialized!\n");
            return false;
        }

        return m_host->LoadPlaceFromBytes(data, length);
    }

    bool RendererBootstrap::LoadPlaceFromBytesDeferred(const unsigned char* data, size_t length)
    {
        if (!data || length == 0)
        {
            OutputDebugStringA("[RendererBootstrap::LoadPlaceFromBytesDeferred] ERROR: No data!\n");
            return false;
        }

        // Store the bytes for deferred loading after view initialization
        m_deferredPlaceBytes.assign(data, data + length);
        m_hasDeferredPlace = true;
        
        char buf[256];
        sprintf_s(buf, sizeof(buf), "[RendererBootstrap::LoadPlaceFromBytesDeferred] Stored %u bytes for deferred loading\n", 
                 (unsigned int)length);
        OutputDebugStringA(buf);
        
        return true;
    }

    RenderStats RendererBootstrap::getRenderStats() const
    {
        if (m_renderJob)
        {
            // Cast to RenderJobWP to access getStats()
            RenderJobWP* job = dynamic_cast<RenderJobWP*>(m_renderJob.get());
            if (job)
            {
                return job->getStats();
            }
        }
        
        // Return empty stats if no job
        RenderStats empty = {0.0, 0, 0.0};
        return empty;
    }

    void RendererBootstrap::runLoop()
    {
        // Resolve panel on this thread
        auto panel = m_panelWR.Resolve<Windows::UI::Xaml::Controls::SwapChainPanel>();
        if (!panel)
            return;

        OutputDebugStringA("[RendererBootstrap::runLoop] Starting on worker thread\n");

        // CRITICAL: Initialize GameHost COMPLETELY before doing anything else
        // This ensures Lua state is fully initialized before any TaskScheduler access
        m_host.reset(new GameHost());
        m_host->Initialize(false);  // Blocks until complete - Lua parsing happens here
        
        // Verify initialization succeeded
        if (!m_host->IsInitialized())
        {
            OutputDebugStringA("[RendererBootstrap::runLoop] ERROR: GameHost initialization failed!\n");
            return;
        }
        
        OutputDebugStringA("[RendererBootstrap::runLoop] GameHost initialized, creating UI marshaller\n");

        // Create UI marshaller bound to this panel's dispatcher
        m_marshaller.reset(new FunctionMarshallerWP(panel));

        // NOW it's safe to create RenderJob and add to TaskScheduler
        // Lua state is fully initialized and visible to all threads
        OutputDebugStringA("[RendererBootstrap::runLoop] Creating RenderJob\n");
        
        // Create and schedule RenderJobWP on TaskScheduler (mirrors Windows client flow)
        // TEMPORARY: Limited to 3 FPS for debugging to reduce log spam
        m_renderJob = boost::shared_ptr<RBX::TaskScheduler::Job>(new RenderJobWP(m_host.get(), /*device_unused*/ nullptr, m_marshaller.get(), panel, 1.0, 3.0));
        
        // Ensure scheduler threads are running
        OutputDebugStringA("[RendererBootstrap] Configuring TaskScheduler threads...\n");
        RBX::TaskScheduler::singleton().setThreadCount(RBX::TaskScheduler::Auto);
        
        char buf[256];
        sprintf_s(buf, sizeof(buf), "[RendererBootstrap] TaskScheduler has %u threads, cyclicExecutive=%d\n", 
                 (unsigned)RBX::TaskScheduler::singleton().getThreadCount(),
                 RBX::TaskScheduler::singleton().isCyclicExecutive() ? 1 : 0);
        OutputDebugStringA(buf);
        
        OutputDebugStringA("[RendererBootstrap] Adding RenderJobWP to scheduler...\n");
        RBX::TaskScheduler::singleton().add(m_renderJob);
        OutputDebugStringA("[RendererBootstrap] RenderJobWP added successfully\n");

        // Idle while job runs on scheduler threads
        // Also check periodically for deferred place loading
        bool deferredPlaceLoaded = false;
        while (m_running)
        {
            concurrency::wait(100);
            
            // Check if we have a deferred place to load and view is initialized
            if (m_hasDeferredPlace && !deferredPlaceLoaded)
            {
                RenderJobWP* renderJob = dynamic_cast<RenderJobWP*>(m_renderJob.get());
                if (renderJob && renderJob->isViewInitialized())
                {
                    OutputDebugStringA("[RendererBootstrap] View initialized, loading deferred place...\n");
                    
                    // Load the deferred place
                    if (m_host && !m_deferredPlaceBytes.empty())
                    {
                        bool success = m_host->LoadPlaceFromBytes(m_deferredPlaceBytes.data(), m_deferredPlaceBytes.size());
                        
                        char logBuf[256];
                        sprintf_s(logBuf, sizeof(logBuf), "[RendererBootstrap] Deferred place load %s\n", 
                                 success ? "SUCCESS" : "FAILED");
                        OutputDebugStringA(logBuf);
                        
                        // CRITICAL FIX: Rebind workspace to view after place loads
                        // The view was initially bound to an empty DataModel, now rebind with loaded content
                        if (success && renderJob)
                        {
                            auto view = renderJob->getView();
                            if (view && m_host->GetDataModel())
                            {
                                view->bindWorkspace(m_host->GetDataModel());
                                OutputDebugStringA("[RendererBootstrap] Workspace re-bound to view after place load\n");
                            }
                        }
                        
                        // Clear the deferred place bytes to free memory
                        m_deferredPlaceBytes.clear();
                    }
                    
                    m_hasDeferredPlace = false;
                    deferredPlaceLoaded = true;
                }
            }
        }
    }
}
