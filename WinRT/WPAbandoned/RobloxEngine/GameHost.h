#pragma once

#include <memory>
#include <mutex>
#include <boost/shared_ptr.hpp>

// Engine core headers (relative to repo root App/include)
#include "../../../App/include/v8datamodel/Game.h"
#include "../../../App/include/v8datamodel/DataModel.h"
#include "../../../App/include/v8datamodel/ContentProvider.h"
#include "../../../App/include/v8datamodel/UserInputService.h"
#include "../../../App/include/script/ScriptContext.h"

namespace RobloxEngine
{
    // Minimal WindowsClient-like container for Game/DataModel on WP.
    // Mirrors parts of WindowsClient/Document.cpp without join/config parsing.
    class GameHost
    {
    public:
        GameHost();
        ~GameHost();

        // Initialize SecurePlayerGame and configure DataModel services.
        void Initialize(bool useChat = false);
        
        // Check if initialization is complete
        bool IsInitialized() const { return m_initialized; }

        // Advance DataModel a frame; dt in seconds
        void Tick(double dt);

        // Graceful shutdown (ScriptContext timeout is respected if configured)
        void Shutdown();

        // Load a place file into the DataModel (synchronous)
        bool LoadPlace(const std::string& filePath);
        
        // Load a place from binary data in memory
        bool LoadPlaceFromBytes(const unsigned char* data, size_t length);

        // Accessors
        std::shared_ptr<RBX::Game> GetGame() const { return m_game; }
        boost::shared_ptr<RBX::DataModel> GetDataModel() const { return m_game ? m_game->getDataModel() : boost::shared_ptr<RBX::DataModel>(); }

    private:
        void configureDataModelServices(bool useChat, RBX::DataModel* dm);

        std::shared_ptr<RBX::Game> m_game;
        bool m_initialized;
    };
}
