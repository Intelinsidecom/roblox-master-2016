#include "pch.h"
#include "PlaceLauncher.h"

#include <ctime>

#include <boost/bind.hpp>
#include <boost/thread.hpp>

#include "RobloxView.h"
#include "UserInput.h"
#include "GamepadController.h"
#include "FunctionMarshaller.h"
#include "UWPPlatform.h"
#include "util/Http.h"
#include "util/ProtectedString.h"
#include "rbx/CEvent.h"

#include "v8datamodel/GuiService.h"
#include "v8datamodel/TeleportService.h"
#include "V8DataModel/ContentProvider.h"
#include "V8DataModel/GameBasicSettings.h"
#include "V8DataModel/UserInputService.h"
#include "v8datamodel/UserController.h"
#include "v8datamodel/FastLogSettings.h"
#include "v8xml/WebParser.h"
#include "script/ScriptContext.h"
#include "security/SecurityContext.h"
#include "util/standardout.h"
#include "rbx/TaskScheduler.h"
#include "rbx/Profiler.h"
#include "RbxFormat.h"

#include "GfxBase/ViewBase.h"
#include "GfxBase/FrameRateManager.h"
#include "RenderSettingsItem.h"

using namespace RBX;

namespace
{
static const std::string kUWPClientAppSettings = "UWPAppSettings";
static const std::string kUWPClientSettingsAPIKey = "D6925E56-BFB9-4908-AAA2-A5B1EC4B2D79";
static const std::string kStartGameURL = "%sGame/PlaceLauncher.ashx?request=%s&%s&isPartyLeader=false&gender=&isTeleport=false";
static const std::string kStartGameStatusURL = "%sGame/PlaceLauncher.ashx?request=CheckGameJobStatus&jobId=%s";
} // namespace

PlaceLauncher::PlaceLauncher()
    : rbxView(NULL)
    , teleporter()
    , isCurrentlyPlayingGame(false)
    , gameParams()
{
    teleporter.reset(new Teleporter(RBX::FunctionMarshaller::GetWindow()));
    RBX::TeleportService::SetCallback(teleporter.get());
}

PlaceLauncher::~PlaceLauncher()
{
}

PlaceLauncher& PlaceLauncher::getPlaceLauncher()
{
    static PlaceLauncher placeLauncher;
    return placeLauncher;
}

static shared_ptr<const Reflection::ValueTable> parseJSONResponse(const std::string& response)
{
    shared_ptr<const Reflection::ValueTable> result;
    if (!RBX::WebParser::parseJSONTable(response, result))
        return shared_ptr<const Reflection::ValueTable>();
    return result;
}

static int readJSONInt(const shared_ptr<const Reflection::ValueTable>& table, const char* name, int defaultValue)
{
    if (!table)
        return defaultValue;
    Reflection::ValueTable::const_iterator it = table->find(name);
    if (it == table->end())
        return defaultValue;
    if (it->second.isType<int>())
        return it->second.get<int>();
    if (it->second.isNumber())
        return static_cast<int>(it->second.get<double>());
    return defaultValue;
}

static std::string readJSONString(const shared_ptr<const Reflection::ValueTable>& table, const char* name)
{
    if (!table)
        return std::string();
    Reflection::ValueTable::const_iterator it = table->find(name);
    if (it == table->end() || !it->second.isString())
        return std::string();
    return it->second.get<std::string>();
}

static RBX::ProtectedString fetchAndValidateScript(const std::string& urlScript)
{
    RBX::Security::Impersonator impersonate(RBX::Security::COM);

    std::string scriptData;
    if (RBX::ContentProvider::isUrl(urlScript))
    {
        try
        {
            RBX::Http(urlScript).get(scriptData);
        }
        catch (const RBX::base_exception& e)
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: join script fetch failed for %s: %s", urlScript.c_str(), e.what());
            return RBX::ProtectedString();
        }
    }
    else
        return RBX::ProtectedString();

    RBX::ProtectedString verifiedSource;

    try
    {
        verifiedSource = RBX::ProtectedString::fromTrustedSource(scriptData);
        RBX::ContentProvider::verifyScriptSignature(verifiedSource, true);
    }
    catch (std::bad_alloc& e)
    {
        throw;
    }
    catch (RBX::base_exception& e)
    {
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_WARNING, "PlaceLauncher: join script signature verify failed: %s", e.what());
        return RBX::ProtectedString();
    }

    return verifiedSource;
}

