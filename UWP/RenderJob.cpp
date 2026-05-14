#include "pch.h"
#include "stdafx.h"
#include "RenderJob.h"

#include "v8datamodel/BaseRenderJob.h"
#include "v8datamodel/DataModel.h"
#include "rbx/rbxTime.h"

#include "GfxBase/ViewBase.h"
#include "GfxBase/FrameRateManager.h"
#include "GfxBase/RenderSettings.h"

#include "Marshaller.h"
#include "rbx/Profiler.h"

RenderJob::RenderJob(RBX::ViewBase* v, Marshaller* m)
: RBX::BaseRenderJob(30.0f, 60.0f, boost::shared_ptr<RBX::DataModel>(v->getDataModel(), [](RBX::DataModel*){}))
{
    view = v;
    marshaller = m;
    stopped = false;
    isAwake = false;
}

RenderJob::~RenderJob()
{
}

void RenderJob::stop()
{
    stopped = true;
}

RBX::TaskScheduler::StepResult RenderJob::stepDataModelJob(const Stats& stats)
{
    RBXPROFILER_SCOPE("Jobs", __FUNCTION__);

    if (stopped)
    {
        return RBX::TaskScheduler::Done;
    }

    RBX::DataModel* dm = view->getDataModel();
    if (!dm || !view)
    {
        return RBX::TaskScheduler::Stepped;
    }

    double seconds = 0.016;
    {
        boost::shared_ptr<RBX::DataModel> dmPtr = boost::static_pointer_cast<RBX::DataModel>(dm->shared_from_this());
        RBX::DataModel::scoped_write_request request(dmPtr.get());
        
        seconds = 0.016; 
        dmPtr->renderStep(seconds);
        
        isAwake = false;
        seconds = RBX::Time::nowFastSec();
        marshaller->execute([this](){ view->renderPrepare(this); });
    }

    marshaller->submit([this, seconds]()
{
    boost::weak_ptr<RenderJob> selfWeak = boost::static_pointer_cast<RenderJob>(shared_from_this());
    if (boost::shared_ptr<RenderJob> self = selfWeak.lock())
    {
        view->renderPerform(seconds);
        self->wake();
    }
});
    return RBX::TaskScheduler::Stepped;
}

RBX::Time::Interval RenderJob::sleepTime(const Stats& stats)
{
    if (isAwake)
        return RBX::BaseRenderJob::computeStandardSleepTime(stats, maxFrameRate);
    else
        return RBX::Time::Interval::max();
}

std::string RenderJob::getMetric(const std::string& metric) const
{
    return "";
}

double RenderJob::getMetricValue(const std::string& metric) const
{
    return 0.0;
}
