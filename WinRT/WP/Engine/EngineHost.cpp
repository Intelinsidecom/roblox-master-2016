#include "pch.h"
#include "EngineHost.h"
#include "GameView.h"
#include "PhonePlatform.h"
#include "WPFunctionMarshaller.h"

#include "v8datamodel/ContentProvider.h"
#include "v8datamodel/Game.h"
#include "util/RunStateOwner.h"
#include "v8datamodel/TeleportService.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/GuiBuilder.h"
#include "v8datamodel/PlatformService.h"
#include "security/SecurityContext.h"
#include "rbx/TaskScheduler.h"
#include "util/standardout.h"
#include "util/Http.h"
#include "v8datamodel/GameBasicSettings.h"
#include "RenderSettingsItem.h"
#include "GfxBase/FrameRateManager.h"
#include "GfxBase/ViewBase.h"
#include "FastLog.h"
#include <inspectable.h>

FASTFLAG(Durango3DBackground)

namespace
{
    boost::shared_ptr<RBX::Game> s_game;
    GameView* s_view = NULL;
    bool s_started = false;

    const char* kBackgroundPlace = "rbxasset://ScaledWorldv4.7.rbxl";
    const char* kBaseUrl = "https://www.freblx.com/";

    class WPPlatform : public RBX::IPlatformAPI
    {
    public:
        virtual RBX::AccountAuthResult performAuthorization(RBX::InputObject::UserInputType, bool) override { return RBX::AccountAuth_Error; }
        virtual int performAccountLink(const std::string&, const std::string&, std::string*) override { return -1; }
        virtual int performUnlinkAccount(std::string*) override { return -1; }
        virtual int performSetRobloxCredentials(const std::string&, const std::string&, std::string*) override { return -1; }
        virtual RBX::AccountAuthResult performHasRobloxCredentials() override { return RBX::AccountAuth_Error; }
        virtual RBX::AccountAuthResult performHasLinkedAccount() override { return RBX::AccountAuth_Error; }
        virtual RBX::GameStartResult startGame3(RBX::GameJoinType, int) override { return RBX::GameStart_Weird; }
        virtual void requestGameShutdown(bool) override {}
        virtual int netConnectionCheck() override { return -1; }
        virtual int fetchFriends(RBX::InputObject::UserInputType, std::string*) override { return -1; }
        virtual int popupHelpUI() override { return -1; }
        virtual int launchPlatformUri(const std::string) override { return -1; }
        virtual int popupPartyUI(RBX::InputObject::UserInputType) override { return -1; }
        virtual int popupProfileUI(RBX::InputObject::UserInputType, std::string) override { return -1; }
        virtual int popupAccountPickerUI(RBX::InputObject::UserInputType) override { return -1; }
        virtual void popupGameInviteUI() override {}
        virtual void showKeyBoard(std::string&, std::string&, std::string&, unsigned, RBX::DataModel*) override {}
        virtual void setScreenResolution(double, double) override {}
        virtual int fetchCatalogInfo(boost::shared_ptr<RBX::Reflection::ValueArray>) override { return -1; }
        virtual int fetchInventoryInfo(boost::shared_ptr<RBX::Reflection::ValueArray>) override { return -1; }
        virtual int getPlatformPartyMembers(boost::shared_ptr<RBX::Reflection::ValueArray>) override { return -1; }
        virtual int getInGamePlayers(boost::shared_ptr<RBX::Reflection::ValueArray>) override { return -1; }
        virtual RBX::PlatformPurchaseResult requestPurchase(const std::string&) override { return RBX::PurchaseResult_Error; }
        virtual int getPMPCreatorId() override { return -1; }
        virtual int getTitleId() override { return 0; }
        virtual boost::shared_ptr<const RBX::Reflection::ValueTable> getVersionIdInfo() override { return boost::shared_ptr<const RBX::Reflection::ValueTable>(); }
        virtual boost::shared_ptr<const RBX::Reflection::ValueTable> getPlatformUserInfo() override { return boost::shared_ptr<const RBX::Reflection::ValueTable>(); }
        virtual RBX::AwardResult awardAchievement(const std::string&) override { return RBX::Award_Fail; }
        virtual RBX::AwardResult setHeroStat(const std::string&, double*) override { return RBX::Award_Fail; }
        virtual void voiceChatSetMuteState(int, bool) override {}
        virtual unsigned voiceChatGetState(int) override { return 0; }
    };

    static WPPlatform s_wpPlatform;
}

bool EngineHost::Start(const Params& p)
{
    if (s_started)
        return s_view != NULL;

    if (!FFlag::Durango3DBackground)
        return true;

    if (!p.panel || p.viewWidth <= 0 || p.viewHeight <= 0)
    {
        if (p.panel)
            reinterpret_cast<IInspectable*>(p.panel)->Release();
        return false;
    }

    RBX::FunctionMarshaller::GetWindow();

    if (!p.assetFolderPath.empty())
        RBX::ContentProvider::setAssetFolder(p.assetFolderPath.c_str());
    else
        RBX::ContentProvider::setAssetFolder("content");

    RBX::Game::globalInit(false);
    RBX::TeleportService::SetBaseUrl(kBaseUrl);
    RBX::DataModel::hash = "wp81,wp81";
    {
        RBX::Security::Impersonator impersonate(RBX::Security::RobloxGameScript_);
        RBX::GlobalBasicSettings::singleton()->loadState("");
    }
    RBX::TaskScheduler::singleton().setThreadCount(RBX::TaskScheduler::Threads3);
    RBX::Http::useDefaultTimeouts = false;

    s_game.reset(new RBX::UnsecuredStudioGame(NULL, kBaseUrl, false, false));

    {
        RBX::DataModel::LegacyLock lock(s_game->getDataModel().get(), RBX::DataModelJob::Write);
        RBX::PlatformService* ps = RBX::ServiceProvider::create<RBX::PlatformService>(s_game->getDataModel().get());
        if (ps)
        {
            ps->setPlatform(&s_wpPlatform, RBX::PlatformDatamodelType::AppShellDatamodel);
        }
    }

    s_view = GameView::create_view(s_game, p.panel, p.viewWidth, p.viewHeight);
    if (!s_view || !s_view->getView())
    {
        RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR,
            "view creation failed");
        s_view = NULL;
        s_game.reset();
        return false;
    }

    CRenderSettingsItem::singleton().setQualityLevel(RBX::CRenderSettings::QualityLevel6);
    if (RBX::ViewBase* gv = s_view->getView())
        if (RBX::FrameRateManager* frm = gv->getFrameRateManager())
            frm->setAggressivePerformance(true);

    s_game->getDataModel()->submitTask(
        [](RBX::DataModel* dm)
        {
            RBX::Security::Impersonator impersonate(RBX::Security::RobloxGameScript_);
            dm->startCoreScripts(true, "XStarterScript");
            if (FFlag::Durango3DBackground)
                dm->loadContent(RBX::ContentId(kBackgroundPlace));
            dm->create<RBX::RunService>()->run();
            dm->gameLoaded();
        },
        RBX::DataModelJob::Write);

    RBX::GuiBuilder::setDebugDisplay(RBX::GuiBuilder::DISPLAY_RENDER);

    s_started = true;
    return true;
}

void EngineHost::Stop()
{
    if (s_view)
    {
        GameView* v = s_view;
        s_view = NULL;
        delete v;
    }
    s_game.reset();
    s_started = false;
}

GameView* EngineHost::GetView()
{
    return s_view;
}

boost::weak_ptr<RBX::Game> EngineHost::GetGame()
{
    return s_game;
}
