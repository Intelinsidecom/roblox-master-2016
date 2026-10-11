#include "stdafx.h"
#include "XboxService.h"

#include <locale>
#include <ppltasks.h>
#include <collection.h>
#include <atomic>
#include <thread>

#include "async.h"

#include "xdpevents.h"
#include "XboxUtils.h"

#include "Marshaller.h"
#include "RenderJob.h"
#include "ControllerBuffer.h"
#include "UserTranslator.h"
#include "KeyboardProvider.h"

#include "rbx/Profiler.h"

#include "v8datamodel/Game.h"
#include "v8datamodel/PlatformService.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/InputObject.h"
#include "v8datamodel/ContentProvider.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/TimerService.h"
#include "v8datamodel/GuiService.h"
#include "v8datamodel/GuiBuilder.h"
#include "v8datamodel/GamepadService.h"
#include "v8datamodel/FastLogSettings.h"
#include "v8datamodel/GameSettings.h"
#include "V8DataModel/GameBasicSettings.h"
#include "v8datamodel/ModelInstance.h"

#include "v8xml/WebParser.h"

#include "GfxBase/ViewBase.h"
#include "GfxBase/RenderSettings.h"
#include "GfxBase/FrameRateManager.h"

#include "Network/Players.h"
#include "Network/Player.h"

#include "RenderSettingsItem.h"
#include "script/ScriptContext.h"
#include "util/Statistics.h"

#include "g3d/g3dmath.h"

#include "Util/StandardOut.h"
#include "Util/SoundService.h"
#include "Util/HttpPlatformImpl.h"


FASTINTVARIABLE(CheckValidSessionInterval, 60)	 // validation check 
FASTINTVARIABLE(XboxFriendsPolling, 30)
FASTFLAGVARIABLE(UseNewCarouselInXboxApp, true)
FASTFLAGVARIABLE(XboxPlayMyPlace, true)
FASTFLAGVARIABLE(ConvertMyPlaceNameInXboxApp, true)

using namespace Windows::Gaming::Input;
    // Windows::Xbox::* namespaces do not exist in UWP; these using-directives were inert
    // (they only produced C3083) so they have been removed.

using namespace Windows::Foundation::Collections;
using namespace Windows::Foundation;
using namespace Windows::Networking::Connectivity;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Core;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::UI::Core;
using namespace RBX;

using namespace Microsoft::Xbox::Services;
using namespace Microsoft::Xbox::Services::Presence;
using namespace Microsoft::Xbox::Services::Social;
using namespace Microsoft::Xbox::Services::Privacy;
using namespace Microsoft::Xbox::Services::Achievements;

using G3D::clamp;

#ifdef RBX_XBOX_SITETEST1
    const char* const kBaseUrl = "https://www.sitetest1.robloxlabs.com/";
    const std::string kApiUrl = "https://api.sitetest1.robloxlabs.com/";
#else
    const char* const kBaseUrl = "https://www.freblx.com/";
    const std::string kApiUrl = "https://api.freblx.com/";
#endif

//const char* const kBaseUrl = "https://www.sitetest3.robloxlabs.com/";
//const std::string kApiUrl = "https://api.sitetest3.robloxlabs.com/";

//const char* const kBaseUrl = "https://www.gametest5.robloxlabs.com/";
//const std::string kApiUrl  = "https://api.gametest5.robloxlabs.com/";

//const char* const kBaseUrl = "https://www.gametest2.robloxlabs.com/";
//const std::string kApiUrl = "https://api.gametest2.robloxlabs.com/";

//const char* const kBaseUrl = "https://www.sitetest2.robloxlabs.com/";
//const std::string kApiUrl = "https://api.sitetest2.robloxlabs.com/";

const std::string kInventoryEndpoint = "/xboxlive/get-inventory";
const std::string kConsumeInventoryEnpoint = "/xboxlive/consume-all";
const std::string kUserIdTranslatorEndpoint = "/xbox/translate";

const std::string kAuthEndpoint = "/xboxlive/connect";
const std::string kXboxUserInfoEndpoint = "/xboxlive/get-roblox-userInfo";

const std::string kXboxAccountLinkEndpoint = "/xboxlive/link-existing-user";
const std::string kUnlinkAccountEndpoint = "/xboxlive/disconnect";
const std::string kXboxSetRobloxUsernamePasswordEndpoint = "/xboxlive/set-roblox-username-password";
const std::string kHasLinkedAccountEndpoint = "/xboxlive/has-linked-account";
const std::string kHasSetUsernamePasswordEndpoint = "/xboxlive/has-set-username-password";

const std::string kBrowserTrackerCookieEndpoint = "/device/initialize";

const char* kIntroPlace = "rbxasset://ScaledWorldv4.7.rbxl"; // "rbxasset://ScaledWorldv3.rbxl"; // "rbxasset://particles7.rbxl";


#define TITLE_PARENT_ID L"c79323fd-00f8-462a-a97a-39a0eb61791e"
#define MAX_DETAILS_BATCH_ITEMS 10
FASTFLAG(Durango3DBackground)
FASTFLAG(TweenCallbacksDuringRenderStep)
DYNAMIC_FASTSTRING(HttpInfluxURL);
DYNAMIC_FASTFLAG(TextScaleDontWrapInWords)
DYNAMIC_FASTFLAG(UrlReconstructToAssetGame);
DYNAMIC_FASTFLAG(UrlReconstructToAssetGameSecure);


extern void dprintf( const char* fmt, ... );
extern int isRetail();

static void overrideFastFlags()
{
	FFlag::TweenCallbacksDuringRenderStep = true;
    DFString::HttpInfluxURL = "";
	DFFlag::TextScaleDontWrapInWords = false;
    DFFlag::UrlReconstructToAssetGame = true;
}
void enableVerboseXboxErrors(XboxLiveContext^ xboxLiveContext)
{
    if( isRetail() ) return;

	// Set this to print VERBOSE error statements

	// Set up debug tracing to the Output window in Visual Studio.
	xboxLiveContext->Settings->DiagnosticsTraceLevel = XboxServicesDiagnosticsTraceLevel::Verbose;

	// Set up debug tracing of the Xbox Live Services API traffic to the game UI.
	xboxLiveContext->Settings->EnableServiceCallRoutedEvents = true;
	xboxLiveContext->Settings->ServiceCallRouted += ref new Windows::Foundation::EventHandler<Microsoft::Xbox::Services::XboxServiceCallRoutedEventArgs^>(
		[=]( Platform::Object^, Microsoft::Xbox::Services::XboxServiceCallRoutedEventArgs^ args )
	{
		dprintf("[URL]: %s %s\n", ws2s(args->HttpMethod->Data()), ws2s(args->Url->AbsoluteUri->Data()));
		dprintf("[Response]: %s %s\n", ws2s(args->HttpStatus.ToString()->Data()),ws2s(args->ResponseBody->Data()));
	});

#if USE_XDK_2015_RTA
	// (Optional.) Set up debug tracing of the Xbox Live Service call API failures to the game UI.
	Microsoft::Xbox::Services::Configuration::EnableDebugOutputEvents = true;
	Microsoft::Xbox::Services::Configuration::DebugOutput += ref new Windows::Foundation::EventHandler<Platform::String^>(
		[=]( Platform::Object^, Platform::String^ debugOutput )
	{
		// Display Xbox Live Services API debug trace to the screen for easy debugging.
		dprintf( "[XSAPI Trace]: %s\n", ws2s(debugOutput->Data()));
	});
#endif

}

//////////////////////////////////////////////////////////////////////////

XboxPlatform::XboxPlatform()
{
	activated = true;
    marshaller   = 0;
    game         = 0;
    current      = 0;
    intro        = 0;
    view         = 0;
    gameShutdownGuard = 0;
	xboxLiveContext = nullptr;
	returnToEngagementFlag = 0;
	consumeAllFlag = 0;

	currentController = nullptr;
	currentUser = nullptr;

	trySignInOnActivation = false;

    Windows::UI::Core::CoreWindow^ window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if(!window) RBXASSERT(false);
	
	window->Activated  += ref new TypedEventHandler<Windows::UI::Core::CoreWindow^,WindowActivatedEventArgs^>([=]( Platform::Object^ , WindowActivatedEventArgs^ args )
	{
		onWindowActivatedChanged(args);
	} ); 

    OSContext context;
    context.width  = window->Bounds.Right - window->Bounds.Left;
    context.height = window->Bounds.Bottom - window->Bounds.Top;
    context.hWnd   = (HWND)this;
    dprintf( "SetWindow: %d x %d\n", context.width, context.height );

    marshaller = new Marshaller;

    ::SetBaseURL(kBaseUrl);

    ContentProvider::setAssetFolder("content");

#if defined(RBX_PLATFORM_UWP) && defined(ENABLE_XBOX_BUILD)
    // XStarterScript, CoreScripts/AppHome and Modules/* all live under
    // PlatformContent/durango/scripts/ui.  Without this, CoreScript::fetchSource
    // resolves them against content/scripts/, where none of them exist.
    ScriptContext::setAdminScriptPath(ContentProvider::platformAssetFolder() + "scripts/ui");
#endif

    Game::globalInit(false);
    loadLocalFFlags();
    fetchFFlags(kBaseUrl); // try fetching the flags anyway, might work
    overrideFastFlags();

    if(1)
    {
        Platform::String^ localStoragePathW = Windows::Storage::ApplicationData::Current->LocalFolder->Path;
        std::string localStoragePath = ws2s(localStoragePathW->Begin()) + "\\settings.xml";
        RBX::GlobalAdvancedSettings::singleton()->setSaveTarget( localStoragePath );
        RBX::GlobalAdvancedSettings::singleton()->loadState("");
		
		{
			RBX::Security::Impersonator impersonate(RBX::Security::RobloxGameScript_);
			std::string basicLocalStoragePath = ws2s(localStoragePathW->Begin()) + "\\basicsettings.xml";
			RBX::GlobalBasicSettings::singleton()->setSaveTarget( basicLocalStoragePath );
			RBX::GlobalBasicSettings::singleton()->loadState(basicLocalStoragePath);
		}

        CRenderSettingsItem::singleton().setFrameRateManagerMode(CRenderSettings::FrameRateManagerOff);
        CRenderSettingsItem::singleton().setQualityLevel(CRenderSettings::QualityLevel21);
    }

    startControllerBuffering();	

    //////////////////////////////////////////////////////////////////////////
    intro = new UnsecuredStudioGame(0, kBaseUrl, false, false);

    if(1)
    {
		DataModel::LegacyLock lock( intro->getDataModel().get(), DataModelJob::Write);
        controller  = boost::shared_ptr<XboxGameController>(new XboxGameController(intro->getDataModel(), controllerBuffer));
        
        if (auto uis = RBX::ServiceProvider::create<UserInputService>(intro->getDataModel().get()))
        {
            uis->setGamepadEnabled(true);
        }
        ServiceProvider::create<GamepadService>(intro->getDataModel().get());
        if (auto ps = ServiceProvider::create<PlatformService>(intro->getDataModel().get()))
        {
            ps->setPlatform(this, PlatformDatamodelType::AppShellDatamodel);
            // Seed the transition look that CameraManager:StartTransitionScreenEffect()
            // applies (GlobalSettings.Scene*). A pure black tint is never cleared here
            // because no ScreenManager fade runs until the shell has signed in, so the
            // frame would stay black forever on UWP.
            ps->brightness     = 0.3f;                                          // SceneBrightness
            ps->contrast       = 0.5f;                                          // SceneContrast
            ps->grayscaleLevel = 1.0f;                                          // SceneGrayscaleLevel
            ps->tintColor      = Color3(20.0f / 255.0f, 43.0f / 255.0f, 60.0f / 255.0f); // SceneTintColor
            ps->blurIntensity  = 3.0f;                                          // SceneMotionBlurIntensity
        }

		keyboard.reset(new KeyboardProvider());
        keyboard->registerTextBoxListener(intro->getDataModel().get());
    }


	ViewBase::InitPluginModules();	
	view = ViewBase::CreateView(CRenderSettings::Direct3D11, &context, &CRenderSettingsItem::singleton());
    view->initResources();

    switchView(intro);
    
    intro->getDataModel()->submitTask( 
        [=](...) -> void
        {
            shared_ptr<DataModel> dm = intro->getDataModel();

            Security::Impersonator impersonate(Security::RobloxGameScript_);

            dm->startCoreScripts(true, "XStarterScript");

            if( kIntroPlace && FFlag::Durango3DBackground)
                dm->loadContent( ContentId(kIntroPlace));

            auto player = Instance::fastSharedDynamicCast<Network::Player>(dm->create<Network::Players>()->createLocalPlayer(1));
            player->loadCharacter(true, "");
            dm->create<RunService>()->run();
            dm->gameLoaded();

            dprintf("DATAMODEL INTRO: 0x%p\n", dm.get());
        },
        DataModelJob::Write
    );

    userTranslator.reset(new UserIDTranslator(kApiUrl + kUserIdTranslatorEndpoint));
    xboxEvents_init();

	//////////////////////////////////////////////////////////////////////////
	// Initialize the Xbox Event Handling 
	initializeAuthEventHandlers();
	initializeNetworkConnectionEventHandlers();
}

