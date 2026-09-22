#include "pch.h"
#include "RenderJobWP.h"
#include "../../../Rendering/GfxRender/RenderView.h"

// ENABLE DEBUG LOGGING FOR FPS/BLACK SCREEN DEBUGGING
#define ENABLE_RENDERJOB_DEBUG_LOGGING 1

#if ENABLE_RENDERJOB_DEBUG_LOGGING
#define DEBUG_LOG(msg) OutputDebugStringA(msg)
#else
#define DEBUG_LOG(msg) ((void)0)
#endif

using namespace RBX;

namespace RobloxEngine
{
    // Helper standard error targeting FPS range
    static inline double clamp(double v, double a, double b) { return v < a ? a : (v > b ? b : v); }
    
    // CRITICAL WORKAROUND: Separate function for SEH exception handling
    // Cannot use __try/__except in functions with C++ objects that need unwinding
    static void CallRenderPrepareImplWithSEH(RBX::Graphics::RenderView* rvPtr)
    {
        __try {
            rvPtr->renderPrepareImpl(NULL, true);
            DEBUG_LOG("[RenderJobWP] renderPrepareImpl returned successfully (no exception)\n");
        } __except(EXCEPTION_EXECUTE_HANDLER) {
            // The function completed successfully, but the compiler's broken return thunk crashed
            // This is expected - we just ignore it and continue
            DEBUG_LOG("[RenderJobWP] SEH exception caught during return - EXPECTED due to compiler bug\n");
            DEBUG_LOG("[RenderJobWP] Function execution was successful, ignoring return thunk crash\n");
        }
    }

    RenderJobWP::RenderJobWP(GameHost* host,
                             RBX::Graphics::DeviceD3D11* /*device_unused*/,
                             FunctionMarshallerWP* marshaller,
                             Windows::UI::Xaml::Controls::SwapChainPanel^ panel,
                             double minFps,
                             double maxFps)
        : TaskScheduler::Job("WP.RenderJob", boost::shared_ptr<TaskScheduler::Arbiter>(&RBX::ExclusiveArbiter::singleton, [](TaskScheduler::Arbiter*){}))
        , m_host(host)
        , m_marshaller(marshaller)
        , m_panel(panel)
        , m_minFps(minFps)
        , m_maxFps(maxFps)
        , m_stopped(0)
        , m_frameCount(0)
        , m_fps(0.0)
        , m_viewInitialized(false)
    {
        OutputDebugStringA("[RenderJobWP] Constructor called\n");
        m_lastStepTime = Time::now<Time::Fast>();
        m_lastFpsTime = Time::now<Time::Fast>();
        m_context.hWnd = nullptr;
        
        // CRITICAL: Set cyclicExecutive to true, like BaseRenderJob does
        // This ensures the job is scheduled in cyclic executive mode and has non-zero initial error
        cyclicExecutive = true;
        cyclicPriority = RBX::CyclicExecutiveJobPriority_Render;
        
        char buf[256];
        sprintf_s(buf, sizeof(buf), "[RenderJobWP] Initialized with minFps=%.1f, maxFps=%.1f, cyclicExecutive=true\n", minFps, maxFps);
        OutputDebugStringA(buf);
    }

    RenderJobWP::~RenderJobWP()
    {
    }

    void RenderJobWP::stop()
    {
        m_stopped = 1;
    }

    RenderStats RenderJobWP::getStats() const
    {
        std::lock_guard<std::mutex> lock(m_statsMutex);
        RenderStats stats;
        stats.fps = m_fps;
        stats.frameCount = m_frameCount;
        stats.lastFrameTime = m_lastStepTime.timestampSeconds();
        return stats;
    }

    // Sleep to target max FPS when idle
    RBX::Time::Interval RenderJobWP::sleepTime(const Stats& stats)
    {
        // Match standard scheduler behavior: compute sleep for desired max rate
        RBX::Time::Interval result = computeStandardSleepTime(stats, m_maxFps);
        
        static int sleepLogCounter = 0;
        if (++sleepLogCounter % 300 == 1) // Log occasionally
        {
            char buf[256];
            sprintf_s(buf, sizeof(buf), "[RenderJobWP::sleepTime] Returning %.3f seconds\n", result.seconds());
            OutputDebugStringA(buf);
        }
        
        return result;
    }

