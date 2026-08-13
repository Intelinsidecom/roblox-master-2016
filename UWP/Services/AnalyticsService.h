#pragma once

namespace Roblox
{
    private ref class AnalyticsService sealed
    {
    public:
        static AnalyticsService^ GetInstance();

        static void Initialize();

        void ReportSession(bool isCrash, Platform::String^ counterName, int32 amount);

        void ReportFocusEvent(bool gained, int32 amount);

    private:
        AnalyticsService(Platform::String^ apiKey);

        Platform::String^ apiKey;

        void SendCounter(Platform::String^ counterName, int32 amount);
        void RaiseFatal(HRESULT hr);
    };
}