XboxPlatform::~XboxPlatform() 
{
    xboxEvents_shutdown();
    switchView(0);

	shutdownDataModels();
}

void XboxPlatform::onWindowActivatedChanged(Windows::UI::Core::WindowActivatedEventArgs^ args)
{
	if (args->WindowActivationState == Windows::UI::Core::CoreWindowActivationState::CodeActivated || 
		args->WindowActivationState == Windows::UI::Core::CoreWindowActivationState::PointerActivated)
	{
		onActivated();
	}
	else
	{
		onDeactivated();
	}
}

void XboxPlatform::onProtocolActivated( Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs^ args )
{
	// assumes that the play who recieved the game join notification(xbox) starts the game
	bool temporaryGamepadUser = false;
	dprintf("OnProtocolActivated(): args->Kind = %d\n", args->Kind);
	try
	{
	    auto uri = ref new Uri(args->Uri->RawUri);
	    auto raw = uri->RawUri;
	    auto host = uri->Host;

		Platform::String^ myUserXuid;
		Platform::String^ targetUserXuid;
		
		// use the current active user  as the currentgamepaduser
		if(!currentUser)
		{
			// UWP has no app-wide CoreApplicationContext::CurrentUser - XboxLiveUser ^ is the
			// only identity, so with nobody signed in there is nothing to fall back to.
			// failed join? signal for error message
			return;
		}
		
		XboxLiveContext^ tempUser = ref new XboxLiveContext(currentUser);
		MultiplayerSession^ session = nullptr;
	
		// Retrieve the target session using the activity handle
		Platform::String^ handle = uri->QueryParsed->GetFirstValueByName("handle");
		async(tempUser->MultiplayerService->GetCurrentSessionByHandleAsync(handle)).complete(
			[&session](MultiplayerSession^ t)
		{
				session = t;
		}
		).except( [](Platform::Exception^ e) -> void
		{
			dprintf( "%s exception [0x%x]: %S\n", __FUNCTION__, (int)e->HResult, e->Message->Data() );
		}
		).join();

		if(!session)
		{
			fireGameJoinedEvent(GameStartResult::GameStart_NoPlayer);
			return;
		}

		dprintf("Game::OnProtocolActivated:\n\tCurrentUser_XUID = %ws\n\tHost = %ws \n\tURI = %ws\n", currentUser->XboxUserId->Data(), host->Data(), raw->Data());	
	
		if(isStringEqualCaseInsensitive(host, L"inviteHandleAccept"))		
		{		
			dprintf("inviteHandleAccept\n");		
			myUserXuid = uri->QueryParsed->GetFirstValueByName("invitedXuid");
			targetUserXuid = uri->QueryParsed->GetFirstValueByName("senderXuid");		
		}
		else if(isStringEqualCaseInsensitive(host, L"activityHandleJoin"))		
		{
            dprintf("activityHandleJoin\n");	
            myUserXuid = uri->QueryParsed->GetFirstValueByName("joinerXuid");
            targetUserXuid = uri->QueryParsed->GetFirstValueByName("joineeXuid");
		}

		for(int i = 0; i < session->Members->Size; i++)
		{
			MultiplayerSessionMember^ player = session->Members->GetAt(i);
            if(isStringEqual(player->XboxUserId,targetUserXuid))
			{				
                int rbxId;
                if (XboxMultiplayerManager::parseFromXboxCustomJson(player->MemberCustomConstantsJson, "rbxId", &rbxId))
                {
					int pmpCreator;
					XboxMultiplayerManager::parseFromXboxCustomJson(session->SessionConstants->CustomConstantsJson, "pmpCreator", &pmpCreator);
                    gameInviteHandle.followUserId = rbxId;
                    gameInviteHandle.targetUserXuid = ws2s(targetUserXuid->Data());
					gameInviteHandle.pmpCreator = pmpCreator;
                    break;
                }
			}
		}

		if(temporaryGamepadUser) {
			currentUser = nullptr;
		}

		if(gameInviteHandle.followUserId == -1)
		{
			// error signal here TODO
			return;
	    }
	
	    // if the player is already logged in, we want to 
	    // shutdown any existing games and follow the join/invite
	    // otherwise we wait until the user authenticates
	    if(!currentUser) return;

	    boost::thread(
            [=]() 
		    { 
			    requestGameShutdown(false); 
			    startGame3(	GameJoin_Follow, gameInviteHandle.followUserId ); 
			    gameInviteHandle.targetUserXuid = "";
			    gameInviteHandle.followUserId = -1;
				gameInviteHandle.pmpCreator = 0;
		    } 
	    ).detach();

	}catch(Platform::Exception^ e)
	{
		// error signal here TODO
		dprintf( "%s exception [0x%x]: %S\n", __FUNCTION__, (int)e->HResult, e->Message->Data() );	
		if(temporaryGamepadUser) {
			currentUser = nullptr;
		}
	}
}

void XboxPlatform::onActivated()
{
    dprintf("OnActivated\n");
	activated = true;

	if (trySignInOnActivation)
	{
		tryToSignInActiveUser(currentController);
	}
}

void XboxPlatform::onDeactivated()
{
	activated = false;
}

void XboxPlatform::startEventHandlers()
{
	initValidSessionPoller();
}

void XboxPlatform::stopEventHandlers()
{
	removeValidSessionPoller();
}

void XboxPlatform::shutdownDataModels()
{
	RBX::GlobalBasicSettings::singleton()->saveState();
	RBX::GlobalAdvancedSettings::singleton()->saveState();

	if (game)
	{
		game->shutdown();
		delete game;
		game = 0;
	}

	if(intro)
	{
		intro->shutdown();
		delete intro;
		intro = 0;
	}

	delete exitVerb;
	exitVerb = 0;
}

void XboxPlatform::suspendViewXbox()
{
	if( game )
	{
		if (PlatformService* ps = ServiceProvider::find<PlatformService>(game->getDataModel().get()))
		{
			ps->suspendSignal();
		}
	}

	if(multiplayerManager)
	{
		dprintf("Multiplayer stopEventHandlers\n");
		multiplayerManager->stopMultiplayerListeners();
		if(current == game)
		{
			dprintf("\t leaveGameSession\n");
			multiplayerManager->leaveGameSession();
		}
	}

	RBX::GlobalBasicSettings::singleton()->saveState();
	RBX::GlobalAdvancedSettings::singleton()->saveState();

	///////////////////////////////////////////////////////////////////////////
	view->suspendView();// this needs to be the last thing we do on suspend
}

void XboxPlatform::voiceChatSetMuteState(int userId, bool mute)
{
    if (multiplayerManager)
    {
        if (mute)
            multiplayerManager->muteVoiceChatPlayer(userId);
        else
            multiplayerManager->unmuteVoiceChatPlayer(userId);
    }
}
unsigned XboxPlatform::voiceChatGetState(int userId)
{
    if (multiplayerManager)
    {
        return multiplayerManager->voiceChatGetState(userId);
    }
    return VoiceChatState::voiceChatState_UnknownUser;
}

void XboxPlatform::resumeViewXbox()
{
	view->resumeView();// this needs to be the first thing we do on resume
	///////////////////////////////////////////////////////////////////////////
    
    dprintf("resumeViewXbox\n");
}

void XboxPlatform::onNormalResume()
{
    if(multiplayerManager)
    {
        dprintf("Multiplayer startEventHandlers\n");
        multiplayerManager->startMultiplayerListeners();
        if (current == game)
        {
            dprintf("\t createGameSession\n");
            multiplayerManager->createGameSession();
        }	
    }
}

void XboxPlatform::xbEventPlayerSessionStart()
{
	if( !xboxLiveContext || !currentUser ) return;
 	EventWritePlayerSessionStart(
		xboxLiveContext->User->XboxUserId->Data(), // UserId
		&playerSessionGuid,	//PlayerSessionId
		L"",			//MulitlayercorrelationId
		0 ,				//GameplayModeId
		0 );			//DifficultyLevelId
}
void XboxPlatform::xbEventPlayerSessionEnd()
{
	if( !xboxLiveContext || !currentUser ) return;
	EventWritePlayerSessionEnd(
		xboxLiveContext->User->XboxUserId->Data(), // UserId
		&playerSessionGuid,	//PlayerSessionId
		L"",			//MulitlayercorrelationId
		0 ,				//GameplayModeId
		0 ,				//DifficultyLevelId
		0 );			// ExitStatusId
}
void XboxPlatform::xbEventPlayerSessionPause()
{
	if( !xboxLiveContext || !currentUser ) return;
	EventWritePlayerSessionPause(
		xboxLiveContext->User->XboxUserId->Data(), // UserId
		&playerSessionGuid,	//PlayerSessionId
		L"" );			//MulitlayercorrelationId
}
void XboxPlatform::xbEventPlayerSessionResume()
{
	if( !xboxLiveContext || !currentUser ) return;
	EventWritePlayerSessionResume(
		xboxLiveContext->User->XboxUserId->Data(), // UserId
		&playerSessionGuid,	//PlayerSessionId
		L"",			//MulitlayercorrelationId
		0 ,				//GameplayModeId
		0 );			//DifficultyLevelId
}


// SystemUI::ShowAccountPickerAsync does not exist on UWP. XboxLiveUser::SignInAsync is the
// equivalent and it needs a CoreDispatcher; these call sites run off the UI thread, so the
// dispatcher is taken from MainView (CoreWindow::GetForCurrentThread() would be null here).
static Windows::UI::Core::CoreDispatcher^ getMainThreadDispatcher()
{
	return Windows::ApplicationModel::Core::CoreApplication::MainView->CoreWindow->Dispatcher;
}

// XboxLiveUser is only activatable from a Windows::System::User, so fall back to the first
// system user for the first sign-in, before any account has been picked. That type has no
// GetDefault() - its statics are CreateWatcher/FindAllAsync/FindAllAsyncByType/GetFromId.
static Microsoft::Xbox::Services::System::XboxLiveUser^ createDefaultXboxLiveUser()
{
	try
	{
		auto systemUsers = concurrency::create_task(Windows::System::User::FindAllAsync()).get();
		if(!systemUsers || systemUsers->Size == 0)
		{
			return nullptr;
		}
		return ref new Microsoft::Xbox::Services::System::XboxLiveUser(systemUsers->GetAt(0));
	}
	catch(Platform::Exception^ e)
	{
		dprintf("createDefaultXboxLiveUser: exception [0x%x]: %S\n", (int)e->HResult, e->Message->Data() );
		return nullptr;
	}
}

// XboxLiveUser carries no XboxUserHash - in XSAPI it lives on GetTokenAndSignatureResult,
// which is only produced by GetTokenAndSignatureAsync. That is a round trip, and two of the
// three call sites sit on request paths, so fetch it once per user and memoize it.
static std::string g_xboxUserHash;
static std::wstring g_xboxUserHashXuid;
static RBX::mutex g_xboxUserHashMutex;

static std::string getXboxUserHash(Microsoft::Xbox::Services::System::XboxLiveUser^ user)
{
	if(!user) return std::string();

	{
		RBX::mutex::scoped_lock lock(g_xboxUserHashMutex);
		if(g_xboxUserHashXuid == user->XboxUserId->Data()) return g_xboxUserHash;
	}

	std::string hash;
	try
	{
		auto tokenResult = concurrency::create_task(
			user->GetTokenAndSignatureAsync(L"GET", L"https://xboxlive.com/", L"")).get();
		hash = ws2s(tokenResult->XboxUserHash->Data());
	}
	catch(Platform::Exception^ e)
	{
		dprintf("getXboxUserHash: exception [0x%x]: %S\n", (int)e->HResult, e->Message->Data() );
	}

	RBX::mutex::scoped_lock lock(g_xboxUserHashMutex);
	g_xboxUserHashXuid = user->XboxUserId->Data();
	g_xboxUserHash = hash;
	return hash;
}

