#pragma once

#include <deque>

#include <boost/function.hpp>

#include "rbx/threadsafe.h"

namespace RBX
{
    class CEvent;

    class FunctionMarshaller
    {
    public:
        static FunctionMarshaller* GetWindow();
        static void ReleaseWindow(FunctionMarshaller* window);

        void Execute(boost::function<void()> job, CEvent* waitEvent = NULL);
        void Submit(boost::function<void()> job);

        // Call this only from the UI thread.
        void ProcessMessages();

    private:
        FunctionMarshaller();
        ~FunctionMarshaller();

        void runOnUIThread(boost::function<void()> job, bool* done, CEvent* waitEvent);

        std::deque<boost::function<void()> > asyncCalls;
        boost::mutex mutex;
        boost::condition_variable condition;
        DWORD threadID;

        static FunctionMarshaller* s_singleton;
    };
}
