#pragma once

#include <atomic>
#include <deque>

#include <boost/function.hpp>

#include "rbx/threadsafe.h"

namespace RBX
{
    class CEvent;

    // Marshals functions across threads onto the single UWP UI thread.
    // The UI thread must drain the queue periodically via ProcessMessages().
    class FunctionMarshaller
    {
    public:
        static FunctionMarshaller* GetWindow();
        static void ReleaseWindow(FunctionMarshaller* window);

        void Execute(boost::function<void()> job, CEvent* waitEvent = NULL);

        // Like Execute, but only waits up to timeoutMs for the UI thread to run
        // the job. Returns true if the job ran, false on timeout (the job stays
        // queued and will still run when the UI thread drains). Used by the
        // render job so a stalled UI pump cannot deadlock the render loop.
        bool ExecuteTimed(boost::function<void()> job, CEvent* waitEvent, int timeoutMs);

        void Submit(boost::function<void()> job);

        // Call this only from the UI thread.
        void ProcessMessages();

        // Diagnostics: number of jobs currently queued, and the wall-clock
        // timestamp (fast seconds) of the last time the UI thread pumped the
        // queue. Callers on any thread can use these to detect a UI pump stall.
        int size();
        double lastPumpWallTime() const;

    private:
        FunctionMarshaller();
        ~FunctionMarshaller();

        void runOnUIThread(boost::function<void()> job, bool* done, CEvent* waitEvent);

        std::deque<boost::function<void()> > asyncCalls;
        boost::mutex mutex;
        boost::condition_variable condition;
        DWORD threadID;

        static FunctionMarshaller* s_singleton;
        std::atomic<double> lastPumpWallTimeValue;
    };
}