// check the following to for a list of xbox privilege IDs
// https://developer.xboxlive.com/en-us/platform/development/documentation/software/Pages/KnownPrivileges_WXASx_T_jun15.aspx
bool XboxPlatform::checkXboxPrivileges(unsigned privilegeID) 
{
	bool retval = false;
	if(currentUser) 
	{	
		try{
			// XSAPI's TitleCallableUI replaced Store::Product::CheckPrivilegeAsync. It is
			// synchronous and takes the same numbers - GamingPrivilege is the renumbered
			// KnownPrivileges set (XPRIVILEGE_MULTIPLAYER_SESSIONS = 254, etc).
			retval = Microsoft::Xbox::Services::System::TitleCallableUI::CheckGamingPrivilegeSilently(
				(Microsoft::Xbox::Services::System::GamingPrivilege)privilegeID);
		}
		catch(Platform::Exception^  e)
		{
			dprintf( "CheckPrivilege: %s exception [0x%x]: %S\n", __FUNCTION__, (int)e->HResult, e->Message->Data() );
		}
	}
	return retval;
}

void XboxPlatform::startControllerBuffering()
{
	controllerBuffer = shared_ptr<ControllerBuffer>(new ControllerBuffer);

	boost::thread( [=]()-> void 
	{
		RBX::Timer<RBX::Time::Fast> deltaTimer;

		while (controllerBuffer)
		{
			deltaTimer.reset();
			controllerBuffer->updateBuffer();

			float updateTime = deltaTimer.reset().msec();

			float sleepTime = controllerBuffer->getPollingMsec() - updateTime;
			if (sleepTime > 0.0f)
			{
				Sleep(sleepTime);
			}
			
		}
	} ).detach(); 
}

void XboxPlatform::endControllerBuffering()
{
	controllerBuffer.reset();
}


// GamepadButtons is a scoped enum on UWP, so widen everything to unsigned int before bit math.
#define ON_BUTTON_DOWN(curr, prev, flag) ((((unsigned int)(curr))^(unsigned int)(prev))&(unsigned int)(curr)&(unsigned int)(flag))
#define ON_BUTTON_UP(curr, prev, flag) ((((unsigned int)(curr))^(unsigned int)(prev))&(unsigned int)(prev)&(unsigned int)(flag))

void XboxPlatform::tick()
{
    RBXPROFILER_SCOPE("xbox",__FUNCTION__);
    marshaller->waitEvents();
    marshaller->processEvents();

    if( isRetail() ) return;

    // cheat codes:
    IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;
    Windows::Gaming::Input::Gamepad^ gamepad;
    if (gamepads->Size)
    {
        GamepadReading gr = gamepads->GetAt(0)->GetCurrentReading();
		static GamepadReading prev_gr = Windows::Gaming::Input::Gamepad::Gamepads->GetAt(0)->GetCurrentReading();
        if (gr.LeftTrigger >= 0.98 && gr.RightTrigger > 0.98)
        {

            // interactive screen resize
            if(gr.RightThumbstickX >= 0.5){
                GameSettings::singleton().overscanPX += 1/1920.0f;
            }
            if(gr.RightThumbstickX <= -0.5){
                GameSettings::singleton().overscanPX -= 1/1920.0f;
            }
            if(gr.RightThumbstickY >= 0.5){
                GameSettings::singleton().overscanPY += 1/1080.0f;
            }
            if(gr.RightThumbstickY <= -0.5){
                GameSettings::singleton().overscanPY -= 1/1080.0f;
            }

			if(int(static_cast<unsigned int>(gr.Buttons) & static_cast<unsigned int>(GamepadButtons::LeftShoulder)))
			{
				switchView(intro);
			}

			if(int(static_cast<unsigned int>(gr.Buttons) & static_cast<unsigned int>(GamepadButtons::RightShoulder)) && game)
			{
				switchView(game);
			}

            if(int(ON_BUTTON_UP(gr.Buttons,prev_gr.Buttons, GamepadButtons::A)))
            {
				
				// crossroads 1818
				// Cube Eat Cube 248409235
				// Heroes 255280267
				/*
                boost::thread( 
                    [=]()-> void 
                    { 
                        static long flag = 0;
                        if( RBX::InterlockedCompareExchange( &flag, 1, 0) == 0 )
                        {
                            startGame3( GameJoin_Normal, 248409235 );

                            RBX::InterlockedExchange( &flag, 0 );
                        }
                    } 
                ).detach(); 
				*/
				
				//bool result = performHasLinkedAccount();
				//dprintf("performHasLinkedAccount Result: %s\n",(result)?"true":"false");
			
            }

            if(int(ON_BUTTON_UP(gr.Buttons,prev_gr.Buttons, GamepadButtons::B)))
            {
				/*
                if(game)
                    requestGameShutdown();
                else
				{
                    ExitProcess(0);
				}
				*/
				
				//bool result = performHasRobloxCredentials();
				//dprintf("performHasRobloxCredentials Results: %s\n", (result)?"true":"false");
            }
			
            if(int(ON_BUTTON_UP(gr.Buttons,prev_gr.Buttons, GamepadButtons::X)))
            {
				//multiplayerManager->requestJoinParty();
				/*
				std::string robloxname = "robloxCred8";
				std::string robloxpass = "hackproof123";
				std::string result;
				performAccountLink(robloxname,robloxpass,&result);
				dprintf("performAccountLink Results: %s\n", result.c_str());
				*/
				//multiplayerManager->recentPlayersList();
				popupGameInviteUI();
            }

            if(int(ON_BUTTON_UP(gr.Buttons, prev_gr.Buttons,GamepadButtons::Y)))
            {
				/*
				std::string robloxname = "robloxCred8";
				std::string robloxpass = "hackproof123";
				std::string result;
				performSetRobloxCredentials(robloxname, robloxpass, &result);
				dprintf("performSetRobloxCredentials Results: %s\n", result.c_str());
				*/

				//multiplayerManager->getInGamePlayers();
				//popupAccountPickerUI(InputObject::UserInputType::TYPE_GAMEPAD1);

			}
			if(int(ON_BUTTON_UP(gr.Buttons, prev_gr.Buttons,GamepadButtons::LeftThumbstick)))
			{
				popupHelpUI();
			}
			if(int(ON_BUTTON_UP(gr.Buttons, prev_gr.Buttons,GamepadButtons::Menu)))
			{
                boost::thread( [this]() { requestGameShutdown(false); } ).detach();
			}
            if(int(ON_BUTTON_UP(gr.Buttons,prev_gr.Buttons, GamepadButtons::DPadUp)))
            {
                current->getDataModel()->getGuiBuilder().toggleGeneralStats();
            }
            if(int(ON_BUTTON_UP(gr.Buttons,prev_gr.Buttons, GamepadButtons::DPadDown)))
            {
                current->getDataModel()->getGuiBuilder().togglePhysicsStats();
            }
            if(int(ON_BUTTON_UP(gr.Buttons,prev_gr.Buttons, GamepadButtons::DPadLeft)))
            {
                current->getDataModel()->getGuiBuilder().toggleNetworkStats();
            }
            if(int(ON_BUTTON_UP(gr.Buttons,prev_gr.Buttons, GamepadButtons::DPadRight)))
            {
                current->getDataModel()->getGuiBuilder().toggleRenderStats();
            }
        }
        prev_gr = gr;
    }
}
#undef ON_BUTTON_UP
#undef ON_BUTTON_DOWN


void XboxPlatform::requestGameShutdown(bool teleport)
{
    dprintf("requestGameShutdown");
    RBX::mutex::scoped_lock lock(gameMutex);
    requestGameShutdown_nolock(teleport);
}

void XboxPlatform::requestGameShutdown_nolock(bool teleport)
{
    if( !game ) return;

    removeVoiceChatPoller();
    switchView( teleport? 0 : intro);

    game->shutdown();
    delete game;      game = 0;
	delete exitVerb;  exitVerb = 0;
	RBX::GlobalBasicSettings::singleton()->saveState();
    RBX::GlobalAdvancedSettings::singleton()->saveState();

    InterlockedExchange( &gameShutdownGuard, 0 ); // release the guard
	
	if(!teleport) // do not clear the gamesession, since we need the pmpCreatorId from it to presist correct xbox join behavior
	{
		boost::thread(  // when you lose internet connection, this thing takes some time to realize that.
			[this]() ->void 
			{
				if(multiplayerManager) 
				{
					multiplayerManager->leaveGameSession();
				}
			}
		).detach();
	}
}

std::pair<unsigned, unsigned> XboxPlatform::getRenderSize() const
{   
    GameSettings& gs = GameSettings::singleton();
    if( current == intro || gs.overscanPX < 0 || gs.overscanPY < 0 )
        return std::make_pair(1920u, 1080u); 

    unsigned w = 0.5f + 1920 * clamp( gs.overscanPX, 0.1f, 1.0f );
    unsigned h = 0.5f + 1080 * clamp( gs.overscanPY, 0.1f, 1.0f );
    return std::make_pair(w, h); 
}


//////////////////////////////////////////////////////////////////////////

// Wrapper function for firing game join event since startGame3 has multiple return statements
void XboxPlatform::fireGameJoinedEvent(GameStartResult result)
{
	intro->getDataModel()->submitTask(
		[result](DataModel* dm) -> void
		{
			ServiceProvider::find<PlatformService>(dm)->gameJoinedSignal((int)result);
		},
			DataModelJob::Write);
}

GameStartResult XboxPlatform::startGame3( RBX::GameJoinType gt, int id )
{
    if( GetCurrentThreadId() == marshaller->getThreadId() )
    {
        RBXASSERT( !"Do not call startGame3() on the marshaller thread, it won't work!" );
		fireGameJoinedEvent(GameStart_Weird);
        return GameStart_Weird;
    }

	// Prevent gameplay based on xbox privileges here
	if(	!checkXboxPrivileges((unsigned)Microsoft::Xbox::Services::System::GamingPrivilege::MultiplayerSessions) ||
		!checkXboxPrivileges((unsigned)Microsoft::Xbox::Services::System::GamingPrivilege::UserCreatedContent))
	{
		fireGameJoinedEvent(GameStart_NoAccess);
		return GameStart_NoAccess;
	}

	const std::string reportCategory = "PlaceLauncherDuration";
	Time startTime = Time::nowFast();
	std::string requestType;
	switch(gt)
	{
		case RBX::GameJoin_PMPCreator:
		case RBX::GameJoin_PartyLeader: // partyleader join is considered the same kind of join
		case RBX::GameJoin_Normal:        requestType = "RequestGame"; break;
		case RBX::GameJoin_Instance:      requestType = "RequestGameJob"; break;
		case RBX::GameJoin_Follow:        requestType = "RequestFollowUser";   break;
		case RBX::GameJoin_Party:         requestType = "RequestPlayWithParty"; break;		   
		default:                          requestType = ""; break;
	}

    if(1)
    {
        RBX::mutex::scoped_lock lock(gameMutex);
		// at this point we are sure we can attempt a game join

        if (game)
	    {
		    fireGameJoinedEvent(GameStart_Already);
		    return GameStart_Already; // game already started
	    }

        game = new SecurePlayerGame(0, kBaseUrl, true);

        // lets show something on the screen as soon as possible
        switchView(game);

        std::string auth, token, scripturl;
    
        GameStartResult result;
        if(     GameStart_OK != (result = prepareGameLaunch(auth, token, scripturl, gt, id))
            ||  GameStart_OK != (result = initGame(auth, token, scripturl)) )
        {
            dprintf("startGame3() failed - cleanup and abort...\n");
			Analytics::EphemeralCounter::reportStats(reportCategory + "_Failed_" + requestType, (Time::nowFast() - startTime).seconds());
            // game was unable to init; maybe send a message to lua?
            switchView(intro);
            game->shutdown();
            delete game;
            game = 0;
            dprintf("startGame3() failed - end.\n");
		    fireGameJoinedEvent(result);
            return result;
        }
    }

	RBX::GlobalBasicSettings::singleton()->saveState();
    RBX::GlobalAdvancedSettings::singleton()->saveState();

	fireGameJoinedEvent(GameStart_OK);

    if (multiplayerManager)
    {
		if(gt == RBX::GameJoin_PMPCreator)
		{
			multiplayerManager->createGameSession(multiplayerManager->getLocalRobloxUserId());
		}
		else
		{
			multiplayerManager->createGameSession();        	
		}
	}
	else
	{
		dprintf("error: how did multiplayermanager get reset during startgame3?\n");
	}
	

	Analytics::EphemeralCounter::reportStats(reportCategory + "_Success_" + requestType, (Time::nowFast() - startTime).seconds());

    dprintf("Game Started.\n");
    return GameStart_OK;
}

