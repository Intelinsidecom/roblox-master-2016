#include "pch.h"
#include "FunctionMarshaller.h"

#include <boost/shared_ptr.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>

#include "rbx/CEvent.h"
#include "rbx/rbxTime.h"

namespace RBX
{
    FunctionMarshaller* FunctionMarshaller::s_singleton = NULL;

    FunctionMarshaller::FunctionMarshaller()
        : threadID(GetCurrentThreadId())
        , lastPumpWallTimeValue(0.0)
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
        // The UWP app has a single UI thread; the singleton lives for the
        // lifetime of the process, so release is a no-op.
        if (window && window != s_singleton)
            delete window;
    }

    void FunctionMarshaller::runOnUIThread(boost::function<void()> job, bool* done, CEvent* waitEvent)
    {
        job();
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
            job();
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

        // Wait for the UI thread to drain the queue. The lock must not be held
        // while waiting, otherwise the UI thread would block in ProcessMessages.
        boost::mutex::scoped_lock lock(mutex);
        while (!*done)
            condition.timed_wait(lock, boost::posix_time::milliseconds(10));
    }

    bool FunctionMarshaller::ExecuteTimed(boost::function<void()> job, CEvent* waitEvent, int timeoutMs)
    {
        if (GetCurrentThreadId() == threadID)
        {
            job();
            if (waitEvent)
                waitEvent->Set();
            return true;
        }

        boost::shared_ptr<bool> done(new bool(false));
        {
            boost::mutex::scoped_lock lock(mutex);
            asyncCalls.push_back(boost::bind(&FunctionMarshaller::runOnUIThread, this, job, done.get(), waitEvent));
            condition.notify_one();
        }

        boost::mutex::scoped_lock lock(mutex);
        const double deadline = RBX::Time::nowFastSec() + timeoutMs / 1000.0;
        while (!*done)
        {
            if (RBX::Time::nowFastSec() > deadline)
                break;
            condition.timed_wait(lock, boost::posix_time::milliseconds(10));
        }
        return *done;
    }

    void FunctionMarshaller::Submit(boost::function<void()> job)
    {
        if (GetCurrentThreadId() == threadID)
        {
            job();
            return;
        }

        boost::mutex::scoped_lock lock(mutex);
        asyncCalls.push_back(job);
        condition.notify_one();
    }

    void FunctionMarshaller::ProcessMessages()
    {
        lastPumpWallTimeValue.store(RBX::Time::nowFastSec(), std::memory_order_relaxed);
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
            job();
        }
    }

    int FunctionMarshaller::size()
    {
        boost::mutex::scoped_lock lock(mutex);
        return static_cast<int>(asyncCalls.size());
    }

    double FunctionMarshaller::lastPumpWallTime() const
    {
        return lastPumpWallTimeValue.load(std::memory_order_relaxed);
    }
}
