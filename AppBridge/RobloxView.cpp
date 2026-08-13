// AppBridge\RobloxView.cpp

#include "pch.h"
#include "RobloxView.h"

#include <boost/bind.hpp>
#include <boost/make_shared.hpp>
#include <boost/thread.hpp>

#include "v8datamodel/BaseRenderJob.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/Game.h"
#include "v8datamodel/UserInputService.h"
#include "rbx/rbxTime.h"
#include "rbx/CEvent.h"
#include "rbx/TaskScheduler.h"
#include "rbx/Profiler.h"

#include "util/IMetric.h"
#include "util/standardout.h"
#include "rbx/SystemUtil.h"
#include "v8tree/Verb.h"

#include "GfxBase/ViewBase.h"
#include "GfxBase/FrameRateManager.h"
#include "GfxBase/RenderSettings.h"

#include "RenderSettingsItem.h"
#include "RbxFormat.h"

#include "FastLog.h"
#include "RbxAssert.h"
#include "FunctionMarshaller.h"

FASTFLAGVARIABLE(RenderCleanupInBackground, true)

std::atomic<int> RBX::UwpInput::wrapMode(0);

boost::function<void()>& RBX::getLeaveGameCallback()
{
    static boost::function<void()> callback;
    return callback;
}

RBX::LeaveGameVerb::LeaveGameVerb(RBX::VerbContainer* container)
    : RBX::Verb(container, "Exit")
{
}

RBX::LeaveGameVerb::~LeaveGameVerb()
{
}

void RBX::LeaveGameVerb::doIt(RBX::IDataState* dataState)
{
    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (!marshaller)
        return;

    boost::function<void()> exitCallback = RBX::getLeaveGameCallback();
    if (exitCallback)
        marshaller->Submit(exitCallback);
}

class RobloxView::RenderJob : public RBX::BaseRenderJob, public RBX::IMetric
{
public:
    static const double kUiStallBackoffSeconds;

    RenderJob(RBX::ViewBase* view, RBX::FunctionMarshaller* marshaller, boost::shared_ptr<RBX::DataModel> dataModel)
        : RBX::BaseRenderJob(CRenderSettingsItem::singleton().getMinFrameRate(), CRenderSettingsItem::singleton().getMaxFrameRate(), dataModel)
        , marshaller(marshaller)
        , dataModel(dataModel)
        , view(view)
        , renderEvent(false)
        , stopped(0)
        , renderInFlight(false)
        , uiStallBackoff(false)
        , stallSince(0.0)
    {
    }

    virtual ~RenderJob()
    {
        stop();
    }

    void stop()
    {
        stopped = 1;
    }

    void resume()
    {
        stopped = 0;
        wake();
    }

    void abortRender()
    {
        renderEvent.Set();
    }

    static void scheduleRenderPrepare(RenderJob* self, RBX::ViewBase* view)
    {
        self->renderInFlight = false;

        if (self->stopped != 0)
            return;
        if (!view)
            return;

        const double prepareStart = RBX::Time::nowFastSec();
        view->renderPrepare(self);
    }

    static void scheduleRenderPerform(RenderJob* self, RBX::ViewBase* view, double timeJobStart)
    {
        if (!self->dataModel)
            return;
        if (self->stopped != 0)
            return;
        if (!view)
            return;

        const double performStart = RBX::Time::nowFastSec();
        view->renderPerform(timeJobStart);
        self->wake();
    }