int    XboxPlatform::netConnectionCheck()
{
    return 0;
}

void   XboxPlatform::setScreenResolution(double px, double py)
{
    GameSettings::singleton().overscanPX = px;
    GameSettings::singleton().overscanPY = py;
}

int    XboxPlatform::fetchFriends(InputObject::UserInputType gamepadId, std::string* result)
{
    return ::getFriends(result, userTranslator.get(), xboxLiveContext);
    
}


// this assigns the account selected to pair with the controller supplied
int XboxPlatform::popupAccountPickerUI(InputObject::UserInputType gamepadId)
{
	if (gamepadId == InputObject::UserInputType::TYPE_NONE)
	{
		dprintf("No gamepad passed in\n");
		return AccountAuth_MissingGamePad;
	}

	// get the controller that prompted the accountpicker
	uint64 controllerGuid = controller->getGamepadGuid(gamepadId);
	IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;
	Windows::Gaming::Input::Gamepad^ userGamePad = nullptr;
	// UWP Gamepad has no Id, so the guid stored for a mapped pad is its Gamepads index
	for(unsigned int i = 0; i < gamepads->Size; i++)
	{
		if((uint64)i == controllerGuid)
		{
			userGamePad = gamepads->GetAt(i);
			break;
		}
	}
	
	if(userGamePad)
	{	
		RBX::mutex::scoped_lock lock(controllerPairingMutex);

		// accountpicker sets the controller's user to the account selected
		// SystemUI::ShowAccountPickerAsync is gone on UWP - XboxLiveUser::SignInAsync is the
		// equivalent, and the chosen account lands in currentUser.
		Platform::String^ previousXboxUserId = currentUser ? currentUser->XboxUserId : nullptr;
		if(!currentUser)
		{
			currentUser = createDefaultXboxLiveUser();
		}
		if(currentUser)
		{
			concurrency::create_task(currentUser->SignInAsync(getMainThreadDispatcher())).get();
		}

		if(!userGamePad || !currentUser)
		{
			return 0; // user was signed out
		}

		if(previousXboxUserId && !isStringEqual(previousXboxUserId, currentUser->XboxUserId))
		{
			// new user selected, nothing needs to be changed
			returnToEngagementScreen(ReturnToEngage_AccountReselect);					
		}
	}
	return 0;
}

void XboxPlatform::popupGameInviteUI()
{
	if(!game)
	{
		dprintf("Can't call gameInvite when not in game\n");
		return;
	}
	multiplayerManager->sendGameInvite();
	
}

int XboxPlatform::popupHelpUI()
{
	// Windows::Xbox::ApplicationModel::Help::Show() is XDK-only (it snapped the system Help
	// app). XSAPI's TitleCallableUI exposes no help/support entry point and UWP has no
	// equivalent, so report failure to PlatformService::PopupHelpUI's script binding.
	dprintf("popupHelpUI(): no Xbox help UI is available on UWP.\n");
	return -1;
}

int XboxPlatform::launchPlatformUri(const std::string baseUri)
{
	dprintf("Open a URI in App\n");
	if(!currentUser)
	{
		dprintf("Xbox User not initialized\n");
		return -1;
	}

	// NOTE: can make this yielding to catch errors
	Windows::Foundation::Uri^ uri = ref new Windows::Foundation::Uri(ref new Platform::String(s2ws(&baseUri).c_str()));
	async(Windows::System::Launcher::LaunchUriAsync(uri)).detach();


	return 0;
}

int XboxPlatform::popupPartyUI(InputObject::UserInputType gamepadId)
{
    // Windows::Xbox::UI::SystemUI::LaunchPartyAsync() and Windows::Xbox::System::User::Users are
    // XDK-only. UWP has no API that opens the system party app (XSAPI's TitleCallableUI exposes no
    // party entry point), so this is a forced stub: keep the pure-virtual override and report
    // failure to PlatformService::PopupPartyUI's script binding.
    (void)gamepadId;
    dprintf("popupPartyUI(): the Xbox party app cannot be launched from UWP.\n");
    return -1;
}

int XboxPlatform::popupProfileUI(RBX::InputObject::UserInputType gamepadId, std::string xuid)
{
	dprintf("Note: popupProfileUI() needs to use Xbox Controller to propertly identify the user");

	// UWP has no system-wide user list; XboxLiveUser ^ is the only identity
	if (!currentUser || !currentUser->IsSignedIn)
	{
		dprintf("User not signed in, cannot open ProfileCard\n");
		return -1;
	}

	try 
	{
		std::wstring wxuid(xuid.begin(), xuid.end());
		Platform::String^ pxuid = ref new Platform::String(wxuid.c_str());

		// XSAPI's TitleCallableUI replaced SystemUI::ShowProfileCardAsync; it takes only
		// the target xuid and uses the signed-in user implicitly.
		async (Microsoft::Xbox::Services::System::TitleCallableUI::ShowProfileCardUIAsync(pxuid)).detach();
	}
	catch (Platform::Exception^ exc)
	{
		dprintf("Exception: [0x%x] %S\n", exc->HResult, exc->Message->Data());
		return -1;
	}

	return 0;
}

int XboxPlatform::getPMPCreatorId()
{
	if(multiplayerManager)
	{
		return multiplayerManager->getPMPCreatorId();
	}
	return -1;
}
int XboxPlatform::getTitleId()
{
    // XSAPI's TitleId is a UINT32 on the app-config singleton (the XDK exposed a string)
    return (int)Microsoft::Xbox::Services::XboxLiveAppConfiguration::SingletonInstance->TitleId;
}

shared_ptr<const RBX::Reflection::ValueTable> XboxPlatform::getVersionIdInfo()
{
	shared_ptr<RBX::Reflection::ValueTable> versionInfo = rbx::make_shared<Reflection::ValueTable>();

	Windows::ApplicationModel::Package^ currentPackage = Windows::ApplicationModel::Package::Current;
	if (currentPackage)
	{
		Windows::ApplicationModel::PackageVersion currentPackageVersion = currentPackage->Id->Version;
		(*versionInfo)["Major"] = (int)currentPackageVersion.Major;
		(*versionInfo)["Minor"] = (int)currentPackageVersion.Minor;
		(*versionInfo)["Build"] = (int)currentPackageVersion.Build;
		(*versionInfo)["Revision"] = (int)currentPackageVersion.Revision;	
	}

	return versionInfo;
}

void XboxPlatform::showKeyBoard(std::string& title, std::string& description, std::string& defaultText, unsigned keyboardType, DataModel* dm)
{
    keyboard->showKeyBoardLua(title, description, defaultText, (XboxKeyBoardType)keyboardType, dm);
}

shared_ptr<const Reflection::ValueTable> XboxPlatform::getPlatformUserInfo()
{
	shared_ptr<Reflection::ValueTable> userInfoTable = rbx::make_shared<Reflection::ValueTable>();
	if (currentUser)
	{
		Network::Player* localplayer = intro->getDataModel()->find<Network::Players>()->getLocalPlayer();
		(*userInfoTable)["Gamertag"] = ws2s(currentUser->Gamertag->Data());
		(*userInfoTable)["XboxUserId"] = ws2s(currentUser->XboxUserId->Data());
		(*userInfoTable)["RobloxUserName"] = localplayer->getName();
		(*userInfoTable)["RobloxUserId"] = localplayer->getUserID();
	}

	return userInfoTable;
}

void XboxPlatform::doTeleport(const std::string& auth, const std::string& ticket, const std::string& join)
{
    intro->getDataModel()->submitTask( 
        [=](...)->void 
        {
			GameStartResult result = GameStart_Weird;
            if(1)
            {
                RBX::mutex::scoped_lock lock(gameMutex); // NOTE: relies on the fact that RBX::mutex is Win32 CriticalSection which is recursive

                dprintf("Teleport:\n\tauth: %s\n\tticket:%s\n\tjoinScript:%s\n\n", auth.c_str(), ticket.c_str(), join.c_str() );
                requestGameShutdown_nolock(true); // we hold the mutex

                RBXASSERT( !game );
                game = new SecurePlayerGame( 0, kBaseUrl, true );

				switchView(game);

                try
                {
                    std::string url = auth + "?suggest" + ticket;
                    std::string response;

                    dprintf("Teleport re-auth: %s\n", url.c_str() );

                    Http h(url);
                    h.additionalHeaders[Http::kRBXAuthenticationNegotiation] = "freblx.com";
                    h.get(response);

                    dprintf("Teleport re-auth response: %s\n", response.c_str());
                }
                catch( std::exception& e )
                {
                    dprintf("Teleport re-auth failed:\n %s\n", e.what());
                    goto fail;
                }

                result = initGame( auth, ticket, join );
                if( result != GameStart_OK ) 
                    goto fail;
            } // mutex

			
			if (multiplayerManager)
			{	
				unsigned int pmpCreatorId = multiplayerManager->getPMPCreatorId();
				if( pmpCreatorId > 0)
					multiplayerManager->createGameSession(pmpCreatorId); //For PMP       
				else
					multiplayerManager->createGameSession();        
            }else{
				result = GameStart_Weird;
				goto fail;
			}
            return;

        fail:
            switchView(intro); // teleport failed, kick to main menu
            game->shutdown();
            delete game;
            game = 0;
			fireGameJoinedEvent(result);
            return;
        },
        DataModelJob::None
    );
}

bool XboxPlatform::isTeleportEnabled() const
{
    return true;
}



//////////////////////////////////////////////////////////////////////////
static std::string makePlaceLauncherUrl_Normal( int placeid, const std::string& gamerTag )
{
    return format("%s/Game/PlaceLauncher.ashx?request=RequestGame&placeId=%d&gamerTag=%s", kBaseUrl, placeid, gamerTag.c_str());
}

static std::string makePlaceLauncherUrl_Instance( int instanceId, const std::string& gamerTag  )
{
    return format("%s/Game/PlaceLauncher.ashx?request=RequestGameJob&gameId=%d&gamerTag=%s", kBaseUrl, instanceId, gamerTag.c_str());
}

static std::string makePlaceLauncherUrl_Follow( int followPlayer, const std::string& gamerTag  )
{
    return format("%s/Game/PlaceLauncher.ashx?request=RequestFollowUser&userId=%d&gamerTag=%s", kBaseUrl, followPlayer, gamerTag.c_str());
}

static std::string makePlaceLauncherUrl_Party( const std::string& gamerTag )
{
    return format("%s/Game/PlaceLauncher.ashx?request=RequestPlayWithParty&gamerTag=%s", kBaseUrl, gamerTag.c_str());
}

static std::string makePlaceLauncherUrl_PartyLeader( int placeid, const std::string& gamerTag  )
{
    return format("%s/Game/PlaceLauncher.ashx?request=RequestGame&IsPartyLeader=True&placeId=%d&gamerTag=%s", kBaseUrl, placeid, gamerTag.c_str());
}
		
