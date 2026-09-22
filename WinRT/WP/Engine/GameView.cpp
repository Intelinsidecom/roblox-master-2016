#include "pch.h"
#include "GameView.h"
#include "WPFunctionMarshaller.h"

#include <boost/bind.hpp>
#include <boost/thread.hpp>

#include "v8datamodel/BaseRenderJob.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/Game.h"
#include "v8datamodel/UserInputService.h"
#include "rbx/rbxTime.h"
#include "rbx/TaskScheduler.h"
#include "rbx/Profiler.h"

#include "util/standardout.h"

#include "GfxBase/ViewBase.h"
#include "GfxBase/FrameRateManager.h"

#include "RenderSettingsItem.h"
#include "FastLog.h"
#include "util/IMetric.h"

#include <sstream>
#include <string>

#include "RenderView.h"
#include "VisualEngine.h"

class GameView::RenderJob : public RBX::BaseRenderJob, public RBX::IMetric
{
public:
    RenderJob(boost::shared_ptr<RBX::ViewBase> view, RBX::FunctionMarshaller* marshaller,
        boost::shared_ptr<RBX::DataModel> dataModel)
        : RBX::BaseRenderJob(
            CRenderSettingsItem::singleton().getMinFrameRate(),
            CRenderSettingsItem::singleton().getMaxFrameRate(), dataModel)
        , marshaller(marshaller)
        , dataModel(dataModel)
        , view(view)
        , stopped(0)
        , stepCounter(0)
        , performCounter(0)
    {
        if (RBX::ViewBase* v = view.get())
        {
            if (RBX::FrameRateManager* frm = v->getFrameRateManager())
            {
                frm->SubmitCurrentFrame(16.0, 16.0, 16.0, 0.0);
            }
        }
    }

    virtual ~RenderJob() { stop(); }
    void stop() { stopped = 1; }

    virtual RBX::TaskScheduler::StepResult stepDataModelJob(const Stats& stats)
    {
        RBXPROFILER_SCOPE("Jobs", __FUNCTION__);
        if (stopped != 0)
            return RBX::TaskScheduler::Done;
        boost::shared_ptr<RBX::ViewBase> v = view;
        if (!v)
            return RBX::TaskScheduler::Stepped;
        RBX::DataModel* dm = v->getDataModel();
        if (!dm)
            return RBX::TaskScheduler::Stepped;
        try
        {
            const double timeJobStart = RBX::Time::nowFastSec();
            {
                boost::shared_ptr<RBX::DataModel> dmPtr =
                    boost::static_pointer_cast<RBX::DataModel>(dm->shared_from_this());
                RBX::DataModel::scoped_write_request request(dmPtr.get());
                const RBX::Time now = RBX::Time::now<RBX::Time::Fast>();
                const double renderDelta = (now - lastRenderTime).seconds();
                lastRenderTime = now;
                v->updateVR();
                dmPtr->renderStep((float)renderDelta);
                isAwake = false;
            }

            boost::weak_ptr<RenderJob> selfWeak =
                boost::static_pointer_cast<RenderJob>(shared_from_this());
            marshaller->Execute([selfWeak, v]()
            {
                if (boost::shared_ptr<RenderJob> self = selfWeak.lock())
                {
                    if (v && self->stopped == 0 && self->view.get() == v.get())
                        v->renderPrepare(self.get());
                }
            });
            marshaller->Submit([selfWeak, v, timeJobStart]()
            {
                if (boost::shared_ptr<RenderJob> self = selfWeak.lock())
                {
                    if (self->stopped == 0 && self->view.get() == v.get())
                    {
                        try
                        {
                            v->renderPerform(timeJobStart);
                        }
                        catch (...)
                        {
                            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
                                "[RenderJob] renderPerform exception (swallowed)");
                        }
                        self->wake();
                    }
                }
            });
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
        if (isAwake)
            return computeStandardSleepTime(stats, maxFrameRate);
        return RBX::Time::Interval::max();
    }