static void configurePlayerOnMainThread(boost::shared_ptr<RBX::Game> game, const std::string& config)
{
    boost::shared_ptr<RBX::DataModel> dataModel = game->getDataModel();
    if (dataModel->isClosed())
        return;

    RobloxView* view = PlaceLauncher::getPlaceLauncher().getRbxView();
    if (view)
        view->pauseRendering();

    game->configurePlayer(RBX::Security::COM, config);

    if (view)
        view->resumeRendering();
}

static void executeJoinScriptOnMainThread(boost::shared_ptr<RBX::DataModel> dataModel, const RBX::ProtectedString& script)
{
    if (dataModel->isClosed())
        return;

    RBX::ScriptContext* context = dataModel->create<RBX::ScriptContext>();
    context->executeInNewThread(RBX::Security::COM, script, "Start Script");
}

static void executeUrlJoinScript(boost::shared_ptr<RBX::Game> game, const std::string& urlScript)
{
    RBXASSERT(urlScript.find("join.ashx") != std::string::npos);

    boost::shared_ptr<RBX::DataModel> dataModel = game->getDataModel();

    RBX::ProtectedString verifiedSource = fetchAndValidateScript(urlScript);
    if (verifiedSource.empty())
    {
        PlaceLauncher::handleStartGameFailure(4);
        return;
    }

    if (dataModel->isClosed())
    {
        return;
    }

    std::string dataString = verifiedSource.getSource();

    int firstNewLineIndex = static_cast<int>(dataString.find("\r\n"));
    if (firstNewLineIndex != -1 && firstNewLineIndex + 2 < static_cast<int>(dataString.size()) && dataString[firstNewLineIndex + 2] == '{')
    {
        dataModel->submitTask(
            boost::bind(&configurePlayerOnMainThread, game, dataString.substr(firstNewLineIndex + 2)),
            RBX::DataModelJob::Write);
        return;
    }

    dataModel->submitTask(
        boost::bind(&executeJoinScriptOnMainThread, dataModel, verifiedSource),
        RBX::DataModelJob::Write);
}