RBX::GameStartResult XboxPlatform::prepareGameLaunch( std::string& authenticationUrl, std::string& authenticationTicket, std::string& scriptUrl, GameJoinType joinType, int id )
{
    // note: assumes gameMutex is locked
    Game* game = this->game;
    if( !game ) 
        return GameStart_Weird;
	std::string validationUrl = kApiUrl + kXboxUserInfoEndpoint;

	HttpFuture validationResult = HttpAsync::get(validationUrl);
    if( !fetchFFlags(kBaseUrl) )
        return GameStart_WebError;

    overrideFastFlags();

    std::string gamerTag;
    if( xboxLiveContext )
    {
        gamerTag = ws2s( xboxLiveContext->User->Gamertag->Data() );
    }
    else
    {
        return GameStart_Weird; // game start requires xbox auth, should not call befire that
    }

    std::string launcherUrl;

    switch (joinType)
    {
	case RBX::GameJoin_PMPCreator:
    case RBX::GameJoin_Normal:        launcherUrl = makePlaceLauncherUrl_Normal(id, Http::urlEncode(gamerTag)); break;
    case RBX::GameJoin_Instance:      launcherUrl = makePlaceLauncherUrl_Instance(id, Http::urlEncode(gamerTag)); break;
    case RBX::GameJoin_Follow:        launcherUrl = makePlaceLauncherUrl_Follow(id, Http::urlEncode(gamerTag));   break;
    case RBX::GameJoin_Party:         launcherUrl = makePlaceLauncherUrl_Party(Http::urlEncode(gamerTag)); break;
    case RBX::GameJoin_PartyLeader:   launcherUrl = makePlaceLauncherUrl_PartyLeader(id, Http::urlEncode(gamerTag));  break;
    default:                          launcherUrl = ""; break;
    }

    if( launcherUrl.empty() ) 
        return GameStart_Weird; // should not happen

	try{
		validationResult.wait();
	}catch(http_status_error &e){
		dprintf("FAIL: validationResult in PrepareGamelaunch: %s\n", e.what());
		return GameStart_NoPlayer;
	}
	catch(std::exception &e){
		dprintf("validationResult in PrepareGamelaunch: %s\n", e.what());
	}

    enum { kNumRetries = 30, kWaitPeriod = 1000 };

    for( int j=0; ; ++j)
    {
        if( j>kNumRetries )
        {
            dprintf("could not join the game [%s]", launcherUrl.c_str());
            return GameStart_WebError;
        }

        auto r = requestPlaceInfo(launcherUrl, authenticationUrl, authenticationTicket, scriptUrl);
        if( r == PlaceLaunch_Joining ) 
            break; // ok
        if( r < PlaceLaunch_Joining || r == PlaceLaunch_Error )
        {
            SleepEx(kWaitPeriod, FALSE);
            dprintf("Retrying connection attempt (%d)...\n", j+1);
            continue;
        }

        // errors
        switch (r)
        {
        case PlaceLaunch_Error: 
            dprintf( "Request '%s' got status = %d, might want to look into it.\n", launcherUrl.c_str(), r ); // might mean 'no such game', or 'bad request', ask our web team
            return GameStart_WebError;
        case PlaceLaunch_SomethingReallyBad:  
            return GameStart_WebError;
        case PlaceLaunch_Disabled:
        case PlaceLaunch_Restricted:
        case PlaceLaunch_Unauthorized:
            return GameStart_NoAccess;
        case PlaceLaunch_UserLeft:
            return GameStart_NoPlayer;
        case PlaceLaunch_GameEnded:
            return GameStart_NoInstance;
        case PlaceLaunch_GameFull:
            return GameStart_Full;
        default:
            return GameStart_Weird;
        }
    }

    return GameStart_OK;
}

RBX::GameStartResult XboxPlatform::initGame( const std::string& authUrl, const std::string& ticket, const std::string joinScriptUrl )
{
    std::string joinScript;
    try
    {  
        dprintf("InitGame2():\n  Auth: %s\n  Ticket: %s\n  joinScript: %s\n", authUrl.c_str(), ticket.c_str(), joinScriptUrl.c_str());
        Http(joinScriptUrl).get(joinScript); 
    } 
    catch( const RBX::http_status_error& e ) 
    { 
        dprintf( "initGame2(): join game: HTTP %d\n", e.statusCode );
        return GameStart_WebError; 
    }
    catch( const std::exception& e )
    {
        dprintf( "initGame2(): join game: %s\n", e.what() );
        return GameStart_WebError; 
    }

    if( joinScript.empty() )
    {
        dprintf( "initGame2(): bad server response (expected joinscript)\n" );
        return GameStart_WebError;
    }

    dprintf( "Join script:\n%s\n", joinScript.c_str());

    shared_ptr<DataModel> dm = game->getDataModel();
    DataModel::hash = "ios,ios";

    if (1)
    {
        DataModel::LegacyLock lock( game->getDataModel().get(), DataModelJob::Write);

        Security::Impersonator impersonate(Security::RobloxGameScript_);

		// make sure the gamepad navigation info is the same in the game datamodel as it is in the appshell
        if (auto uis = RBX::ServiceProvider::create<UserInputService>(intro->getDataModel().get()))
        {
			uis->setGamepadEnabled(true);

			if (auto gameUIS = RBX::ServiceProvider::create<UserInputService>(dm.get()))
			{
				gameUIS->setGamepadEnabled(true);

				for (int i = 0; i < RBX_MAX_GAMEPADS; ++i)
				{
					InputObject::UserInputType gamepadType = GamepadService::getGamepadEnumForInt(i);
					bool isNavigationGamepad = uis->isNavigationGamepad(gamepadType);

					gameUIS->setNavigationGamepad(gamepadType, isNavigationGamepad);
				}
			}
        }

        ServiceProvider::create<GamepadService>(dm.get());
        ServiceProvider::create<PlatformService>(dm.get())->setPlatform(this, PlatformDatamodelType::GameDatamodel);
        TeleportService::SetCallback(this);
        {
            std::string tpbaseurl = kBaseUrl;
            if( tpbaseurl.back() == '/' ) tpbaseurl.pop_back();
            TeleportService::SetBaseUrl(tpbaseurl.c_str());
        }
        keyboard->registerTextBoxListener(dm.get());

        int firstNewLineIndex = joinScript.find("\r\n");
        game->configurePlayer(Security::COM, joinScript.substr(firstNewLineIndex+2), 0);
        dm->gameLoaded();
        dm->create<RunService>()->run();
        dm->startCoreScripts(true);
    }
    dprintf("DATAMODEL GAME: 0x%p\n", dm.get());
	
    struct ExitVerb : Verb
    {
        XboxPlatform* platform;
        ExitVerb( XboxPlatform* plt, DataModel* dm ) : Verb(dm, "Exit"), platform(plt) {}
        virtual void doIt(IDataState*) override { platform->marshaller->submit( [=]() -> void { platform->requestGameShutdown(false); } ); }
    };
    exitVerb = new ExitVerb(this, game->getDataModel().get());

    initVoiceChatPoller();

    return GameStart_OK;
}

void XboxPlatform::switchView( RBX::Game* to )
{
    // 0 = AppShell (intro), 1 = Game. Resolved out here and threaded through both lambdas:
    // MSVC rejects a lambda nested inside the marshaller lambda when it captures a variable
    // declared in that outer lambda (C2440), which is what the old block-local
    // `enum ViewType` + `gameType` did.
    const int gameType = (to == intro) ? 0 : 1;

    marshaller->execute( 
        [this, to, gameType]()
        {
			// reset vibration to 0 whenever we switch datamodels
			if (controller)
			{
				shared_ptr<RBX::Reflection::Tuple> tuple(new RBX::Reflection::Tuple(1));
				tuple->values[0] = 0.0f;

				controller->setVibrationMotor(InputObject::TYPE_GAMEPAD1, RBX::HapticService::MOTOR_LARGE, tuple);
				controller->setVibrationMotor(InputObject::TYPE_GAMEPAD1, RBX::HapticService::MOTOR_SMALL, tuple);
				controller->setVibrationMotor(InputObject::TYPE_GAMEPAD1, RBX::HapticService::MOTOR_LEFTTRIGGER, tuple);
				controller->setVibrationMotor(InputObject::TYPE_GAMEPAD1, RBX::HapticService::MOTOR_RIGHTTRIGGER, tuple);
			}

            // unbind
            if (current)
            {
                TaskScheduler::singleton().removeBlocking(renderJob, boost::bind( &Marshaller::processEvents, marshaller ) );
                DataModel::LegacyLock lock( current->getDataModel().get(), DataModelJob::Write);
				if (RBX::Soundscape::SoundService* soundService = RBX::ServiceProvider::create<RBX::Soundscape::SoundService>(current->getDataModel().get()))
				{
					soundService->setMasterVolumeFadeOut(500.0f);
				}
                view->bindWorkspace(0);
                renderJob.reset();
			}

            current = to;

            if (current)
            {
				DataModel::LegacyLock lock( current->getDataModel().get(), DataModelJob::Write);			
				if (RBX::Soundscape::SoundService* soundService = RBX::ServiceProvider::create<RBX::Soundscape::SoundService>(current->getDataModel().get()))
				{
					soundService->setMasterVolumeFadeIn(1000.0f);
				}
                view->bindWorkspace(current->getDataModel());
                renderJob.reset(new RenderJob(view, marshaller));
                TaskScheduler::singleton().add(renderJob);
                controller->setDataModel( current->getDataModel() );
				
                // this event is purposely fired on intro (appshell) in both cases.
                intro->getDataModel()->submitTask(
                    [gameType](DataModel* dm) -> void
                    {
                        if (PlatformService* ps = ServiceProvider::find<PlatformService>(dm))
                            ps->viewChanged(gameType);
                    },
                DataModelJob::Write );
                
                if (gameType == 0) // AppShell
                {
                    boost::thread( [=]()-> void {
                        RBX::HttpPlatformImpl::Cache::CacheCleanOptions opt;
                        opt.numFilesRequiredBeforeCleaning = 5000;
                        opt.numFilesToKeep = 4000;
                        opt.numGigaBytesAvailableTrigger = 1;
                        opt.flagCleanUpBasedOnMemory = true;
                        RBX::HttpPlatformImpl::Cache::cleanCache(opt);
                    } ).detach(); 
                }
            }
        }
    );

    setRichPresence();
}


// used in DeviceD3D11aux.cpp
std::pair<unsigned int, unsigned int> xboxPlatformGetRenderSize_Hack(void* h)
{
    RBXASSERT(h);
    return reinterpret_cast<XboxPlatform*>(h)->getRenderSize();
}

///////////////////////////////////////////////////////////////////////////////
// Purchase
///////////////////////////////////////////////////////////////////////////////
int	XboxPlatform::fetchInventoryInfo(shared_ptr<Reflection::ValueArray> values)
{
	// Inventory feature removed: XSAPI 2018 exposes no InventoryService at all, so
	// there is nothing to query. PlatformService::fetchInventoryInfo is pure virtual,
	// so the override stays but reports failure.
	dprintf("fetchInventoryInfo: inventory is not supported on UWP\n");
	return -1;
}
int XboxPlatform::fetchCatalogInfo(shared_ptr<Reflection::ValueArray> values)
{
	// Catalog feature removed: XSAPI 2018 exposes no CatalogService, so there is
	// nothing to browse. PlatformService::fetchCatalogInfo is pure virtual, so the
	// override stays but reports failure.
	dprintf("fetchCatalogInfo: catalog is not supported on UWP\n");
	return -1; // failure
}


void XboxPlatform::sendConsumeAllRequest(bool is_purchase)
{
	dprintf("SendingConsumeAllRequest...\n");

	Microsoft::Xbox::Services::System::XboxLiveUser^ user = currentUser;
	Microsoft::Xbox::Services::XboxLiveContext^ xbliveContext =xboxLiveContext;

	concurrency::create_task( [user, xbliveContext, is_purchase, this] () 
	{
		if(InterlockedCompareExchange(&consumeAllFlag, 1, 0))
		{
			return;
		}

		std::string consumeAllUrl = kApiUrl + kConsumeInventoryEnpoint;
		std::string userhash = getXboxUserHash(user); //need to update to controller user when we set it up
		std::wstring wxuid = user->XboxUserId->Data(); //need to update to controller user when we set it up
		PlatformPurchaseResult retval = PurchaseResult_Error;

		bool doConsumeAll;
		const int max_attempts = 7;

		for(int curr_attempt = 0; curr_attempt < max_attempts;curr_attempt++)
		{
			if (!user || !xboxLiveContext)
			{
				break;
			}

			unsigned sleeptime = 1000;
			sleeptime = sleeptime << curr_attempt;
			Sleep(sleeptime);
			
			doConsumeAll = false;

			if(!doConsumeAll) 
				break;

			Http http(consumeAllUrl);
			
			http.additionalHeaders["xbl-authz-actor-10"] = userhash;
			http.additionalHeaders["xuid"] = std::string(wxuid.begin(), wxuid.end());
						
			retval = PurchaseResult_Error;

			std::string response;

			try
			{
				response.clear();
				std::string randomstr;
				std::stringstream inputStream = std::stringstream(randomstr);
				http.post(inputStream, Http::kContentTypeDefaultUnspecified, false, response);

				dprintf("consumeAll Transaction: %s\n", response);

				if(response.compare("OK") == 0)
				{
					retval = PurchaseResult_RobuxUpdated;
					continue;
				}else if(response.compare("Failed") == 0)
				{
					retval = PurchaseResult_ConsumeRequestFail;
					continue;
				}
				else if(response.compare("Retry") == 0)
				{
					// nothing special todo except follow the flow
				}
				else if(!is_purchase)
				{
					dprintf("ConsumeAll called from Login: continue without retries\n");
					retval = PurcahseResult_NoActionNeeded;
					break;				
				}
			}
			catch(const RBX::http_status_error& e)
			{
				dprintf("sendConsumeAllRequest httpStatusError: %d\n", e.statusCode);
			}
			catch( const std::exception& e )
			{
				dprintf("Http error: %s\n", e.what());
			}

			if(curr_attempt == max_attempts)
				dprintf("sendConsumeAllRequest() out of retries\n");
	
		}

		intro->getDataModel()->submitTask(
			[retval](DataModel* dm) -> void
		{
			ServiceProvider::find<PlatformService>(dm)->robuxAmountChangedSignal((int)retval);
		},
			DataModelJob::Write );

		InterlockedExchange(&consumeAllFlag, 0);
	});
}