    virtual std::string getMetric(const std::string&) const { return ""; }
    virtual double getMetricValue(const std::string&) const { return 0.0; }

private:
    RBX::FunctionMarshaller* marshaller;
    boost::shared_ptr<RBX::DataModel> dataModel;
    boost::shared_ptr<RBX::ViewBase> view;
    volatile int stopped;
    int stepCounter;
    int performCounter;
};

static RBX::ViewBase* createGameWindowWP(void* wnd, unsigned int width, unsigned int height)
{
    static boost::once_flag flag = BOOST_ONCE_INIT;
    boost::call_once(&RBX::ViewBase::InitPluginModules, flag);

    CRenderSettingsItem& settings = CRenderSettingsItem::singleton();

    RBX::OSContext context;
    context.hWnd = wnd;
    context.width = static_cast<int>(width);
    context.height = static_cast<int>(height);

    RBX::ViewBase* rbxView = RBX::ViewBase::CreateView(RBX::CRenderSettings::Direct3D11, &context, &settings);
    rbxView->initResources();
    return rbxView;
}

GameView::GameView(void* wnd, unsigned int width, unsigned int height)
    : view(createGameWindowWP(wnd, width, height))
    , game()
    , marshaller(RBX::FunctionMarshaller::GetWindow())
    , renderJob()
    , width(width)
    , height(height)
{
    RBXASSERT(view);
}

GameView::~GameView()
{
    if (renderJob)
    {
        renderJob->stop();
        boost::function<void()> callback = boost::bind(&RBX::FunctionMarshaller::ProcessMessages, marshaller);
        RBX::TaskScheduler::singleton().removeBlocking(renderJob, callback);
    }
    marshaller->ProcessMessages();
    renderJob.reset();

    if (game)
    {
        if (boost::shared_ptr<RBX::DataModel> dm = game->getDataModel())
            dm->setIsShuttingDown(true);
    }
    if (game && game->getDataModel())
    {
        RBX::DataModel::LegacyLock lock(game->getDataModel().get(), RBX::DataModelJob::Write);
        view->bindWorkspace(boost::shared_ptr<RBX::DataModel>());
    }
    RBX::FunctionMarshaller::ReleaseWindow(marshaller);
    view.reset();
}

GameView* GameView::create_view(boost::shared_ptr<RBX::Game> game, void* wnd,
    unsigned int width, unsigned int height)
{
    GameView* result = new GameView(wnd, width, height);
    result->completeViewPrep(game);
    return result;
}

void GameView::completeViewPrep(boost::shared_ptr<RBX::Game> game)
{
    this->game = game;
    {
        RBX::DataModel::LegacyLock lock(game->getDataModel().get(), RBX::DataModelJob::Write);
        if (RBX::UserInputService* uis = RBX::ServiceProvider::create<RBX::UserInputService>(game->getDataModel().get()))
            uis->setTouchEnabled(true);
    }
    bindWorkspace(view, game->getDataModel());
    renderJob = boost::shared_ptr<RenderJob>(new RenderJob(view, marshaller, game->getDataModel()));
    RBX::TaskScheduler::singleton().add(renderJob);
}

void GameView::bindWorkspace(boost::shared_ptr<RBX::ViewBase> view,
    boost::shared_ptr<RBX::DataModel> const dataModel, bool buildGUI)
{
    RBX::DataModel::LegacyLock lock(dataModel, RBX::DataModelJob::Write);
    view->bindWorkspace(dataModel);
    if (buildGUI)
        view->buildGui();
}

void GameView::setBounds(unsigned int w, unsigned int h)
{
    width = w; height = h;
    if (view)
        view->onResize(static_cast<int>(w), static_cast<int>(h));
}

void GameView::requestStopRendering()
{
    if (renderJob)
    {
        renderJob->stop();
        boost::function<void()> callback = boost::bind(&RBX::FunctionMarshaller::ProcessMessages, marshaller);
        RBX::TaskScheduler::singleton().removeBlocking(renderJob, callback);
        marshaller->ProcessMessages();
        renderJob.reset();
    }
}

void GameView::requestResumeRendering()
{
    if (!game || renderJob)
        return;
    renderJob = boost::shared_ptr<RenderJob>(new RenderJob(view, marshaller, game->getDataModel()));
    RBX::TaskScheduler::singleton().add(renderJob);
}
