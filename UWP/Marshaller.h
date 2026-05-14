#pragma once

#include "stdafx.h"

class Marshaller
{
public:
    Marshaller();
    ~Marshaller();

    void execute(const std::function<void()>& func);
    void submit(const std::function<void()>& func);
    void process();
    bool isMarshallerThread() const;

private:
    std::mutex m_mutex;
    std::vector<std::function<void()>> m_workItems;
    DWORD m_marshallerThreadId;
};