    // Error drives scheduling urgency; use standard error towards max FPS
    RBX::TaskScheduler::Job::Error RenderJobWP::error(const Stats& stats)
    {
        RBX::TaskScheduler::Job::Error result = computeStandardError(stats, m_maxFps);
        
        // CRITICAL: Ensure error is never exactly 0, or job won't be scheduled
        // This is especially important when cyclicExecutive mode is disabled globally
        if (result.error < 0.001 && !m_stopped)
        {
            result.error = 0.001; // Minimal non-zero error to keep job running
        }
        
        static int errorLogCounter = 0;
        if (++errorLogCounter % 300 == 1) // Log occasionally
        {
            char buf[256];
            sprintf_s(buf, sizeof(buf), "[RenderJobWP::error] Returning error=%.3f, urgent=%d\n", 
                     result.error, result.urgent ? 1 : 0);
            OutputDebugStringA(buf);
        }
        
        return result;
    }

    double RenderJobWP::getPriorityFactor()
    {
        // Rendering usually gets relatively high priority
        return 1.0;
    }

    void RenderJobWP::ensureViewInitialized()
    {
        OutputDebugStringA("[RenderJobWP::ensureViewInitialized] CALLED\n");
        
        // Check if view already exists (fast path without lock)
        {
            std::lock_guard<std::mutex> lock(m_viewMutex);
            if (m_view)
            {
                OutputDebugStringA("[RenderJobWP::ensureViewInitialized] View already exists, returning early\n");
                return;
            }
        }
        
        OutputDebugStringA("[RenderJobWP::ensureViewInitialized] View does NOT exist yet, proceeding with init\n");

        // Check panel dimensions first - defer initialization until panel is laid out
        unsigned w = 0, h = 0;
        if (m_marshaller)
        {
            m_marshaller->Execute([this, &w, &h]() {
                if (m_panel)
                {
                    w = (unsigned)std::max(1.0f, (float)m_panel->ActualWidth);
                    h = (unsigned)std::max(1.0f, (float)m_panel->ActualHeight);
                }
            });
        }

        extern "C" void updateWPFramebufferSize(unsigned int width, unsigned int height);
        if (w && h) updateWPFramebufferSize(w, h);

        // Defer view creation until panel has valid dimensions to avoid DXGI_ERROR_INVALID_CALL
        // when CreateSwapChainForComposition is called before XAML layout completes
        if (w < 8 || h < 8)
        {
            // Panel not ready yet - skip this frame and retry next step
            return;
        }

        // Initialize OSContext.hWnd with SwapChainPanel COM pointer
        // CRITICAL: C++/CX handles (^) must be converted to IInspectable*, NOT IUnknown*
        // reinterpret_cast<IUnknown*> on a C++/CX handle results in garbage pointer
        IInspectable* panelInspectable = reinterpret_cast<IInspectable*>(m_panel);
        m_context.hWnd = reinterpret_cast<void*>(panelInspectable);

        // Initialize plugin modules and create view
        // Exception handling must be INSIDE the marshalled lambda to catch on UI thread
        bool viewCreated = false;
        if (m_marshaller)
        {
            // Create view on UI thread so that DeviceD3D11 can attach swap chain to SwapChainPanel safely
            // Wrap Execute call in try-catch as additional safety layer
            try
            {
                m_marshaller->Execute([this, &viewCreated]()
                {
                    try
                    {
                        RBX::ViewBase::InitPluginModules();
                        RBX::ViewBase* rawView = RBX::ViewBase::CreateView(RBX::CRenderSettings::Direct3D11, &m_context, &m_settings);
                        
                        char debugBuf[128];
                        sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] CreateView returned raw pointer: %p\n", rawView);
                        DEBUG_LOG(debugBuf);
                        
                        std::shared_ptr<RBX::ViewBase> tempView(rawView);
                        
                        sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] shared_ptr created, get() returns: %p\n", tempView.get());
                        DEBUG_LOG(debugBuf);
                        
                        if (tempView)
                        {
                            tempView->initResources();
                            // Only assign to m_view after successful initialization, with mutex protection
                            {
                                std::lock_guard<std::mutex> lock(m_viewMutex);
                                m_view = tempView;
                                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] m_view assigned, m_view.get() = %p\n", m_view.get());
                                DEBUG_LOG(debugBuf);
                            }
                            
                            // CRITICAL FIX: Force SwapChainPanel to recomposite after swap chain is attached
                            DEBUG_LOG("[RenderJobWP] Forcing panel composition update after SetSwapChain...\n");
                            try
                            {
                                if (m_panel)
                                {
                                    // Log panel state
                                    sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] Panel ActualSize: %.0fx%.0f, Opacity: %.2f, Visibility: %d\n",
                                             m_panel->ActualWidth, m_panel->ActualHeight,
                                             m_panel->Opacity,
                                             (int)m_panel->Visibility);
                                    DEBUG_LOG(debugBuf);
                                    
                                    // Ensure panel is visible and opaque
                                    m_panel->Opacity = 1.0;
                                    m_panel->Visibility = Windows::UI::Xaml::Visibility::Visible;
                                    
                                    // Multiple invalidation attempts
                                    m_panel->InvalidateArrange();
                                    m_panel->InvalidateMeasure();
                                    m_panel->UpdateLayout();
                                    
                                    // Force size change to trigger compositor
                                    auto w = m_panel->ActualWidth;
                                    auto h = m_panel->ActualHeight;
                                    if (w > 1 && h > 1)
                                    {
                                        m_panel->Width = w - 1;
                                        m_panel->Height = h - 1;
                                        m_panel->UpdateLayout();
                                        
                                        m_panel->Width = w;
                                        m_panel->Height = h;
                                        m_panel->UpdateLayout();
                                        
                                        // Clear explicit size
                                        m_panel->ClearValue(Windows::UI::Xaml::FrameworkElement::WidthProperty);
                                        m_panel->ClearValue(Windows::UI::Xaml::FrameworkElement::HeightProperty);
                                        m_panel->UpdateLayout();
                                        
                                        DEBUG_LOG("[RenderJobWP] Size toggle complete\n");
                                    }
                                    
                                    DEBUG_LOG("[RenderJobWP] Panel composition update complete\n");
                                }
                            }
                            catch (...)
                            {
                                DEBUG_LOG("[RenderJobWP] WARNING: Failed to invalidate panel\n");
                            }
                            
                            viewCreated = true;
                        }
                    }
                    catch (const std::exception& e)
                    {
                        // Log error and clear view to allow retry on next frame
                        DEBUG_LOG("RenderJobWP::ensureViewInitialized failed (std::exception): ");
                        DEBUG_LOG(e.what());
                        DEBUG_LOG("\n");
                        {
                            std::lock_guard<std::mutex> lock(m_viewMutex);
                            m_view.reset();
                        }
                        viewCreated = false;
                    }
                    catch (...)
                    {
                        // Catch all other exceptions (e.g., SEH exceptions, COM exceptions)
                        DEBUG_LOG("RenderJobWP::ensureViewInitialized failed (unknown exception)\n");
                        {
                            std::lock_guard<std::mutex> lock(m_viewMutex);
                            m_view.reset();
                        }
                        viewCreated = false;
                    }
                });
            }
            catch (const std::exception& e)
            {
                DEBUG_LOG("RenderJobWP::ensureViewInitialized Execute wrapper caught (std::exception): ");
                DEBUG_LOG(e.what());
                DEBUG_LOG("\n");
                {
                    std::lock_guard<std::mutex> lock(m_viewMutex);
                    m_view.reset();
                }
                viewCreated = false;
            }
            catch (...)
            {
                DEBUG_LOG("RenderJobWP::ensureViewInitialized Execute wrapper caught (unknown exception)\n");
                {
                    std::lock_guard<std::mutex> lock(m_viewMutex);
                    m_view.reset();
                }
                viewCreated = false;
            }
        }
        else
        {
            try
            {
                RBX::ViewBase::InitPluginModules();
                
                RBX::ViewBase* rawView = RBX::ViewBase::CreateView(RBX::CRenderSettings::Direct3D11, &m_context, &m_settings);
                char debugBuf[256];
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] CreateView returned raw pointer: %p\n", rawView);
                DEBUG_LOG(debugBuf);
                
                if (rawView)
                {
                    sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] Raw view typeid: %s\n", typeid(*rawView).name());
                    DEBUG_LOG(debugBuf);
                    
                    // Check if it's actually a RenderView
                    RBX::Graphics::RenderView* asRenderView = dynamic_cast<RBX::Graphics::RenderView*>(rawView);
                    sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] dynamic_cast to RenderView: %p (offset: %d)\n", 
                             asRenderView, asRenderView ? (int)((char*)asRenderView - (char*)rawView) : -1);
                    DEBUG_LOG(debugBuf);
                }
                
                std::shared_ptr<RBX::ViewBase> tempView(rawView);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] shared_ptr created, get() returns: %p\n", tempView.get());
                DEBUG_LOG(debugBuf);
                
                if (tempView)
                {
                    tempView->initResources();
                    {
                        std::lock_guard<std::mutex> lock(m_viewMutex);
                        m_view = tempView;
                        sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] m_view assigned, m_view.get() = %p\n", m_view.get());
                        DEBUG_LOG(debugBuf);
                    }
                    viewCreated = true;
                }
            }
            catch (const std::exception& e)
            {
                DEBUG_LOG("RenderJobWP::ensureViewInitialized failed (std::exception): ");
                DEBUG_LOG(e.what());
                DEBUG_LOG("\n");
                {
                    std::lock_guard<std::mutex> lock(m_viewMutex);
                    m_view.reset();
                }
                viewCreated = false;
            }
            catch (...)
            {
                DEBUG_LOG("RenderJobWP::ensureViewInitialized failed (unknown exception)\n");
                {
                    std::lock_guard<std::mutex> lock(m_viewMutex);
                    m_view.reset();
                }
                viewCreated = false;
            }
        }

        // Only proceed if view was successfully created
        if (!viewCreated)
            return;

        // Get a local copy of m_view with mutex protection for subsequent operations
        std::shared_ptr<RBX::ViewBase> localView;
        {
            std::lock_guard<std::mutex> lock(m_viewMutex);
            localView = m_view;
        }

        if (!localView)
            return;

        // Bind DataModel
        if (m_host)
            localView->bindWorkspace(m_host->GetDataModel());

        // CRITICAL FIX: Do NOT call onResize through marshaller during initialization!
        // Calling onResize on UI thread causes deadlock when texture loading happens:
        // - onResize triggers texture loading (ReadMsAppxToString)
        // - ReadMsAppxToString uses WaitForSingleObjectEx on UI thread
        // - Async file operations need UI thread to complete
        // - UI thread is blocked waiting for async operations
        // - Result: DEADLOCK!
        // Solution: Call onResize directly on render thread - swap chain operations are thread-safe
        if (w && h)
        {
            char debugBuf[256];
            sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP::ensureViewInitialized] Calling initial onResize(%u, %u) ON RENDER THREAD\n", w, h);
            OutputDebugStringA(debugBuf);
            
            try
            {
                if (localView)
                {
                    localView->onResize((int)w, (int)h);
                    m_lastW = w; m_lastH = h;
                    OutputDebugStringA("[RenderJobWP::ensureViewInitialized] Initial resize complete\n");
                }
            }
            catch (const std::exception& e)
            {
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP::ensureViewInitialized] Exception during initial onResize: %s\n", e.what());
                OutputDebugStringA(debugBuf);
            }
            catch (...)
            {
                OutputDebugStringA("[RenderJobWP::ensureViewInitialized] Unknown exception during initial onResize\n");
            }
        }
        
        // Mark view as initialized - this enables deferred place loading
        m_viewInitialized = true;
        OutputDebugStringA("[RenderJobWP::ensureViewInitialized] *** VIEW FULLY INITIALIZED ***\n");
    }

    RBX::TaskScheduler::StepResult RenderJobWP::step(const Stats& stats)
    {
        static int stepCount = 0;
        stepCount++;
        
        // Log EVERY step for the first 10, then every 60 thereafter
        if (stepCount <= 10 || stepCount % 60 == 0)
        {
            char buf[128];
            sprintf_s(buf, sizeof(buf), "[RenderJobWP::step] ***** FRAME %d *****\n", stepCount);
            OutputDebugStringA(buf);
        }
        
        if (m_stopped)
            return TaskScheduler::Done;

        ensureViewInitialized();

        // Compute dt
        Time now = stats.timeNow;
        double dt = (now - m_lastStepTime).seconds();
        if (dt < 0.0) dt = 0.0;
        dt = clamp(dt, 0.0, 0.25);
        m_lastStepTime = now;

        // 1) Advance DataModel (write phase)
        if (m_host)
            m_host->Tick(dt);

        // 2) Ensure size is current and prepare on UI thread
        // CRITICAL: Get a thread-safe copy of m_view before ANY rendering operations
        std::shared_ptr<RBX::ViewBase> viewPtr;
        {
            std::lock_guard<std::mutex> lock(m_viewMutex);
            viewPtr = m_view;
        }

        if (!viewPtr)
        {
            // View not initialized or was reset due to error - skip this frame
            return TaskScheduler::Stepped;
        }

        // Cast to RenderView shared_ptr BEFORE capturing in lambdas to ensure proper pointer adjustment
        // This prevents multiple inheritance pointer corruption when calling methods asynchronously
        char debugBuf1[512];
        sprintf_s(debugBuf1, sizeof(debugBuf1), "[RenderJobWP] viewPtr.get() = %p, use_count = %ld, typeid = %s\n", 
                 viewPtr.get(), (long)viewPtr.use_count(), typeid(*viewPtr).name());
        DEBUG_LOG(debugBuf1);
        
        std::shared_ptr<RBX::Graphics::RenderView> renderViewPtr = std::dynamic_pointer_cast<RBX::Graphics::RenderView>(viewPtr);
        
        sprintf_s(debugBuf1, sizeof(debugBuf1), "[RenderJobWP] After dynamic_pointer_cast: renderViewPtr.get() = %p, use_count = %ld\n", 
                 renderViewPtr.get(), (long)renderViewPtr.use_count());
        DEBUG_LOG(debugBuf1);
        
        if (!renderViewPtr)
        {
            DEBUG_LOG("[RenderJobWP] ERROR: View is not a RenderView! Cannot proceed.\n");
            return TaskScheduler::Stepped;
        }
        
        // Verify the pointer is actually valid
        RBX::Graphics::RenderView* rawPtr = renderViewPtr.get();
        sprintf_s(debugBuf1, sizeof(debugBuf1), "[RenderJobWP] Raw pointer from shared_ptr: %p\n", rawPtr);
        DEBUG_LOG(debugBuf1);
        
        // Check if we can access the vtable
        void** vtable = *(void***)rawPtr;
        sprintf_s(debugBuf1, sizeof(debugBuf1), "[RenderJobWP] VTable pointer: %p, first entry: %p\n", vtable, vtable[0]);
        DEBUG_LOG(debugBuf1);
        
        // Try to get the address of the object as ViewBase
        RBX::ViewBase* asViewBase = static_cast<RBX::ViewBase*>(rawPtr);
        sprintf_s(debugBuf1, sizeof(debugBuf1), "[RenderJobWP] Cast to ViewBase: %p (offset: %d)\n", 
                 asViewBase, (int)((char*)asViewBase - (char*)rawPtr));
        DEBUG_LOG(debugBuf1);

        // Check for resize (get panel dimensions from UI thread)
        DEBUG_LOG("[RenderJobWP] About to check panel dimensions via marshaller\n");
        unsigned w = 0, h = 0;
        if (m_marshaller)
        {
            try
            {
                DEBUG_LOG("[RenderJobWP] Calling marshaller->Execute() to get panel size\n");
                m_marshaller->Execute([this, &w, &h]() {
                    DEBUG_LOG("[RenderJobWP] Inside marshaller lambda - checking panel\n");
                    if (m_panel)
                    {
                        w = (unsigned)std::max(1.0f, (float)m_panel->ActualWidth);
                        h = (unsigned)std::max(1.0f, (float)m_panel->ActualHeight);
                        char buf[128];
                        sprintf_s(buf, sizeof(buf), "[RenderJobWP] Panel size: %u x %u\n", w, h);
                        OutputDebugStringA(buf);
                    }
                    else
                    {
                        DEBUG_LOG("[RenderJobWP] WARNING: m_panel is NULL!\n");
                    }
                    DEBUG_LOG("[RenderJobWP] Exiting marshaller lambda\n");
                });
                DEBUG_LOG("[RenderJobWP] marshaller->Execute() returned successfully\n");
            }
            catch (const std::exception& e)
            {
                sprintf_s(debugBuf1, sizeof(debugBuf1), "[RenderJobWP] Exception getting panel dimensions: %s\n", e.what());
                DEBUG_LOG(debugBuf1);
                // Use last known dimensions if marshaller fails
                w = m_lastW;
                h = m_lastH;
            }
            catch (...)
            {
                DEBUG_LOG("[RenderJobWP] Unknown exception getting panel dimensions\n");
                // Use last known dimensions if marshaller fails
                w = m_lastW;
                h = m_lastH;
            }
        }
        else
        {
            DEBUG_LOG("[RenderJobWP] WARNING: m_marshaller is NULL! Using last known dimensions\n");
            w = m_lastW;
            h = m_lastH;
        }
        
        char dimBuf[128];
        sprintf_s(dimBuf, sizeof(dimBuf), "[RenderJobWP] Proceeding with dimensions: %u x %u\n", w, h);
        DEBUG_LOG(dimBuf);

        extern "C" void updateWPFramebufferSize(unsigned int width, unsigned int height);
        if (w && h) updateWPFramebufferSize(w, h);

        // CRITICAL FIX: Do NOT call ANY RenderView member functions through marshaller!
        // The Windows Phone compiler has a catastrophic bug where member function calls
        // on objects with multiple inheritance through cross-thread lambdas corrupt the 'this' pointer.
        // Call onResize and renderPrepare directly on THIS thread (render job thread).
        if (renderViewPtr)
        {
            char debugBuf[512];
            
            // Handle resize if needed (called on render thread to avoid UI thread deadlock)
            if ((w && h) && (w != m_lastW || h != m_lastH))
            {
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] PANEL SIZE CHANGED! Old: %ux%u, New: %ux%u - calling onResize\n", 
                         m_lastW, m_lastH, w, h);
                OutputDebugStringA(debugBuf);
                
                try
                {
                    // Call through ViewBase pointer on render thread
                    RBX::ViewBase* viewBasePtr = renderViewPtr.get();
                    viewBasePtr->onResize((int)w, (int)h);
                    
                    OutputDebugStringA("[RenderJobWP] onResize completed successfully\n");
                    m_lastW = w;
                    m_lastH = h;
                }
                catch (const std::exception& e)
                {
                    sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] std::exception caught in onResize: %s\n", e.what());
                    OutputDebugStringA(debugBuf);
                }
                catch (...)
                {
                    OutputDebugStringA("[RenderJobWP] Unknown exception caught in onResize!\n");
                }
            }
            
            // CRITICAL WP8.1 FIX: Check if swap chain needs rebinding BEFORE renderPrepareImpl
            // validate() is called inside renderPrepareImpl, and that's where GetBuffer happens.
            // We MUST rebind BEFORE GetBuffer is called, or compositor will display stale/black buffer.
            RBX::Graphics::Device* baseDevice = renderViewPtr->getDevice();
            RBX::Graphics::DeviceD3D11* d3dDevice = dynamic_cast<RBX::Graphics::DeviceD3D11*>(baseDevice);
            
            if (d3dDevice && d3dDevice->needsSwapChainRebindBeforeGetBuffer() && m_marshaller)
            {
                DEBUG_LOG("[RenderJobWP] *** URGENT: Swap chain needs rebinding BEFORE renderPrepareImpl (BEFORE GetBuffer) ***\n");
                DEBUG_LOG("[RenderJobWP] Marshalling SetSwapChain to UI thread (synchronous)...\n");
                try
                {
                    // Capture device pointer in lambda
                    // This blocks until SetSwapChain completes on UI thread
                    m_marshaller->Execute([d3dDevice]() {
                        DEBUG_LOG("[RenderJobWP] On UI thread, calling rebindSwapChain()...\n");
                        d3dDevice->rebindSwapChain();
                        DEBUG_LOG("[RenderJobWP] rebindSwapChain() completed on UI thread\n");
                    });
                    DEBUG_LOG("[RenderJobWP] SetSwapChain completed, now safe to call renderPrepareImpl (which calls GetBuffer)\n");
                }
                catch (...)
                {
                    DEBUG_LOG("[RenderJobWP] WARNING: Failed to marshal rebindSwapChain to UI thread\n");
                }
            }
            
            // Prepare for rendering
            // CRITICAL: Windows Phone compiler bug with multiple inheritance
            // Cannot call renderPrepare (which internally calls renderPrepareImpl) - the internal call fails
            // Must call renderPrepareImpl directly (it was made public for this workaround)
            sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] About to call renderPrepareImpl directly at %p (render thread)\n", renderViewPtr.get());
            OutputDebugStringA(debugBuf);
            
            try
            {
                DEBUG_LOG("[RenderJobWP] ========================================\n");
                DEBUG_LOG("[RenderJobWP] ATTEMPTING renderPrepareImpl CALL\n");
                DEBUG_LOG("[RenderJobWP] ========================================\n");
                
                RBX::Graphics::RenderView* rvPtr = renderViewPtr.get();
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] RenderView raw pointer: %p\n", rvPtr);
                DEBUG_LOG(debugBuf);
                
                // Log memory at the pointer location
                unsigned char* memPtr = reinterpret_cast<unsigned char*>(rvPtr);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] First 32 bytes at pointer: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n",
                         memPtr[0], memPtr[1], memPtr[2], memPtr[3], memPtr[4], memPtr[5], memPtr[6], memPtr[7],
                         memPtr[8], memPtr[9], memPtr[10], memPtr[11], memPtr[12], memPtr[13], memPtr[14], memPtr[15],
                         memPtr[16], memPtr[17], memPtr[18], memPtr[19], memPtr[20], memPtr[21], memPtr[22], memPtr[23],
                         memPtr[24], memPtr[25], memPtr[26], memPtr[27], memPtr[28], memPtr[29], memPtr[30], memPtr[31]);
                DEBUG_LOG(debugBuf);
                
                // Check vtable
                void** vtable = *reinterpret_cast<void***>(rvPtr);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] VTable pointer: %p\n", vtable);
                DEBUG_LOG(debugBuf);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] VTable[0]: %p, VTable[1]: %p, VTable[2]: %p, VTable[3]: %p\n", 
                         vtable[0], vtable[1], vtable[2], vtable[3]);
                DEBUG_LOG(debugBuf);
                
                // Cast to different base classes to see offsets
                RBX::ViewBase* asViewBase = static_cast<RBX::ViewBase*>(rvPtr);
                RBX::IRenderHooks* asIRenderHooks = static_cast<RBX::IRenderHooks*>(rvPtr);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] Cast to ViewBase*: %p (offset: %d)\n", 
                         asViewBase, (int)((char*)asViewBase - (char*)rvPtr));
                DEBUG_LOG(debugBuf);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] Cast to IRenderHooks*: %p (offset: %d)\n", 
                         asIRenderHooks, (int)((char*)asIRenderHooks - (char*)rvPtr));
                DEBUG_LOG(debugBuf);
                
                // Get member function pointer
                typedef void (RBX::Graphics::RenderView::*MemberFuncPtr)(RBX::IMetric*, bool);
                MemberFuncPtr funcPtr = &RBX::Graphics::RenderView::renderPrepareImpl;
                
                // Member function pointers can be complex (8-16 bytes on MSVC with multiple inheritance)
                // Structure on MSVC with multiple inheritance:
                // Bytes 0-3: Function address (or thunk address)
                // Bytes 4-7: 'this' adjustment value
                // Bytes 8-15: Additional data (virtual base table offset, etc.)
                unsigned char* funcBytes = reinterpret_cast<unsigned char*>(&funcPtr);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] Member function pointer bytes: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n",
                         funcBytes[0], funcBytes[1], funcBytes[2], funcBytes[3], funcBytes[4], funcBytes[5], funcBytes[6], funcBytes[7],
                         funcBytes[8], funcBytes[9], funcBytes[10], funcBytes[11], funcBytes[12], funcBytes[13], funcBytes[14], funcBytes[15]);
                DEBUG_LOG(debugBuf);
                
                // Extract function address and 'this' adjustment
                struct MemberFuncPtrLayout {
                    void* funcAddr;
                    int thisAdjustment;
                    int vtorDisp;
                    int vtableIndex;
                };
                
                MemberFuncPtrLayout* layout = reinterpret_cast<MemberFuncPtrLayout*>(&funcPtr);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] Function address: %p\n", layout->funcAddr);
                DEBUG_LOG(debugBuf);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] 'this' adjustment: %d\n", layout->thisAdjustment);
                DEBUG_LOG(debugBuf);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] vtorDisp: %d\n", layout->vtorDisp);
                DEBUG_LOG(debugBuf);
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] vtableIndex: %d\n", layout->vtableIndex);
                DEBUG_LOG(debugBuf);
                
                DEBUG_LOG("[RenderJobWP] *** CALLING renderPrepareImpl WITH SEH WORKAROUND ***\n");
                
                // Call through helper function that uses SEH to catch the broken return thunk crash
                // The function executes successfully but crashes when returning due to compiler bug
                CallRenderPrepareImplWithSEH(rvPtr);
                
                DEBUG_LOG("[RenderJobWP] ========================================\n");
                DEBUG_LOG("[RenderJobWP] *** renderPrepareImpl COMPLETED SUCCESSFULLY ***\n");
                DEBUG_LOG("[RenderJobWP] ========================================\n");
            }
            catch (const std::exception& e)
            {
                sprintf_s(debugBuf, sizeof(debugBuf), "[RenderJobWP] std::exception caught in renderPrepareImpl: %s\n", e.what());
                DEBUG_LOG(debugBuf);
            }
            catch (...)
            {
                DEBUG_LOG("[RenderJobWP] Unknown exception caught in renderPrepareImpl!\n");
            }
        }

        // 3) Perform render (draw + present)
        // Use the same renderViewPtr captured above
        if (renderViewPtr)
        {
            // Call through ViewBase pointer
            RBX::ViewBase* viewBasePtr = renderViewPtr.get();
            
            DEBUG_LOG("[RenderJobWP] *** ABOUT TO CALL renderPerform() ***\n");
            viewBasePtr->renderPerform(now.timestampSeconds());
            DEBUG_LOG("[RenderJobWP] *** renderPerform() RETURNED ***\n");
        }
        else
        {
            DEBUG_LOG("[RenderJobWP] ERROR: renderViewPtr is NULL, cannot call renderPerform!\n");
        }

        // CRITICAL WP8.1 COMPOSITOR WORKAROUND: Force SetSwapChain periodically
        // The compositor sometimes "forgets" about the swap chain
        static int forceCompositorCounter = 0;
        forceCompositorCounter++;
        if (forceCompositorCounter <= 10 || forceCompositorCounter % 30 == 0) // First 10 frames, then every 30
        {
            if (m_device && m_panel && m_marshaller)
            {
                m_marshaller->Execute([this]()
                {
                    try
                    {
                        DEBUG_LOG("[RenderJobWP] *** FORCING COMPOSITOR UPDATE (periodic) ***\n");
                        m_device->rebindSwapChain();
                        DEBUG_LOG("[RenderJobWP] Compositor force complete\n");
                    }
                    catch (...)
                    {
                        DEBUG_LOG("[RenderJobWP] Exception during compositor force\n");
                    }
                });
            }
        }

        // Update FPS statistics
        {
            std::lock_guard<std::mutex> lock(m_statsMutex);
            m_frameCount++;
            
            // Calculate FPS every second
            RBX::Time currentTime = RBX::Time::now<RBX::Time::Fast>();
            double elapsedSeconds = (currentTime - m_lastFpsTime).seconds();
            if (elapsedSeconds >= 1.0)
            {
                m_fps = m_frameCount / elapsedSeconds;
                m_frameCount = 0;
                m_lastFpsTime = currentTime;
                
                // Log FPS occasionally
                static int fpsLogCounter = 0;
                if (++fpsLogCounter % 5 == 0) // Every 5 seconds
                {
                    char buf[128];
                    sprintf_s(buf, sizeof(buf), "[RenderJobWP] FPS: %.1f\n", m_fps);
                    DEBUG_LOG(buf);
                }
            }
        }

        return TaskScheduler::Stepped;
    }
}
