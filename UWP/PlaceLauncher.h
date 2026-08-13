#pragma once

#include <memory>
#include <string>

#include "LogManager.h"
#include "Teleporter.h"

#include "v8datamodel/Game.h"
#include "v8tree/Instance.h"
#include "util/standardout.h"
#include "rbx/signal.h"

enum JoinGameRequest {
    JOIN_GAME_REQUEST_PLACEID,
    JOIN_GAME_REQUEST_USERID,
    JOIN_GAME_REQUEST_PRIVATE_SERVER,
    JOIN_GAME_REQUEST_GAME_INSTANCE
};

class Teleporter;
class RobloxView;
class UserInput;
class GamepadController;

struct StartGameParams
{
    int viewWidth;
    int viewHeight;
    void* view;
    int placeId;
    int userId;
    std::string accessCode;
    std::string gameId;
    std::string assetFolderPath;
    bool isTouchDevice;
    JoinGameRequest joinRequestType;
};

class PlaceLauncher
{
    RobloxView* rbxView;
    boost::scoped_ptr<Teleporter> teleporter;
    std::unique_ptr<UserInput> m_userInput;
    std::unique_ptr<GamepadController> m_gamepadController;

    bool isCurrentlyPlayingGame;
    StartGameParams gameParams;

    shared_ptr<RBX::Game> currentGame;

    PlaceLauncher();
    ~PlaceLauncher();

    PlaceLauncher(PlaceLauncher const&);
    void operator=(PlaceLauncher const&);

    shared_ptr<RBX::Game> setupGame(const StartGameParams& sgp);
    bool startGame(boost::function0<void> scriptFunction);
    void prepareGame(const StartGameParams& sgp);
    void registerHardwareDevice(RBX::DataModel* dataModel);
    void deleteRobloxView(bool resetCurrentGame);

public:
    static PlaceLauncher& getPlaceLauncher();

    RobloxView* getRbxView() { return rbxView; }

    bool startGame(const StartGameParams& sgp);
    void leaveGame(bool userRequestedLeave);
    void teleport(std::string ticket, std::string authUrl, std::string script);

    static void handleStartGameFailure(int status);

    weak_ptr<RBX::Game> getCurrentGame() { return currentGame; }
};