static void joinGamePlaceId(StartGameParams sgp, shared_ptr<RBX::Game> game)
{
    int status = -1;
    try
    {
        int retrys = 5;
        const char* base = GetBaseURL().c_str();
        std::string requestParamsString, requestType;
        std::string formattedParams;
        switch (sgp.joinRequestType)
        {
            case JOIN_GAME_REQUEST_PLACEID:
                requestParamsString = "placeId=%d";
                formattedParams = RBX::format(requestParamsString.c_str(), sgp.placeId);
                requestType = "RequestGame";
                break;
            case JOIN_GAME_REQUEST_USERID:
                requestParamsString = "userId=%d";
                formattedParams = RBX::format(requestParamsString.c_str(), sgp.userId);
                requestType = "RequestFollowUser";
                break;
            case JOIN_GAME_REQUEST_PRIVATE_SERVER:
                requestParamsString = "placeId=%d&accessCode=%s";
                formattedParams = RBX::format(requestParamsString.c_str(), sgp.placeId, sgp.accessCode.c_str());
                requestType = "RequestPrivateGame";
                break;
            case JOIN_GAME_REQUEST_GAME_INSTANCE:
                requestParamsString = "placeId=%d&gameId=%s";
                formattedParams = RBX::format(requestParamsString.c_str(), sgp.placeId, sgp.gameId.c_str());
                requestType = "RequestGameJob";
                break;
        }

        std::string response;
        bool found = false;
        std::string jobId;
        std::string joinScriptUrl;

        std::string url = RBX::format(kStartGameURL.c_str(), base, requestType.c_str(), formattedParams.c_str());

        const time_t joinPollStart = ::time(NULL);
        const int kMaxJoinPollSeconds = 120;
        int lastLoggedSecond = -1;

        while (retrys >= 0)
        {
            bool retryUsed = true;
            response = "";
            const time_t pollStart = ::time(NULL);
            RBX::Http(url).get(response);
            const int pollTime = static_cast<int>(::time(NULL) - pollStart);

            shared_ptr<const Reflection::ValueTable> result = parseJSONResponse(response);
            status = readJSONInt(result, "status", -1);
            if (status < 0)
                break;

            const int totalElapsed = static_cast<int>(::time(NULL) - joinPollStart);
            if (totalElapsed != lastLoggedSecond)
            {
                lastLoggedSecond = totalElapsed;
            }

            if (2 == status)
            {
                joinScriptUrl = readJSONString(result, "joinScriptUrl");
                found = true;
                break;
            }
            else if (0 == status || 1 == status)
            {
                retryUsed = false;
                jobId = readJSONString(result, "jobId");
                if (jobId.empty())
                {
                    break;
                }

                url = RBX::format(kStartGameStatusURL.c_str(), base, Http::urlEncode(jobId).c_str());
            }
            else
                break;

            int sleepTime = 250;

            if (retryUsed)
            {
                --retrys;
                sleepTime = 999;
            }

            ::Sleep(sleepTime);

            if (!retryUsed && ::time(NULL) - joinPollStart >= kMaxJoinPollSeconds)
            {
                status = -2;
                break;
            }
        }

        if (found)
        {
            if (joinScriptUrl.empty())
            {
                PlaceLauncher::handleStartGameFailure(status);
                return;
            }
            executeUrlJoinScript(game, joinScriptUrl);
        }
        else
        {
            if (sgp.joinRequestType == JOIN_GAME_REQUEST_PLACEID)
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Cannot connect to place %d, return from PlaceLauncher.ashx = %s", sgp.placeId, response.c_str());
            else if (sgp.joinRequestType == JOIN_GAME_REQUEST_USERID)
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Cannot follow user %d, return from PlaceLauncher.ashx = %s", sgp.userId, response.c_str());
            else if (sgp.joinRequestType == JOIN_GAME_REQUEST_PRIVATE_SERVER)
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Cannot join private server, accessCode = %s, return from PlaceLauncher.ashx = %s", sgp.accessCode.c_str(), response.c_str());
            else if (sgp.joinRequestType == JOIN_GAME_REQUEST_GAME_INSTANCE)
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Cannot join game instance, gameId = %s, return from PlaceLauncher.ashx = %s", sgp.gameId.c_str(), response.c_str());

            PlaceLauncher::handleStartGameFailure(status);
        }
    }
    catch (const RBX::base_exception& e)
    {
        if (sgp.joinRequestType == JOIN_GAME_REQUEST_PLACEID)
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Exception thrown: Can't join place %d, because %s\n", sgp.placeId, e.what());
        else if (sgp.joinRequestType == JOIN_GAME_REQUEST_USERID)
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Exception thrown: Can't follow user %d, because %s\n", sgp.userId, e.what());
        else if (sgp.joinRequestType == JOIN_GAME_REQUEST_PRIVATE_SERVER)
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Exception thrown: Cannot join private server, accessCode = %s, because %s", sgp.accessCode.c_str(), e.what());
        else if (sgp.joinRequestType == JOIN_GAME_REQUEST_GAME_INSTANCE)
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Exception thrown: Cannot join game instance, gameId = %s, because %s", sgp.gameId.c_str(), e.what());

        PlaceLauncher::handleStartGameFailure(status);
    }
}

void PlaceLauncher::handleStartGameFailure(int status)
{
    std::string errorMessage;
    switch (status)
    {
        case 3:  errorMessage = "This game is not available."; break;
        case 4:  errorMessage = "There was an error starting the game."; break;
        case 5:  errorMessage = "This game has ended."; break;
        case 6:  errorMessage = "This game is full."; break;
        case 10: errorMessage = "You left this game."; break;
        case 11: errorMessage = "You cannot play this game."; break;
        case -2: errorMessage = "Timed out waiting for the game to start."; break;
        default: errorMessage = "Failed to start the game."; break;
    }

    if (RobloxView* view = PlaceLauncher::getPlaceLauncher().getRbxView())
    {
        if (boost::shared_ptr<RBX::DataModel> dm = view->getDataModel())
        {
            if (RBX::GuiService* gs = RBX::ServiceProvider::create<RBX::GuiService>(dm.get()))
            {
                if (gs->getErrorMessage().empty())
                    gs->setErrorMessage(errorMessage);
            }
        }
    }

    UWPPlatform::GetInstance().fireGameFailed();
}

void PlaceLauncher::prepareGame(const StartGameParams& sgp)
{
    RBX::ContentProvider::setAssetFolder(sgp.assetFolderPath.c_str());

    RBX::Game::globalInit(false);
    RBX::TeleportService::SetBaseUrl(GetBaseURL().c_str());
    RBX::DataModel::hash = "ios,ios";

    {
        RBX::Security::Impersonator impersonate(RBX::Security::RobloxGameScript_);
        RBX::GlobalBasicSettings::singleton()->loadState("");
    }

    RBX::Profiler::onThreadCreate("Main");

    if (isUWPWindowsPhone())
    {
        RBX::TaskScheduler::singleton().setThreadCount(RBX::TaskScheduler::Threads3);
    }
    else
    {
        RBX::TaskScheduler::singleton().setThreadCount(RBX::TaskScheduler::Auto);
    }

    RBX::Http::useDefaultTimeouts = false;
}

