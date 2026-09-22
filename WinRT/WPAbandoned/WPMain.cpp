#include "pch.h"
#include "WPMain.h"
#include "Common\DirectXHelper.h"

using namespace WP;
using namespace Windows::Foundation;
using namespace Windows::System::Threading;
using namespace Concurrency;

// Loads and initializes application assets when the application is loaded.
WPMain::WPMain(const std::shared_ptr<DX::DeviceResources>& deviceResources) :
    m_deviceResources(deviceResources),
    m_criticalSection(std::make_shared<Concurrency::critical_section>()),
    m_pointerLocationX(0.0f)
{
    // Register to be notified if the Device is lost or recreated
    m_deviceResources->RegisterDeviceNotify(this);

    // Template content disabled to remove CSO shader usage; engine will render instead
    // m_sceneRenderer = std::unique_ptr<Sample3DSceneRenderer>(new Sample3DSceneRenderer(m_deviceResources));
    // m_fpsTextRenderer = std::unique_ptr<SampleFpsTextRenderer>(new SampleFpsTextRenderer(m_deviceResources));

    // TODO: Change the timer settings if you want something other than the default variable timestep mode.
    // e.g. for 60 FPS fixed timestep update logic, call:
}

WPMain::~WPMain()
{
    // Ensure render loop is stopped before destruction to avoid the background thread
    // accessing freed members via the captured 'this'.
    StopRenderLoop();

    // Deregister device notification
    if (m_deviceResources)
    {
        m_deviceResources->RegisterDeviceNotify(nullptr);
    }
}

// Updates application state when the window size changes (e.g. device orientation change)
void WPMain::CreateWindowSizeDependentResources()
{
    if (m_sceneRenderer)
        m_sceneRenderer->CreateWindowSizeDependentResources();
}

void WPMain::StartRenderLoop()
{
    // If the animation render loop is already running then do not start another thread.
    if (m_renderLoopWorker != nullptr && m_renderLoopWorker->Status == Windows::Foundation::AsyncStatus::Started)
    {
        return;
    }

    // Ensure size-dependent resources are created before we begin presenting
    CreateWindowSizeDependentResources();

    // Create a task that will be run on a background thread.
    // Capture critical_section by value to ensure it outlives the lambda
    auto criticalSection = m_criticalSection;
    auto workItemHandler = ref new WorkItemHandler([this, criticalSection](IAsyncAction ^ action)
    {
        // Calculate the updated frame and render once per vertical blanking interval.
        while (true)
        {
            bool shouldExit = false;
            {
                // Acquire lock for this iteration
                critical_section::scoped_lock lock(*criticalSection);
                
                // Check status inside lock - if cancelled, signal exit
                if (action->Status != Windows::Foundation::AsyncStatus::Started)
                {
                    shouldExit = true;
                }
                else
                {
                    // Validate resources before using them to avoid access violations if device is lost or being torn down
                    // Do not require sample renderers; they may be disabled when engine owns rendering
                    if (m_deviceResources)
                    {
                        Update();
                        if (Render())
                        {
                            m_deviceResources->Present();
                        }
                    }
                }
                // Lock released here at end of scope
            }
            
            // Exit loop AFTER lock is released to prevent destructor race
            if (shouldExit)
                break;
        }
    });

	// Run task on a dedicated high priority background thread.
	m_renderLoopWorker = ThreadPool::RunAsync(workItemHandler, WorkItemPriority::High, WorkItemOptions::TimeSliced);
}

void WPMain::StopRenderLoop()
{
    if (m_renderLoopWorker)
    {
        // Capture to wait after cancel to ensure background thread exits before teardown
        auto worker = m_renderLoopWorker;
        worker->Cancel();
        try
        {
            // Wait for the worker to finish to avoid races using freed resources
            concurrency::create_task(worker).wait();
        }
        catch (...)
        {
            // Ignore cancellation exceptions
        }
        m_renderLoopWorker = nullptr;
    }
}

// Updates the application state once per frame.
void WPMain::Update() 
{
    ProcessInput();

    // Update scene objects.
    m_timer.Tick([&]()
    {
        // Template content disabled; guard in case renderers are not created
        if (m_sceneRenderer)
            m_sceneRenderer->Update(m_timer);
        if (m_fpsTextRenderer)
            m_fpsTextRenderer->Update(m_timer);
    });
}

// Process all input from the user before updating game state
void WPMain::ProcessInput()
{
    // TODO: Add per frame input handling here.
    if (m_sceneRenderer)
        m_sceneRenderer->TrackingUpdate(m_pointerLocationX);
}
// Renders the current frame according to the current application state.
// Returns true if the frame was rendered and is ready to be displayed.
bool WPMain::Render() 
{
    // Don't try to render anything before the first Update.
    if (m_timer.GetFrameCount() == 0)
    {
        return false;
    }

    if (!m_deviceResources)
        return false;

    auto context = m_deviceResources->GetD3DDeviceContext();
    if (!context)
        return false;

	// Reset the viewport to target the whole screen.
	auto viewport = m_deviceResources->GetScreenViewport();
	context->RSSetViewports(1, &viewport);

	// Reset render targets to the screen.
    auto rtv = m_deviceResources->GetBackBufferRenderTargetView();
    auto dsv = m_deviceResources->GetDepthStencilView();
    if (rtv == nullptr || dsv == nullptr)
        return false;
    ID3D11RenderTargetView *const targets[1] = { rtv };
    context->OMSetRenderTargets(1, targets, dsv);

	// Clear the back buffer and depth stencil view.
	// WindowsClient loading background color (#1E1E1E)
	const float loadingBackground[4] = { 0.11764706f, 0.11764706f, 0.11764706f, 1.0f };
    context->ClearRenderTargetView(rtv, loadingBackground);
    context->ClearDepthStencilView(dsv, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	// Render the scene objects.
	// TODO: Replace this with your app's content rendering functions.
	// M1: Do not render sample content; present a clean loading background only.
	// m_sceneRenderer->Render();
	// m_fpsTextRenderer->Render();

    return true;
}
// Notifies renderers that device resources need to be released.
void WPMain::OnDeviceLost()
{
    if (m_sceneRenderer)
        m_sceneRenderer->ReleaseDeviceDependentResources();
    if (m_fpsTextRenderer)
        m_fpsTextRenderer->ReleaseDeviceDependentResources();
}

// Notifies renderers that device resources may now be recreated.
void WPMain::OnDeviceRestored()
{
    if (m_sceneRenderer)
        m_sceneRenderer->CreateDeviceDependentResources();
    if (m_fpsTextRenderer)
        m_fpsTextRenderer->CreateDeviceDependentResources();
    CreateWindowSizeDependentResources();
}
