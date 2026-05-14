#include "stdafx.h"
#include "Marshaller.h"

Marshaller::Marshaller()
    : m_marshallerThreadId(GetCurrentThreadId())
{
}

Marshaller::~Marshaller()
{
}

void Marshaller::execute(const std::function<void()>& func)
{
    if (isMarshallerThread())
    {
        func();
    }
    else
    {
        std::mutex completionMutex;
        std::condition_variable completionEvent;
        bool completed = false;

        {
            std::lock_guard<std::mutex> lock(m_mutex);
            m_workItems.push_back([&]() {
                func();
                {
                    std::lock_guard<std::mutex> lock2(completionMutex);
                    completed = true;
                }
                completionEvent.notify_one();
            });
        }

        std::unique_lock<std::mutex> lock(completionMutex);
        completionEvent.wait(lock, [&]() { return completed; });
    }
}

void Marshaller::submit(const std::function<void()>& func)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_workItems.push_back(func);
}

void Marshaller::process()
{
    std::vector<std::function<void()>> itemsToProcess;
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        itemsToProcess.swap(m_workItems);
    }

    for (const auto& item : itemsToProcess)
    {
        item();
    }
}

bool Marshaller::isMarshallerThread() const
{
    return GetCurrentThreadId() == m_marshallerThreadId;
}