    virtual RBX::TaskScheduler::StepResult stepDataModelJob(const Stats& stats)
    {
        RBXPROFILER_SCOPE("Jobs", __FUNCTION__);

        if (stopped != 0 || !view || !view->getFrameRateManager())
            return RBX::TaskScheduler::Stepped;

        try
        {
            if (renderInFlight)
            {
                if (uiStallBackoff && (RBX::Time::nowFastSec() - stallSince) >= kUiStallBackoffSeconds)
                    renderInFlight = false;
                else
                    return RBX::TaskScheduler::Stepped;
            }

            const double timeJobStart = RBX::Time::nowFastSec();
			{
				RBX::DataModel::scoped_write_request request(dataModel.get());

				const RBX::Time now = RBX::Time::now<RBX::Time::Fast>();
				const double renderDelta = (now - lastRenderTime).seconds();
				lastRenderTime = now;

				view->updateVR();

				dataModel->renderStep((float)renderDelta);

				if (RBX::UserInputService* inputService = RBX::ServiceProvider::find<RBX::UserInputService>(dataModel.get()))
					RBX::UwpInput::wrapMode.store(inputService->getMouseWrapMode());

				isAwake = false;
			}

            if (marshaller->ExecuteTimed(boost::bind(&RenderJob::scheduleRenderPrepare, this, view), &renderEvent, 3000))
            {
                uiStallBackoff = false;
                stallSince = 0.0;

                marshaller->Submit(boost::bind(&RenderJob::scheduleRenderPerform, this, view, timeJobStart));
            }
            else
            {
                const double now = RBX::Time::nowFastSec();
                if (!uiStallBackoff)
                {
                    stallSince = now;
                    uiStallBackoff = true;
                    int quality = -1;
                    if (RBX::FrameRateManager* frm = view->getFrameRateManager())
                        quality = frm->GetQualityLevel();
                }

                renderInFlight = true;
                wake();
            }
        }
        catch (RBX::base_exception& e)
        {
            RBX::StandardOut::singleton()->print(RBX::MESSAGE_ERROR, e);
        }

        return RBX::TaskScheduler::Stepped;
    }

    virtual RBX::Time::Interval sleepTime(const Stats& stats)
    {
        if (stopped != 0)
            return RBX::Time::Interval::max();

        if (uiStallBackoff)
            return RBX::Time::Interval(kUiStallBackoffSeconds);

        if (isAwake)
            return computeStandardSleepTime(stats, maxFrameRate);

        return RBX::Time::Interval::max();
    }

    /*override*/ std::string getMetric(const std::string& metric) const
    {
        if (!view)
            return "No View";

        RBX::FrameRateManager* frm = view->getFrameRateManager();

        if (metric == "Graphics Mode")
            return "";

        if (metric == "FRM")
            return (frm && frm->IsBlockCullingEnabled()) ? "On" : "Off";

        if (metric == "Anti-Aliasing")
            return "";

        RBXASSERT(0);
        return "";
    }

    /*override*/ double getMetricValue(const std::string& metric) const
    {
        if (!view)
            return 0.0;

        RBX::FrameRateManager* frm = view->getFrameRateManager();

        if (metric == "Render FPS")
            return averageStepsPerSecond();
        if (metric == "Render Duty")
            return averageDutyCycle();
        if (metric == "Render Job Time")
            return averageStepTime();
        if (metric == "Render Nominal FPS")
            return frm ? 1000.0 / frm->GetRenderTimeAverage() : 0.0;
        if (metric == "Delta Between Renders" || metric == "Total Render" ||
            metric == "Present Time" || metric == "GPU Delay" || metric == "Render Prepare")
            return view->getMetricValue(metric);
        if (metric == "Video Memory MB")
            return RBX::SystemUtil::getVideoMemory() / 1e6;

        return 0.0;
    }

private:
    RBX::FunctionMarshaller* marshaller;
    boost::shared_ptr<RBX::DataModel> dataModel;
    RBX::ViewBase* view;
    RBX::CEvent renderEvent;
    volatile int stopped;
    volatile bool renderInFlight;
    bool uiStallBackoff;
    double stallSince;
};

const double RobloxView::RenderJob::kUiStallBackoffSeconds = 0.25;

