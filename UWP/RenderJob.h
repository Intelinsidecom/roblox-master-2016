#pragma once

#include "v8datamodel/BaseRenderJob.h"
#include "GfxBase/ViewBase.h"
#include "GfxBase/FrameRateManager.h"
#include "util/IMetric.h"

class Marshaller;

class RenderJob : public RBX::BaseRenderJob, public RBX::IMetric
{
public:
    RenderJob(RBX::ViewBase* view, Marshaller* marshaller);
    virtual ~RenderJob();

    void stop();

    virtual RBX::TaskScheduler::StepResult stepDataModelJob(const Stats& stats);
    virtual RBX::Time::Interval sleepTime(const Stats& stats);

    virtual std::string getMetric(const std::string& metric) const;
    virtual double getMetricValue(const std::string& metric) const;

private:
    RBX::ViewBase* view;
    Marshaller* marshaller;
    bool stopped;
    bool isAwake;
};
