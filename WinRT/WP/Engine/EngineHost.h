#pragma once

#include <string>
#include <boost/shared_ptr.hpp>

namespace RBX { class Game; }
class GameView;

namespace EngineHost
{
    struct Params
    {
        int viewWidth;
        int viewHeight;
        void* panel;
        std::string assetFolderPath;
    };

    bool Start(const Params& p);
    void Stop();

    GameView* GetView();
    boost::weak_ptr<RBX::Game> GetGame();
}