static RBX::ViewBase* createGameWindow(void* wnd, unsigned int width, unsigned int height)
{
    static boost::once_flag flag = BOOST_ONCE_INIT;
    boost::call_once(&RBX::ViewBase::InitPluginModules, flag);

    CRenderSettingsItem& settings = CRenderSettingsItem::singleton();

    static const RBX::CRenderSettings::GraphicsMode modes[] =
    {
        RBX::CRenderSettings::Direct3D11,
        RBX::CRenderSettings::Direct3D9,
        RBX::CRenderSettings::OpenGL,
    };

    for (size_t i = 0; i < sizeof(modes) / sizeof(modes[0]); i++)
    {
        RBX::CRenderSettings::GraphicsMode mode = modes[i];

        try
        {
            RBX::OSContext context;
            context.hWnd = wnd;
            context.width = width;
            context.height = height;

            RBX::ViewBase* rbxView = RBX::ViewBase::CreateView(mode, &context, &settings);
            rbxView->initResources();

            return rbxView;
        }
        catch (std::exception& e)
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "Mode %d failed: \"%s\"", mode, e.what());
        }
    }

    RBXASSERT(0);
    throw RBX::runtime_error("GraphicsInitErrorNoModes");
}

RobloxView::RobloxView(void* wnd, unsigned int width, unsigned int height)
    : leaveGameVerb()
    , view(createGameWindow(wnd, width, height))
    , game()
    , marshaller(RBX::FunctionMarshaller::GetWindow())
    , placeIDChangeConnection()
    , renderJob()
    , width(width)
    , height(height)
{
    RBXASSERT(view);
}

RobloxView::~RobloxView()
{
    leaveGameVerb.reset();

    if (renderJob)
    {
        renderJob->abortRender();
        renderJob->stop();

        boost::function<void()> callback = boost::bind(&RBX::FunctionMarshaller::ProcessMessages, marshaller);
        RBX::TaskScheduler::singleton().removeBlocking(renderJob, callback);
    }

    marshaller->ProcessMessages();

    renderJob.reset();

    if (game)
    {
        if (boost::shared_ptr<RBX::DataModel> dataModel = game->getDataModel())
            dataModel->setIsShuttingDown(true);
    }

    if (game && game->getDataModel())
    {
        RBX::DataModel::LegacyLock lock(game->getDataModel().get(), RBX::DataModelJob::Write);
        view->bindWorkspace(boost::shared_ptr<RBX::DataModel>());
    }

    RBX::FunctionMarshaller::ReleaseWindow(marshaller);

    view.reset();
}

RobloxView* RobloxView::create_view(shared_ptr<RBX::Game> game, void* wnd, unsigned int width, unsigned int height)
{
    RobloxView* result = new RobloxView(wnd, width, height);
    result->completeViewPrep(game);
    return result;
}

void RobloxView::completeViewPrep(shared_ptr<RBX::Game> game)
{
    this->game = game;

    placeIDChangeConnection = game->getDataModel()->propertyChangedSignal.connect(
        boost::bind(&RobloxView::onPlaceIDChanged, this, _1));

    shared_ptr<RBX::DataModel> dataModelToSubmitOn = game->getDataModel();
    {
        RBX::DataModel::LegacyLock lock(dataModelToSubmitOn.get(), RBX::DataModelJob::Write);
        if (RBX::UserInputService* userInputService = RBX::ServiceProvider::create<RBX::UserInputService>(dataModelToSubmitOn.get()))
            userInputService->setTouchEnabled(true);
    }

    bindWorkspace(view, game->getDataModel());

    renderJob = shared_ptr<RenderJob>(new RenderJob(view.get(), marshaller, game->getDataModel()));

    defineConcurrencyRules();

    RBX::TaskScheduler::singleton().add(renderJob);

    if (shared_ptr<RBX::DataModel> sharedDM = game->getDataModel())
    {
        if (RBX::DataModel* dm = sharedDM.get())
        {
            leaveGameVerb.reset(new RBX::LeaveGameVerb(dm));
        }
    }
}

