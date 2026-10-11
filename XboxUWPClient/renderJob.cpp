#include "stdafx.h"
#include "renderJob.h"

#include "v8datamodel/BaseRenderJob.h"
#include "v8datamodel/DataModel.h"
#include "rbx/rbxTime.h"

#include "GfxBase/ViewBase.h"
#include "GfxBase/FrameRateManager.h"
#include "RenderSettingsItem.h"

#include "marshaller.h"
#include "rbx/Profiler.h"

extern void dprintf( const char* fmt, ... );

RenderJob::RenderJob(RBX::ViewBase* v, Marshaller* m)
: RBX::BaseRenderJob(CRenderSettingsItem::singleton().getMinFrameRate(), CRenderSettingsItem::singleton().getMaxFrameRate(), shared_from(v->getDataModel()) )
{
    view = v;
    marshaller = m;
    stopped = 0;
}

void RenderJob::stop()
{
    stopped = 1;
}

static void scheduleRenderPerform(const weak_ptr<RenderJob>& selfWeak, RBX::ViewBase* view, double timeJobStart)
{
    if (shared_ptr<RenderJob> self = selfWeak.lock())
    {
        try
        {
            view->renderPerform(timeJobStart);
        }
        catch (const std::exception& e)
        {
            // Marshaller::runJob() swallows anything thrown by a submitted job, so without
            // this wake() the RenderJob would stay asleep forever and rendering would stop.
            dprintf("[RenderJob] renderPerform failed: %s\n", e.what());
        }
        catch (...)
        {
            dprintf("[RenderJob] renderPerform failed: unknown exception\n");
        }
        self->wake();
    }
}

RBX::TaskScheduler::StepResult RenderJob::stepDataModelJob(const Stats& stats)
{
    RBXPROFILER_SCOPE("Jobs", __FUNCTION__);
    if (stopped)
	{
        return RBX::TaskScheduler::Done;
	}

    RBX::DataModel* dm = view->getDataModel();
    RBX::FrameRateManager* frm = view->getFrameRateManager();
    double seconds = 0.016;

    bool prepared = false;
    try
    {
        if(1)
        {
            RBX::DataModel::scoped_write_request request(dm);

            if(frm) seconds = frm->GetFrameTimeStats().getLatest() / 1000.f;
            dm->renderStep(seconds);

            if( frm )
                frm->configureFrameRateManager(RBX::CRenderSettings::FrameRateManagerAuto, true);

            isAwake = false;

            seconds = RBX::Time::nowFastSec();
            marshaller->execute( boost::bind(&RBX::ViewBase::renderPrepare, view, this) );
            prepared = true;
        }
    }
    catch (const std::exception& e)
    {
        dprintf("stepDataModelJob failed: %s\n", e.what());
        wake();
        return RBX::TaskScheduler::Stepped;
    }
    catch (...)
    {
        dprintf("stepDataModelJob failed: unknown exception\n");
        wake();
        return RBX::TaskScheduler::Stepped;
    }

    if (prepared)
    {
        marshaller->submit(boost::bind(&scheduleRenderPerform, weak_from(this), view, seconds));
    }
    return RBX::TaskScheduler::Stepped;
}


RBX::Time::Interval RenderJob::sleepTime(const Stats& stats)
{
    if (isAwake)
        return computeStandardSleepTime(stats, maxFrameRate);
    else
        return RBX::Time::Interval::max();
}

std::string RenderJob::getMetric(const std::string& metric) const
{
    return "";
}

double RenderJob::getMetricValue(const std::string& metric) const
{
    return 0;
}