RBX::PlatformPurchaseResult XboxPlatform::requestPurchase(const std::string& productId)
{
	// Catalog feature removed: XSAPI 2018 has no CatalogService, so there is no signed
	// offer to hand to purchaseItem for this product id.
	dprintf("requestPurchase: catalog is not supported on UWP (productId %s)\n", productId.c_str());
	return RBX::PurchaseResult_Error; // no items found with given product id
}

bool XboxPlatform::setRichPresence()
{
    if (xboxLiveContext)
    {
        Platform::String^ presenceId = (current == intro) ? "Browsing" : "Playing";

        Microsoft::Xbox::Services::Presence::PresenceData^ presenceData = ref new Microsoft::Xbox::Services::Presence::PresenceData(
            Microsoft::Xbox::Services::XboxLiveAppConfiguration::SingletonInstance->ServiceConfigurationId, presenceId);
		XboxLiveContext^ xblContext = xboxLiveContext;
        async(xblContext->PresenceService->SetPresenceAsync(true, presenceData)).complete(
            []() -> void
            {
                dprintf("Rich presence set\n");
            } 
        ).detach();
    }

    return false;
}

///////////////////////////////////////////////////////////////////////////////
// Authorization/Login/Network
///////////////////////////////////////////////////////////////////////////////
void XboxPlatform::returnToEngagementScreen(ReturnToEngageScreenStatus status)
{
	if(InterlockedCompareExchange(&returnToEngagementFlag, 1, 0))
	{
		return;
	}

	controller->resetControllerGuidMap();

	marshaller->waitEvents();
	// job removal can lock up when  we are coming back from suspension
	removeValidSessionPoller();
	requestGameShutdown(false);

	multiplayerManager.reset();
	currentUser = nullptr;
	currentController = nullptr;

	// Send an event to XboxLive to tell them player Session has ended
	if(xboxLiveContext) 
		xbEventPlayerSessionEnd();

	xboxLiveContext = nullptr;

	ReturnToEngageScreenStatus status2 = status;
	intro->getDataModel()->submitTask(
		[status2](DataModel* dm) -> void
	{
		ServiceProvider::find<PlatformService>(dm)->userAccountChangeSignal((int)status2);
	},
		DataModelJob::Write );

	InterlockedExchange(&returnToEngagementFlag, 0);
}

void XboxPlatform::initializeNetworkConnectionEventHandlers()
{
	Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged +=
		ref new Windows::Networking::Connectivity::NetworkStatusChangedEventHandler(
		[this] ( Platform::Object^ )
        {
			auto internetprofile = Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile();
			if( internetprofile )
			{
				switch(internetprofile->GetNetworkConnectivityLevel())
				{
				// NetworkConnectivityLevel::XboxLiveAccess was an XDK-only value - UWP's enum
				// is only None/LocalAccess/ConstrainedInternetAccess/InternetAccess, and
				// InternetAccess is the closest equivalent, so it falls through to that case.
				case Windows::Networking::Connectivity::NetworkConnectivityLevel::InternetAccess:
					// we have internet access and all tokens have been authenticated for xbox live
					return; 
					// the remaining cases mean we can't connect to the internet 
				case Windows::Networking::Connectivity::NetworkConnectivityLevel::LocalAccess:
					{
						intro->getDataModel()->submitTask(
							[](DataModel* dm) -> void
							{
								ServiceProvider::find<PlatformService>(dm)->networkStatusChangedSignal("LocalAccessOnly");
							},
							DataModelJob::Write );
						return;
					}
				case Windows::Networking::Connectivity::NetworkConnectivityLevel::ConstrainedInternetAccess:
					{
						intro->getDataModel()->submitTask(
							[](DataModel* dm) -> void
							{
								ServiceProvider::find<PlatformService>(dm)->networkStatusChangedSignal("ConstrainedInternet");
							},
							DataModelJob::Write );
						return;
					}
				case Windows::Networking::Connectivity::NetworkConnectivityLevel::None:
					{
						intro->getDataModel()->submitTask(
							[](DataModel* dm) -> void
							{
								ServiceProvider::find<PlatformService>(dm)->networkStatusChangedSignal("NoInternetConnection");
							},
							DataModelJob::Write );
						return;
					}
				default:
					break;
				}


			}
			// if there is any connection error, we prompt the user to check their connection
	    }
    );
}

void XboxPlatform::storeLocalGamerPicture(XboxLiveContext^ xboxLiveContext)
{
	// XDK's XboxLiveUser::DisplayInfo->GetGamerPictureAsync() / GetPictureResult /
	// Windows.Xbox.System::UserPictureSize have no UWP successor: XSAPI's XboxLiveUser
	// exposes no DisplayInfo and the winmd carries no gamer-picture API at all. Without it
	// gamerpic.png is never refreshed and the UI keeps its default avatar.
	(void)xboxLiveContext;
}

Microsoft::Xbox::Services::System::XboxLiveUser^ XboxPlatform::getActiveUser()
{
	Microsoft::Xbox::Services::System::XboxLiveUser^ newActiveUser = nullptr;
	bool waitingForAButton = true;
	bool didGetGamepad = true;

	while (waitingForAButton)
	{
		IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;
		if (gamepads->Size)
		{
			for (unsigned int i = 0; i < gamepads->Size; i++)
			{
				Windows::Gaming::Input::Gamepad^ gamepad = gamepads->GetAt(i);
				Windows::Gaming::Input::GamepadReading gr = gamepad->GetCurrentReading();
				if(int(static_cast<unsigned int>(gr.Buttons) & static_cast<unsigned int>(GamepadButtons::A)))
				{
					currentController = gamepad;

					// UWP Gamepads carry no User, so "is this pad signed in" collapses to
					// "is the title-level XboxLiveUser signed in".
					if (!currentUser || !currentUser->IsSignedIn)
					{
						Microsoft::Xbox::Services::System::XboxLiveUser^ signedIn = tryToSignInActiveUser(gamepad);
						if (signedIn)
						{
							currentUser = signedIn;
							waitingForAButton = false;
						}
					}
					else
					{
						// UWP Gamepads carry no Id; identity is their index in Gamepads.
						controller->remapXboxLiveIdToRBXGamepadId(currentUser->XboxUserId, (unsigned long long)i, RBX::InputObject::TYPE_GAMEPAD1);
						waitingForAButton = false;
					}

					if (!waitingForAButton)
					{
						newActiveUser = currentUser;

						// wait to break until we get a button up (fixes issues with UI button press)
						Windows::Gaming::Input::GamepadReading gr = gamepad->GetCurrentReading();
						while (int(static_cast<unsigned int>(gr.Buttons) & static_cast<unsigned int>(GamepadButtons::A)))
						{
							Sleep(1);
							gr = gamepad->GetCurrentReading();
						}

						break;
					}
				}
			}
		}

		if (waitingForAButton)
		{
			Sleep(1);
		}
	}

	return newActiveUser;
}

void XboxPlatform::attemptToSignActiveUserIn(std::string userToSignIn, Windows::Gaming::Input::Gamepad^ controllerToUse)
{
	current->getDataModel()->submitTask([=](...)
	{
		if(PlatformService* p = ServiceProvider::find<RBX::PlatformService>(current->getDataModel().get()))
			p->lostActiveUser(userToSignIn);
	}
	, DataModelJob::Write);

	boost::thread([=]() 
	{ 
		Microsoft::Xbox::Services::System::XboxLiveUser^ activeUser = getActiveUser();

		Platform::String^ displayName = activeUser->Gamertag;
		std::string displayNameString = ws2s(displayName->Data());

		shared_ptr<RBX::DataModel> dm = current->getDataModel();
		dm->submitTask([=](...)
		{
			if(PlatformService* p = ServiceProvider::find<RBX::PlatformService>(dm.get()))
				p->gainedActiveUser(displayNameString);
		}
		, DataModelJob::Write);

		if (!currentUser || !isStringEqual(activeUser->XboxUserId, currentUser->XboxUserId))
		{
			returnToEngagementScreen(ReturnToEngage_SignOut);
		}
	} ).detach();
}


void XboxPlatform::attemptToReconnectController(std::string userToSignIn)
{
	controller->resetControllerGuidMap();

	current->getDataModel()->submitTask([=](...)
	{
		if(PlatformService* p = ServiceProvider::find<RBX::PlatformService>(current->getDataModel().get()))
			p->lostUserGamepad(userToSignIn);
	}
	, DataModelJob::Write);

	boost::thread([=]() 
	{ 
		Microsoft::Xbox::Services::System::XboxLiveUser^ activeUser = getActiveUser();

		Platform::String^ displayName = activeUser->Gamertag;
		std::string displayNameString = ws2s(displayName->Data());

		shared_ptr<RBX::DataModel> dm = current->getDataModel();
		dm->submitTask([=](...)
		{
			if(PlatformService* p = ServiceProvider::find<RBX::PlatformService>(dm.get()))
				p->gainedUserGamepad(displayNameString);
		}
		, DataModelJob::Write); 

        if (!currentUser || activeUser->XboxUserId != currentUser->XboxUserId)
		{
			returnToEngagementScreen(ReturnToEngage_ControllerChange);
		}

	} ).detach();
    
}

Microsoft::Xbox::Services::System::XboxLiveUser^ XboxPlatform::tryToSignInActiveUser(Windows::Gaming::Input::Gamepad^ controllerToUse)
{
	trySignInOnActivation = false;

	if (!controllerToUse)
	{
		return nullptr;
	}

	// SystemUI::ShowAccountPickerAsync is gone on UWP - XboxLiveUser::SignInAsync is the
	// equivalent, and it needs a dispatcher (this runs off the UI thread, so MainView's).
	if(!currentUser)
	{
		currentUser = createDefaultXboxLiveUser();
	}
	if(!currentUser)
	{
		return nullptr;
	}
	auto signInResult = concurrency::create_task(currentUser->SignInAsync(getMainThreadDispatcher())).get();

	// UWP Gamepads carry neither User nor Id: the signed-in identity is the title-level
	// XboxLiveUser, and a pad's identity is its index in Gamepad::Gamepads.
	if (signInResult->Status != Microsoft::Xbox::Services::System::SignInStatus::Success || 
		!currentUser || !currentUser->IsSignedIn )
	{
		return nullptr;
	}

	controller->remapXboxLiveIdToRBXGamepadId(currentUser->XboxUserId,
		(unsigned long long)controller->getRbxGamepadIntFromGamepad(controllerToUse), InputObject::TYPE_GAMEPAD1);

	return currentUser;
}

std::vector<Windows::Gaming::Input::Gamepad^> XboxPlatform::getGamepadsForCurrentUser()
{
	// UWP Gamepads carry no user identity, so "the current user's pads" is just every
	// connected pad. (This function has no callers; kept for API parity.)
	std::vector<Windows::Gaming::Input::Gamepad^> gamepads;
	IVectorView<Windows::Gaming::Input::Gamepad^>^ pads = Windows::Gaming::Input::Gamepad::Gamepads;
	for(unsigned int i = 0; i < pads->Size; i++)
	{
		gamepads.push_back(pads->GetAt(i));
	}
	return gamepads;
}