static void initClientSettings()
{
    std::string clientSettingsData;
    std::string uwpAppSettingsData;
    FetchClientSettingsData(CLIENT_APP_SETTINGS_STRING, CLIENT_SETTINGS_API_KEY, &clientSettingsData);
    FetchClientSettingsData(kUWPClientAppSettings.c_str(), kUWPClientSettingsAPIKey.c_str(), &uwpAppSettingsData);
    LoadClientSettingsFromString(CLIENT_APP_SETTINGS_STRING, clientSettingsData, &RBX::ClientAppSettings::singleton());
    LoadClientSettingsFromString(kUWPClientAppSettings.c_str(), uwpAppSettingsData, &RBX::ClientAppSettings::singleton());

    FLog::ResetSynchronizedVariablesState();
}

static void initControlView(RobloxView* rbxView, bool isTouchDevice)
{
    if (DataModel* dm = rbxView->getDataModel().get())
    {
        if (RBX::UserInputService* inputService = RBX::ServiceProvider::create<RBX::UserInputService>(dm))
        {
            inputService->setTouchEnabled(isTouchDevice);
            inputService->setKeyboardEnabled(!isTouchDevice);
            inputService->setMouseEnabled(!isTouchDevice);
        }
    }
}

shared_ptr<RBX::Game> PlaceLauncher::setupGame(const StartGameParams& sgp)
{
    if (isCurrentlyPlayingGame)
        return shared_ptr<RBX::Game>();

    isCurrentlyPlayingGame = true;

    initClientSettings();
    RBX::Http::SetUseStatistics(true);

    prepareGame(sgp);

    currentGame = shared_ptr<RBX::Game>(new RBX::SecurePlayerGame(NULL, GetBaseURL().c_str()));

    unsigned long long memLimit = 0;
    unsigned long long memBefore = 0;
    try
    {
        memBefore = Windows::System::MemoryManager::AppMemoryUsage;
        memLimit = Windows::System::MemoryManager::AppMemoryUsageLimit;
    }
    catch (Platform::Exception^) { }

    rbxView = RobloxView::create_view(currentGame, sgp.view, sgp.viewWidth, sgp.viewHeight);

    if (memLimit > 0)
    {
        unsigned long long memAfter = 0;
        try
        {
            memAfter = Windows::System::MemoryManager::AppMemoryUsage;
        }
        catch (Platform::Exception^) { }

    }

    if (isUWPWindowsPhone())
    {
        CRenderSettingsItem::singleton().setQualityLevel(RBX::CRenderSettings::QualityAuto);
        CRenderSettingsItem::singleton().setAutoQualityLevel(RBX::CRenderSettings::QualityLevel6);
        if (RBX::FrameRateManager* frm = rbxView->getView()->getFrameRateManager())
        {
            frm->setAggressivePerformance(true);
            frm->SetBlockCullingEnabled(true);
        }
    }

    if (UWPPlatform::GetInstance().IsLowMemoryDevice())
    {
        CRenderSettingsItem::singleton().setQualityLevel(RBX::CRenderSettings::QualityLevel1);
        CRenderSettingsItem::singleton().setMeshCacheSize(8 * 1024 * 1024);

        if (rbxView && rbxView->getDataModel())
        {
            rbxView->getDataModel()->submitTask(
                [](RBX::DataModel* dm)
                {
                    if (RBX::ContentProvider* cp = RBX::ServiceProvider::create<RBX::ContentProvider>(dm))
                        cp->setCacheSize(256);
                },
                RBX::DataModelJob::Write);
        }

    }

    rbxView->getDataModel()->submitTask(boost::bind(initControlView, rbxView, gameParams.isTouchDevice), RBX::DataModelJob::Write);

    if (!m_userInput)
    {
        try
        {
            m_userInput.reset(new UserInput(currentGame->getDataModel().get(),
                [](const std::string& msg) {  }));
            m_userInput->setViewportSize(sgp.viewWidth, sgp.viewHeight);

            RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
            if (marshaller)
                marshaller->Submit(boost::bind(&UserInput::initialize, m_userInput.get()));

            RBX::DataModel* dataModel = currentGame->getDataModel().get();
            if (dataModel)
            {
                dataModel->submitTask(boost::bind(&PlaceLauncher::registerHardwareDevice, this, dataModel), RBX::DataModelJob::Write);
            }
        }
        catch (const std::exception& e)
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: failed to initialize user input: %s", e.what());
        }
        catch (...)
        {
        }
    }

    if (!m_gamepadController)
    {
        try
        {
            m_gamepadController.reset(new GamepadController(currentGame->getDataModel().get()));

            RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
            if (marshaller)
                marshaller->Submit(boost::bind(&GamepadController::initialize, m_gamepadController.get()));
        }
        catch (const std::exception& e)
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: failed to initialize gamepad controller: %s", e.what());
        }
        catch (...)
        {
        }
    }

    return currentGame;
}

