#pragma once

#include <functional>
#include <ppltasks.h>
#include <windows.ui.core.h>
#include <windows.ui.xaml.controls.h>

namespace RobloxEngine
{
    // Minimal marshaller that posts work to the UI thread via CoreDispatcher
    class FunctionMarshallerWP
    {
    public:
        explicit FunctionMarshallerWP(Windows::UI::Xaml::Controls::SwapChainPanel^ panel)
            : m_dispatcher(panel ? panel->Dispatcher : nullptr)
        {
        }

        // Execute on UI thread and wait
        void Execute(const std::function<void()>& fn)
        {
            if (!m_dispatcher || !fn)
                return;

            if (m_dispatcher->HasThreadAccess)
            {
                // Already on UI thread - execute directly (exception propagates normally)
                fn();
                return;
            }

            // Capture exceptions to propagate them across the WinRT dispatcher boundary
            std::exception_ptr exceptionPtr;
            auto action = m_dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::High,
                ref new Windows::UI::Core::DispatchedHandler([fn, &exceptionPtr]() { 
                    try { 
                        fn(); 
                    } 
                    catch (...) { 
                        // Capture exception to re-throw after wait()
                        exceptionPtr = std::current_exception();
                    } 
                }));
            concurrency::create_task(action).wait();
            
            // Re-throw captured exception on calling thread
            if (exceptionPtr)
                std::rethrow_exception(exceptionPtr);
        }

        // Submit to UI thread (fire-and-forget)
        void Submit(const std::function<void()>& fn)
        {
            if (!m_dispatcher || !fn)
                return;

            if (m_dispatcher->HasThreadAccess)
            {
                fn();
                return;
            }

            m_dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal,
                ref new Windows::UI::Core::DispatchedHandler([fn]() { fn(); }));
        }

    private:
        Windows::UI::Core::CoreDispatcher^ m_dispatcher;
    };
}