void XboxPlatform::handleCurrentControllerChanged()
{
	currentController = nullptr;
	controller->resetControllerGuidMap();

	Platform::String^ displayName = currentUser->Gamertag;
	std::string displayNameString = ws2s(displayName->Data());

	attemptToReconnectController(displayNameString);
}

void XboxPlatform::initializeAuthEventHandlers()
{
	// UWP/XSAPI replacements, and the gaps:
	//  - User::UserDisplayInfoChanged has no replacement: XSAPI publishes no display-info
	//    change event, so the gamertag-change -> ReturnToEngage_DisplayInfoChange reaction
	//    has no source and storeLocalGamerPicture is no longer re-run from here.
	//  - User::SignInCompleted has no replacement: sign-in is now explicit (XboxLiveUser::
	//    SignInAsync from the account picker), and the context/multiplayer/voice-chat setup
	//    it performed is done by authAndInitUser().
	//  - Controller::ControllerPairingChanged has no replacement: UWP Gamepad carries no
	//    user, so a pad can never be re-paired to a different account.
	Microsoft::Xbox::Services::System::XboxLiveUser::SignOutCompleted += ref new EventHandler<Microsoft::Xbox::Services::System::SignOutCompletedEventArgs^ >( [=]( Platform::Object^ , Microsoft::Xbox::Services::System::SignOutCompletedEventArgs^ args )
	{
		dprintf("SignOutCompleted Event\n");
		if(currentUser && args->User && args->User->XboxUserId == currentUser->XboxUserId && currentController)
		{
			if(multiplayerManager)
				multiplayerManager->stopMultiplayerListeners();
			multiplayerManager.reset();

			if(xboxLiveContext && game == current)
			{
				Platform::String^ displayName = currentUser->Gamertag;
				attemptToSignActiveUserIn(ws2s(displayName->Data()), currentController);
			}
			else
			{
				returnToEngagementScreen(ReturnToEngage_SignOut);
			}
			xboxLiveContext = nullptr;
		}
	} );


	// UWP Gamepad::GamepadRemoved is EventHandler<Gamepad ^> - the pad itself is the second
	// argument - and pads carry no Id, so identity is the index XboxGameController tracks.
	Windows::Gaming::Input::Gamepad::GamepadRemoved += ref new EventHandler<Windows::Gaming::Input::Gamepad^ >( [=]( Platform::Object^ , Windows::Gaming::Input::Gamepad^ args )
	{
		dprintf("GamepadRemoved Event\n");
		if (currentController && args == currentController)
		{
			currentController = nullptr;
			handleCurrentControllerChanged();
		}
	} );
}

void XboxPlatform::setGameProgress()
{ 
	if(!xboxLiveContext) return;

    int titleId = ServiceProvider::find<PlatformService>(intro->getDataModel().get())->getTitleId();
	XboxLiveContext^ xblcontext = xboxLiveContext;
    // Get gamerscore that this user had collected
    async(xblcontext->AchievementService->GetAchievementsForTitleIdAsync(currentUser->XboxUserId, titleId, AchievementType::All, false, AchievementOrderBy::Default, 0, 100))
    .complete(
        [=](AchievementsResult^ achievements) -> void
        {
            int usersGamerscore = 0;
            for( Achievement^ achievement : achievements->Items )
            {
                if (achievement->ProgressState == AchievementProgressState::Achieved)
                {
                    for( AchievementReward^ reward : achievement->Rewards )
                    {
                        if (reward->RewardType == AchievementRewardType::Gamerscore)
                        {
                            int rewardValue = _wtoi(reward->Data->Data()); 
                            usersGamerscore += rewardValue;
                        }
                    }
                }
            }

            double gameProgress = (double)usersGamerscore * 0.1;
            xboxEvents_send(xblcontext, "GameProgress", &gameProgress);
        }
    ).detach();   
}

// reentrant
RBX::AwardResult XboxPlatform::awardAchievement(const std::string& eventName)
{
    RBX::AwardResult res = xboxEvents_send(xboxLiveContext, eventName.c_str());
    
    setGameProgress();

    return res;
}

// reentrant
RBX::AwardResult XboxPlatform::setHeroStat(const std::string& eventName, double* value)
{
    return xboxEvents_send(xboxLiveContext, eventName.c_str(), value);
}

//////////////////////////////////////////////////////////////////////////
AccountAuthResult httpErrorToAccountLinkResult(const std::string& status)
{
	// this looks terrible. needs a better way to approach this
	
	if(status.compare("SignUpDisabled") == 0)
		return AccountAuth_SignUpDisabled;
	else if(status.compare("Flooded") == 0)
		return AccountAuth_Flooded;
	else if(status.compare("LeaseLocked") == 0)
		return AccountAuth_LeaseLocked;
	else if(status.compare("AccountLinkingDisabled") == 0)
		return AccountAuth_AccountLinkingDisabled;
	else if(status.compare("InvalidRobloxUser") == 0)
		return AccountAuth_InvalidRobloxUser;
	else if(status.compare("RobloxUserAlreadyLinked") == 0)
		return AccountAuth_RobloxUserAlreadyLinked;
	else if(status.compare("XboxUserAlreadyLinked") == 0)
		return AccountAuth_XboxUserAlreadyLinked;
	else if(status.compare("IllegalChildAccountLinking") == 0)
		return AccountAuth_IllegalChildAccountLinking;
	else if(status.compare("InvalidPassword") == 0)
		return AccountAuth_InvalidPassword;
	else if(status.compare("UsernamePasswordNotSet") == 0)
		return AccountAuth_UsernamePasswordNotSet;
	else if(status.compare("Already Taken") == 0)
		return AccountAuth_UsernameAlreadyTaken;
	else if(status.compare("InvalidCredentials") == 0)
		return AccountAuth_InvalidCredentials;
	else
	{
		dprintf("Unknown AccountLink error: %s", status);
		return AccountAuth_Error;
	}
}

AccountAuthResult XboxPlatform::xboxAuthHttpHelper( const std::string& url, std::string* response, bool isPost){
	if(currentUser==nullptr)
	{
		dprintf("xboxAuthHttpHelper: currentUserNotKnown not init\n");
		return AccountAuth_NoUserDetected;
	}

	try // exceptions are all over the place and there's no escape
	{
		//TODO: this needs some cleanup, maybe move the setting userId to another function?
		Http http(url);
		http.additionalHeaders["xbl-authz-actor-10"] = getXboxUserHash(currentUser);

		std::stringstream inputStream = std::stringstream(*response);
		if(isPost)
        {
			http.post(inputStream, Http::kContentTypeDefaultUnspecified, false, *response);
		}
        else
        {
			http.get(*response);
		}
		dprintf("xboxAuthHttpHelper Response: %s\n", response->c_str());
	}
	catch (const RBX::http_status_error& e){
		dprintf("Http status Error: %d : %s\n", e.statusCode, response->c_str());
		return AccountAuth_HttpErrorDetected;
	}
	catch (Platform::COMException ^e){
		if (e->HResult == 0x87DD0021) 
		{
			dprintf("FAILED UserAuth COMException: [0x%x] (%S): endpoint does not need authToken...\n", e->HResult, e->Message->Data());		
		}
		else if( e->HResult == 0x8015dc12)
		{
			dprintf("FAILED UserAuth COMException: [0x%x] (%S): Check that you are using the correct SandBoxID...\n", e->HResult, e->Message->Data());		
		}
		else
		{
			dprintf("FAILED UserAuth COMException: [0x%x] (%S)\n", e->HResult, e->Message->Data());		
		}
		return AccountAuth_HttpErrorDetected;
	}
	catch ( Platform::Exception ^e )
	{
		dprintf( "FAILED UserAuth Exception: [0x%x] (%S)\n", e->HResult, e->Message->Data());
		return AccountAuth_Error;
	} 
	catch (const std::exception& e)
	{
		dprintf("Error: %s", e.what());
		return AccountAuth_Error;
	}
	return AccountAuth_Success; 
}

int XboxPlatform::performAccountLink(const std::string& accountName, const std::string& password, std::string* response)
{
	dprintf("Attempting to AccountLink %s...\n", accountName);

	std::string url = kApiUrl + kXboxAccountLinkEndpoint;
	url = url + "?username=" + accountName + "&password=" + password;
	AccountAuthResult retval = xboxAuthHttpHelper(url, response, true);

	if(retval ==  AccountAuth_Success){
		return authAndInitUser();
	}else{
		return httpErrorToAccountLinkResult(*response);
	}
}


int XboxPlatform::performUnlinkAccount(std::string* response)
{
	dprintf("Attempting to UnlinkAccount...\n");
	AccountAuthResult status = performHasRobloxCredentials();

	if (status == AccountAuth_Success)
	{
		std::string url = kApiUrl + kUnlinkAccountEndpoint;
		status = xboxAuthHttpHelper(url, response, true);

		if (status == AccountAuth_Success)
		{
			returnToEngagementScreen(ReturnToEngage_UnlinkSuccess);
		}
		else
		{
			status = httpErrorToAccountLinkResult(*response);
		}
	}

	return status;
}


int XboxPlatform::performSetRobloxCredentials( const std::string& accountName, const std::string& password, std::string* response)
{
	dprintf("Attempting to setRobloxCredentials of %s...\n", accountName);

	std::string url = kApiUrl + kXboxSetRobloxUsernamePasswordEndpoint;
	url = url + "?username=" + accountName + "&password=" + password;
	AccountAuthResult retval = xboxAuthHttpHelper(url, response, true);

	if(retval ==  AccountAuth_Success){
		//clean up before re-auth
		marshaller->waitEvents();
		removeGenericDataModelJob(validSessionPoller, [=]() { marshaller->processEvents(); } );

		multiplayerManager.reset();
		xboxLiveContext = nullptr;
		return authAndInitUser();
	}else{
		return httpErrorToAccountLinkResult(*response);
	}
}

static std::string getCacheFighterString()
{
    SYSTEMTIME curTime = {0};
    GetSystemTime(&curTime);

    std::stringstream ss;
    ss << curTime.wMilliseconds;
    ss << curTime.wMinute;
    ss << curTime.wHour;
    ss << curTime.wDay;
    ss << curTime.wMonth;
    ss << curTime.wYear;

    return "cache-fighter=" + ss.str();
}

AccountAuthResult XboxPlatform::performHasLinkedAccount()
{
	dprintf("Attempting to check if hasLinkedAccount...\n");
	std::string url = kApiUrl + kHasLinkedAccountEndpoint;
	std::string result;
	AccountAuthResult retval = xboxAuthHttpHelper(url, &result, false);

	if(retval == AccountAuth_Success){
		boost::shared_ptr<const Reflection::ValueTable> parameters = rbx::make_shared<const Reflection::ValueTable>();
		WebParser::parseJSONTable(result, parameters);
		RBX::Reflection::ValueTable::const_iterator iter = parameters->find("hasLinkedAccount");
		if (iter != parameters->end() && iter->second.isType<bool>())
		{
			retval = iter->second.get<bool>() ? AccountAuth_Success : AccountAuth_AccountUnlinked;
		}
	}
	return retval;
}


AccountAuthResult XboxPlatform::performHasRobloxCredentials()
{
	dprintf("Attempting to check if hasRobloxCredentials...\n");
	std::string url = kApiUrl + kHasSetUsernamePasswordEndpoint;
	std::string result;
	AccountAuthResult retval = xboxAuthHttpHelper(url, &result, false);

	if(retval == AccountAuth_Success){
		boost::shared_ptr<const Reflection::ValueTable> parameters = rbx::make_shared<const Reflection::ValueTable>();
		WebParser::parseJSONTable(result, parameters);
		RBX::Reflection::ValueTable::const_iterator iter = parameters->find("hasSetUsernameAndPassword");
		if (iter != parameters->end() && iter->second.isType<bool>())
		{
			retval = iter->second.get<bool>() ? AccountAuth_Success : AccountAuth_UsernamePasswordNotSet;
		}
	}
	return retval;
}