bool PlaceLauncher::startGame(boost::function0<void> scriptFunction)
{
    boost::thread scriptThread(scriptFunction);
    scriptThread.detach();
    return true;
}

bool PlaceLauncher::startGame(const StartGameParams& sgp)
{
    gameParams = sgp;
    shared_ptr<RBX::Game> game = setupGame(sgp);
    if (game != shared_ptr<RBX::Game>())
    {
        currentGame = game;
        return startGame(boost::bind(&joinGamePlaceId, sgp, game));
    }

    return true;
}

void PlaceLauncher::leaveGame(bool userRequestedLeave)
{
    deleteRobloxView(true);
}

void PlaceLauncher::registerHardwareDevice(RBX::DataModel* dataModel)
{
    if (!m_userInput)
        return;

    RBX::ControllerService* service = RBX::ServiceProvider::create<RBX::ControllerService>(dataModel);
    if (service)
    {
        service->setHardwareDevice(m_userInput.get());
    }
    else
    {
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: failed to create ControllerService");
    }
}

void PlaceLauncher::deleteRobloxView(bool resetCurrentGame)
{
    if (m_userInput)
    {
        try
        {
            RBX::DataModel* dataModel = currentGame ? currentGame->getDataModel().get() : NULL;
            if (dataModel)
            {
                dataModel->submitTask([](RBX::DataModel* dm)
                {
                    if (RBX::ControllerService* service = RBX::ServiceProvider::find<RBX::ControllerService>(dm))
                        service->setHardwareDevice(NULL);
                }, RBX::DataModelJob::Write);
            }

            RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
            if (marshaller)
            {
                RBX::CEvent waitEvent(true);
                marshaller->Execute(boost::bind(&UserInput::shutdown, m_userInput.get()), &waitEvent);
                waitEvent.Wait();
            }
        }
        catch (...)
        {
        }
        m_userInput.reset();
    }

    if (m_gamepadController)
    {
        try
        {
            RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
            if (marshaller)
            {
                RBX::CEvent waitEvent(true);
                marshaller->Execute(boost::bind(&GamepadController::shutdown, m_gamepadController.get()), &waitEvent);
                waitEvent.Wait();
            }
        }
        catch (...)
        {
        }
        m_gamepadController.reset();
    }

    if (resetCurrentGame)
    {
        currentGame.reset();
    }

    if (teleporter)
    {
        teleporter.reset();
    }

    if (rbxView)
    {
        RobloxView* view = rbxView;
        rbxView = NULL;
        delete view;
    }

    isCurrentlyPlayingGame = false;
}

static void joinGameTeleport(std::string url, std::string ticket, std::string script, shared_ptr<RBX::Game> game)
{
    try
    {
        std::string compound = url;

        if (!ticket.empty())
        {
            compound += "?suggest=";
            compound += ticket;
        }

        std::string result;

        try
        {
            RBX::Http http(compound.c_str());
            http.setAuthDomain(GetBaseURL().c_str());
            http.get(result);
        }
        catch (const RBX::base_exception& e)
        {
        }

        executeUrlJoinScript(game, script);
    }
    catch (const RBX::base_exception& e)
    {
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "PlaceLauncher: Teleport failed: %s\n", e.what());
    }
}

void PlaceLauncher::teleport(std::string ticket, std::string authUrl, std::string script)
{
    if (!rbxView) return;

    currentGame.reset();
    currentGame.reset(new RBX::SecurePlayerGame(NULL, GetBaseURL().c_str()));

    rbxView->replaceGame(currentGame);

    rbxView->getDataModel()->submitTask(boost::bind(initControlView, rbxView, gameParams.isTouchDevice), RBX::DataModelJob::Write);

    boost::thread joinScriptThread(boost::bind(&joinGameTeleport, authUrl, ticket, script, currentGame));
}
