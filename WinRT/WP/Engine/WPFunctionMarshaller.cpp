#include <windows.h>

#include "WPFunctionMarshaller.h"

#include <boost/shared_ptr.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>

#include "rbx/CEvent.h"
#include "rbx/rbxTime.h"
#include "util/standardout.h"

namespace RBX
{
    FunctionMarshaller* FunctionMarshaller::s_singleton = NULL;

    FunctionMarshaller::FunctionMarshaller()
        : threadID(GetCurrentThreadId())
    {
    }
    FunctionMarshaller::~FunctionMarshaller()
    {
    }

    FunctionMarshaller* FunctionMarshaller::GetWindow()
    {
        if (!s_singleton)
            s_singleton = new FunctionMarshaller();
        return s_singleton;
    }

    void FunctionMarshaller::ReleaseWindow(FunctionMarshaller* window)
    {
        // Single UI thread; singleton lives for process lifetime.
        if (window && window != s_singleton)
            delete window;
    }

    void FunctionMarshaller::runOnUIThread(boost::function<void()> job, bool* done, CEvent* waitEvent)
    {
        try { job(); }
        catch (...) {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                "runOnUIThread: exception caught in UI-thread job (swallowed)");
        }
        if (waitEvent)
            waitEvent->Set();

        if (done)
        {
            boost::mutex::scoped_lock lock(mutex);
            *done = true;
        }
        condition.notify_one();
    }

    void FunctionMarshaller::Execute(boost::function<void()> job, CEvent* waitEvent)
    {
        if (GetCurrentThreadId() == threadID)
        {
            try { job(); }
            catch (...) {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "Execute: exception caught in UI-thread job (swallowed)");
            }
            if (waitEvent)
                waitEvent->Set();
            return;
        }

        boost::shared_ptr<bool> done(new bool(false));
        {
            boost::mutex::scoped_lock lock(mutex);
            asyncCalls.push_back(boost::bind(&FunctionMarshaller::runOnUIThread, this, job, done.get(), waitEvent));
            condition.notify_one();
        }

        boost::mutex::scoped_lock lock(mutex);
        while (!*done)
            condition.timed_wait(lock, boost::posix_time::milliseconds(10));
    }

    void FunctionMarshaller::Submit(boost::function<void()> job)
    {
        if (GetCurrentThreadId() == threadID)
        {
            try { job(); }
            catch (...) {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "Submit: exception caught in UI-thread job (swallowed)");
            }
            return;
        }

        boost::mutex::scoped_lock lock(mutex);
        asyncCalls.push_back(job);
        condition.notify_one();
    }

    void FunctionMarshaller::ProcessMessages()
    {
        while (true)
        {
            boost::function<void()> job;
            {
                boost::mutex::scoped_lock lock(mutex);
                if (asyncCalls.empty())
                    return;
                job = asyncCalls.front();
                asyncCalls.pop_front();
            }
            try
            {
                job();
            }
            catch (...)
            {
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                    "ProcessMessages: exception caught in UI-thread job (swallowed)");
            }
        }
    }
}