void XboxPlatform::checkValidSessionAsync()
{
	
	try{
		const std::string url = kApiUrl+kXboxUserInfoEndpoint;
		Http(url).get(
			[this](std::string* r, std::exception* e)
			{
				if( http_status_error* st = dynamic_cast<http_status_error*>(e))
				{
					dprintf( "validSessionPoller: HTTP %d\n", st->statusCode );
					if(st->statusCode == 403 || st->statusCode == 401){
						returnToEngagementScreen(ReturnToEngage_InvalidSession);
					}		
				}
			}
		);

	}
	catch(std::exception& e){
		("validSessionAsyncError: %s ", e.what());
	}
}
void XboxPlatform::initValidSessionPoller()
{
	if(!xboxLiveContext || !xboxLiveContext->User->IsSignedIn) return;
	// lambda to check sessions status
	removeGenericDataModelJob(validSessionPoller, [=]()->void{marshaller->processEvents();} );
	validSessionPoller = addGenericDataModelJob( "validSessionPoller", DataModelJob::None, intro->getDataModel(), FInt::CheckValidSessionInterval*1.0f, 
		[=]()mutable -> void 
	{
		checkValidSessionAsync();
	});//lamda
}
void XboxPlatform::removeValidSessionPoller()
{
	removeGenericDataModelJob(validSessionPoller, [=]() { marshaller->processEvents(); } );
}

AccountAuthResult XboxPlatform::performAuthorization(InputObject::UserInputType gamepadId, bool unlinkedCheck)
{
	if (gamepadId == InputObject::UserInputType::TYPE_NONE)
	{
		dprintf("No gamepad, auth not possible.\n");
		return AccountAuth_MissingGamePad;
	}
	// get the user that hit the engagement button
	controller->setupGamepadHandling();
	uint64 controllerGuid = controller->getGamepadGuid(gamepadId);
	IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;
	Windows::Gaming::Input::Gamepad^ userGamePad = nullptr;
	// UWP Gamepad has no Id, so the guid stored for a mapped pad is its Gamepads index
	for(unsigned int i = 0; i < gamepads->Size; i++)
	{
		if((uint64)i == controllerGuid)
		{
			userGamePad = gamepads->GetAt(i);
			break;
		}
	}

	if(!userGamePad )
	{
		dprintf("userGamepad is NULL\n");
		return AccountAuth_MissingGamePad;
	}

	// UWP Gamepad carries no User, so sign-in state lives on XboxLiveUser instead
	if(!currentUser || !currentUser->IsSignedIn)
	{
		dprintf("Error in userAuth: No user paired to active controller\n");
		// SystemUI::ShowAccountPickerAsync is gone on UWP - XboxLiveUser::SignInAsync is the
		// equivalent. Guests are not allowed, which SignInAsync enforces by itself.
		if(!currentUser)
		{
			currentUser = createDefaultXboxLiveUser();
		}
		if(currentUser)
		{
			concurrency::create_task(currentUser->SignInAsync(getMainThreadDispatcher())).get();
		}
	}

	if(!currentUser)
	{
		dprintf("userGamepad does not have an associated user selected\n");
		return AccountAuth_NoUserDetected;
	}
	// currently only use gamepad1, should be fixed 
	currentController = userGamePad;

	AccountAuthResult authResult = AccountAuth_Error;

	//Check if linked
	if(unlinkedCheck)
	{
		authResult = performHasLinkedAccount();
		if (authResult == AccountAuth_Success)
		{
			authResult = authAndInitUser();
		}
	}
	else
	{
		authResult = authAndInitUser();
	}

	if (authResult == AccountAuth_Success && currentUser )
	{
		//todo: allow for more than controller (need this now for xbox cert)
		controller->remapXboxLiveIdToRBXGamepadId(currentUser->XboxUserId, (unsigned long long)controller->getRbxGamepadIntFromGamepad(currentController), InputObject::TYPE_GAMEPAD1);
	}

	boost::thread([=]() 
	{
		std::string trackerUrl = kApiUrl + kBrowserTrackerCookieEndpoint;
		std::string response;
		RBX::AccountAuthResult retval = xboxAuthHttpHelper(trackerUrl, &response, true);
	}).detach();

	return authResult;
}

AccountAuthResult XboxPlatform::authAndInitUser()
{
	if(!currentUser){
		return AccountAuth_NoUserDetected;
	}

	dprintf("Attempting to authenticate %S...\n", currentUser->Gamertag->Data());

	std::string strAuthUrl = kApiUrl+kAuthEndpoint;

	std::string response;
	AccountAuthResult retval = xboxAuthHttpHelper(strAuthUrl, &response, true);

	if(retval != AccountAuth_Success)
	{
		return httpErrorToAccountLinkResult(response);
	}

	dprintf("UserHash: %s \n", getXboxUserHash(currentUser).c_str());
	dprintf("Authen_Response: %s \n", response.c_str());

    try // exceptions are all over the place and there's no escape
    {
		// Update the userId
		std::string getUserInfoUrl = kApiUrl + kXboxUserInfoEndpoint;
		
		Http userInfohttp(getUserInfoUrl);
		response.clear();
		userInfohttp.get(response);

		dprintf("UserInfoReponse: %s\n", response.c_str());
		int userId = -1;
		boost::shared_ptr<const Reflection::ValueTable> parameters = rbx::make_shared<const Reflection::ValueTable>();
		WebParser::parseJSONTable(response, parameters);
		RBX::Reflection::ValueTable::const_iterator iter = parameters->find("userId");
		if (iter != parameters->end())
			userId = iter->second.get<int>();

		if(userId == -1) 
			dprintf("Was unable to parse userid from response\n");

        intro->getDataModel()->submitTask( 
            [=](...) -> void
		{
			Network::Players* localplayers = intro->getDataModel()->find<Network::Players>();
			localplayers->resetLocalPlayer();		
			localplayers->createLocalPlayer(userId);
        },
            DataModelJob::Write
        );
	}
	catch (const RBX::http_status_error& e)
	{
		dprintf("Http status Error: %d : %s\n", e.statusCode, e.what());
		return AccountAuth_HttpErrorDetected;
	}
	catch (Platform::COMException ^e)
	{
		if (e->HResult == 0x87DD0021) {
			dprintf("FAILED UserAuth COMException: [0x%x] (%S): endpoint does not need authToken...\n", e->HResult, e->Message->Data());		
		}else if( e->HResult == 0x8015dc12){
			dprintf("FAILED UserAuth COMException: [0x%x] (%S): Check that you are using the correct SandBoxID...\n", e->HResult, e->Message->Data());		
		}else{
			dprintf("FAILED UserAuth COMException: [0x%x] (%S)\n", e->HResult, e->Message->Data());		
		}
		return AccountAuth_HttpErrorDetected;
	}
	catch ( Platform::Exception ^e )
	{
		dprintf( "FAILED UserAuth Exception: [0x%x] (%S)\n", e->HResult, e->Message->Data());
		return AccountAuth_Error;
	} 
    catch (const std::exception& e)
    {
        dprintf("Error: %s", e.what());
        return AccountAuth_Error;
    }
	
	try
	{
		// Initialize xboxLiveContext on successful authentification// note this is a work around
		while(!xboxLiveContext )
		{
			dprintf("initializing xboxlivecontext\n");
			xboxLiveContext = ref new XboxLiveContext( currentUser );
		}
		// we want to use this but until Microsoft fixes the xboxLiveContext bug, we cant do much here
		/*
		plat->xboxLiveContext = ref new XboxLiveContext( plat->currentGamepadUser );
		if(plat->xboxLiveContext != nullptr){
			dprintf("xboxLiveContext was not initialized\n");				
		}
		*/

		//enableVerboseXboxErrors(xboxLiveContext);  // Uncomment this if you want to see the http results from xboxlive

		dprintf("xboxLiveContext now initialized for user %S\n", currentUser->Gamertag->Data());

		storeLocalGamerPicture(xboxLiveContext);

		sendConsumeAllRequest(false);
		setRichPresence();
        setGameProgress();

		initValidSessionPoller();

		CoCreateGuid(&playerSessionGuid);

		multiplayerManager.reset(new XboxMultiplayerManager(xboxLiveContext, playerSessionGuid, intro->getDataModel()->find<Network::Players>()->getLocalPlayer()->getUserID()));

		// let xboxlive know we have started a player session. MUST make sure guid is set first
		xbEventPlayerSessionStart();

		// handle game invite/join here
		if(!gameInviteHandle.targetUserXuid.empty())
		{
			if(gameInviteHandle.followUserId != -1)
			{
				Platform::String^ inviteRef = ref new Platform::String(s2ws(&gameInviteHandle.targetUserXuid).c_str());
				startGame3(	GameJoin_Follow, gameInviteHandle.followUserId );
			}
			else
			{
				// how...
				dprintf("failed game join.\n");
			}
			//reset after consumed
			gameInviteHandle.targetUserXuid = "";
			gameInviteHandle.followUserId = -1;
			gameInviteHandle.pmpCreator = 0;
		}

		return AccountAuth_Success;
	}
	catch(Platform::Exception ^ ex)
	{
		dprintf("Error getting signed-in user: %S 0x%x\n", ex->HResult.ToString()->Data(), ex->HResult);
	}
    return AccountAuth_Error; 
}


void XboxPlatform::initVoiceChatPoller()
{
    removeGenericDataModelJob(voiceChatPoller, [=]()->void{marshaller->processEvents();} );

    XboxLiveContext^ xblcontext = xboxLiveContext;

    voiceChatPoller = addGenericDataModelJob( "voiceChatPoller", DataModelJob::Read, game->getDataModel(), 1.0 / 10.0, 
    [=]()mutable -> void 
    {
        RBXPROFILER_SCOPE("Xbox", "VoiceChatUpdate");
        if (multiplayerManager && game)
        {
            RBX::Network::Players* players = game->getDataModel()->find<RBX::Network::Players>();

            if (players)
            {
                RBX::Network::Player* localplayer = players->getLocalPlayer();
                if (localplayer)
                    if (localplayer->getNeutral())
                        multiplayerManager->setTeamChannel(0);
                    else
                    {
                        size_t teamId = localplayer->getTeamColor().getClosestPaletteIndex();
                        RBXASSERT(teamId < 255);
                        multiplayerManager->setTeamChannel((unsigned char)teamId + 1); // +1 because 0 is for neutral 
                    }

                std::vector<RBX::Network::Player> playerVector;

                PlatformService* ps = ServiceProvider::find<PlatformService>(game->getDataModel().get());

                shared_ptr<const Instances> instances = players->getPlayers();
                for(Instances::const_iterator iter = instances->begin(); iter != instances->end(); ++iter)
                {
                    if(shared_ptr<RBX::Network::Player> player = Instance::fastSharedDynamicCast<RBX::Network::Player>(*iter))
                    {
                        RBX::VoiceChatBase::TalkingDelta talkingDelta;
                        float distance = 0;
                        if (localplayer->getSharedCharacter() && player->getSharedCharacter() && localplayer->getUserID() != player->getUserID())
                            distance = (localplayer->getSharedCharacter()->getLocation().translation - player->getSharedCharacter()->getLocation().translation).length();

                        multiplayerManager->updatePlayer(player->getUserID(), distance, &talkingDelta);

                        if (ps)
                        {
                            if (talkingDelta == VoiceChatBase::TalkingChange_Start)
                                dprintf("voice start \n");// ps->voiceChatUserTalkingStartSignal(player->getUserID());
                            else if (talkingDelta == VoiceChatBase::TalkingChange_End)
                                dprintf("voice end \n");//ps->voiceChatUserTalkingEndSignal(player->getUserID());
                        }
                    }
                }
            }
        }
    });
}

void XboxPlatform::removeVoiceChatPoller()
{
    removeGenericDataModelJob(voiceChatPoller, [=]() { marshaller->processEvents(); } );
}

int XboxPlatform::getPlatformPartyMembers(shared_ptr<Reflection::ValueArray> result)
{
	// Xbox party membership never came to UWP: XDK's PartyChat::GetPartyChatViewAsync() had no
	// successor and XSAPI exposes no Party namespace. Returning 1 is exactly what the old
	// getParty() returned when the member list came back empty ("no party"), so the script
	// binding's error path behaves as it did before.
	result->clear();
	return 1;
}

int	XboxPlatform::getInGamePlayers(shared_ptr<Reflection::ValueArray> result)
{
	result->clear();
	if(multiplayerManager)
	{
		multiplayerManager->getInGamePlayers(result);
		return 0;
	}	
	return 1;
}

// needed for teleports

std::string XboxPlatform::xBox_getGamerTag() const
{
    if( !xboxLiveContext ) return "";
    return ws2s( xboxLiveContext->User->Gamertag->Data() );
}