void RobloxView::replaceGame(shared_ptr<RBX::Game> game)
{
    if (renderJob)
    {
        renderJob->abortRender();

        boost::function<void()> callback = boost::bind(&RBX::FunctionMarshaller::ProcessMessages, marshaller);
        RBX::TaskScheduler::singleton().removeBlocking(renderJob, callback);
    }

    marshaller->ProcessMessages();

    renderJob.reset();

    if (this->game)
    {
        if (boost::shared_ptr<RBX::DataModel> oldDataModel = this->game->getDataModel())
            oldDataModel->setIsShuttingDown(true);
    }

    {
        RBX::DataModel::LegacyLock lock(game->getDataModel().get(), RBX::DataModelJob::Write);
        view->bindWorkspace(boost::shared_ptr<RBX::DataModel>());
    }

    this->game = game;

    if (RBX::DataModel* dm = game->getDataModel().get())
        leaveGameVerb.reset(new RBX::LeaveGameVerb(dm));

    placeIDChangeConnection.disconnect();
    placeIDChangeConnection = game->getDataModel()->propertyChangedSignal.connect(
        boost::bind(&RobloxView::onPlaceIDChanged, this, _1));

    bindWorkspace(view, game->getDataModel());

    renderJob = shared_ptr<RenderJob>(new RenderJob(view.get(), marshaller, game->getDataModel()));

    defineConcurrencyRules();

    RBX::TaskScheduler::singleton().add(renderJob);
}

void RobloxView::onPlaceIDChanged(const RBX::Reflection::PropertyDescriptor* desc)
{
}

void RobloxView::defineConcurrencyRules()
{
    RBXASSERT(renderJob);
}

void RobloxView::requestStopRenderingForBackgroundMode()
{
    if (FFlag::RenderCleanupInBackground)
    {
        if (renderJob)
        {
            renderJob->abortRender();

            boost::function<void()> callback = boost::bind(&RBX::FunctionMarshaller::ProcessMessages, marshaller);
            RBX::TaskScheduler::singleton().removeBlocking(renderJob, callback);
        }

        marshaller->ProcessMessages();
        renderJob.reset();
    }
    else
    {
        if (renderJob)
        {
            renderJob->abortRender();
            renderJob->stop();
            renderJob.reset();
        }
    }
}

void RobloxView::pauseRendering()
{
    if (renderJob)
        renderJob->stop();
}

void RobloxView::resumeRendering()
{
    if (renderJob)
        renderJob->resume();
}

void RobloxView::requestResumeRendering()
{
    if (!game)
        return;

    renderJob = shared_ptr<RenderJob>(new RenderJob(view.get(), marshaller, game->getDataModel()));

    RBX::TaskScheduler::singleton().add(renderJob);
}

void RobloxView::exitGame()
{
    if (renderJob)
        renderJob->stop();
}

void RobloxView::setBounds(unsigned int width, unsigned int height)
{
    this->width = width;
    this->height = height;

    if (view)
        view->onResize((int)width, (int)height);
}

void RobloxView::bindWorkspace(boost::shared_ptr<RBX::ViewBase> view, boost::shared_ptr<RBX::DataModel> const dataModel, bool buildGUI)
{
    RBX::DataModel::LegacyLock lock(dataModel, RBX::DataModelJob::Write);
    view->bindWorkspace(dataModel);
    if (buildGUI)
        view->buildGui();
}

void RobloxView::shutDownGraphics(shared_ptr<RBX::Game> game)
{
    if (renderJob)
    {
        renderJob->abortRender();
        renderJob->stop();

        boost::function<void()> callback = boost::bind(&RBX::FunctionMarshaller::ProcessMessages, marshaller);
        RBX::TaskScheduler::singleton().removeBlocking(renderJob, callback);

        renderJob.reset();
    }

    marshaller->ProcessMessages();

    if (view)
        view->bindWorkspace(boost::shared_ptr<RBX::DataModel>());

    RBX::FunctionMarshaller::ReleaseWindow(marshaller);

    view.reset();
}

void RobloxView::startUpGraphics(shared_ptr<RBX::Game> game, void* wnd, unsigned int width, unsigned int height)
{
    view = boost::shared_ptr<RBX::ViewBase>(createGameWindow(wnd, width, height));
    marshaller = RBX::FunctionMarshaller::GetWindow();

    bindWorkspace(view, game->getDataModel(), false);

    renderJob = shared_ptr<RenderJob>(new RenderJob(view.get(), marshaller, game->getDataModel()));

    defineConcurrencyRules();

    RBX::TaskScheduler::singleton().add(renderJob);
}

