#include "pch.h"
#include "GameHost.h"
#include "../../../App/include/v8xml/SerializerBinary.h"
#include "../../../App/include/v8datamodel/Workspace.h"
#include "../../../App/include/v8datamodel/Lighting.h"
#include "../../../App/include/util/RunStateOwner.h"
#include "../../../App/include/v8datamodel/ContentProvider.h"
// #include "../../../App/include/v8datamodel/PlatformService.h"  // Commented out - not in WP build yet
#include "../../../App/include/util/Statistics.h"
#include <fstream>
#include <sstream>

namespace RobloxEngine
{
    GameHost::GameHost()
        : m_initialized(false)
    {
    }

    GameHost::~GameHost()
    {
        Shutdown();
    }

    void GameHost::Initialize(bool useChat)
    {
        if (m_game || m_initialized)
            return;

        OutputDebugStringA("[GameHost::Initialize] Starting initialization...\n");

        // CRITICAL: Initialize global systems before creating game (matches Xbox)
        // This must happen BEFORE creating the Game object
        
        // Step 1: Set base URL for HTTP requests and content loading
        const char* kBaseUrl = "https://www.roblox.com/";
        SetBaseURL(kBaseUrl);
        OutputDebugStringA("[GameHost::Initialize] SetBaseURL() called\n");
        
        // Step 2: Tell ContentProvider where to find packaged assets
        RBX::ContentProvider::setAssetFolder("content");
        OutputDebugStringA("[GameHost::Initialize] ContentProvider::setAssetFolder(\"content\") called\n");
        
        // Step 3: Initialize global game systems (networking, analytics, HTTP)
        RBX::Game::globalInit(false);  // false = not studio mode
        OutputDebugStringA("[GameHost::Initialize] Game::globalInit(false) called\n");

        // Step 4: Create SecurePlayerGame with proper base URL (matches Xbox pattern)
        m_game.reset(new RBX::SecurePlayerGame(NULL, kBaseUrl));
        OutputDebugStringA("[GameHost::Initialize] SecurePlayerGame created\n");

        configureDataModelServices(useChat, m_game->getDataModel().get());

        // Ensure ScriptContext exists to match desktop behavior for shutdown timeouts
        if (RBX::DataModel* dm = m_game->getDataModel().get())
        {
            RBX::DataModel::LegacyLock lock(dm, RBX::DataModelJob::Write);
            dm->create<RBX::ScriptContext>();
            
            // Step 5: Configure PlatformService for Windows Phone (matches Xbox pattern)
            // NOTE: Commented out temporarily - PlatformService.cpp not in WP build
            // This is not critical for basic rendering/skybox display
            // Can add later by including PlatformService.cpp in App.Phone project
            /*
            if (RBX::PlatformService* ps = RBX::ServiceProvider::create<RBX::PlatformService>(dm))
            {
                // Use GameDatamodel type for Windows Phone (active game, not app shell)
                ps->setPlatform(nullptr, RBX::PlatformDatamodelType::GameDatamodel);
                ps->tintColor = RBX::Color3(0, 0, 0);  // Start with black tint to hide loading
                OutputDebugStringA("[GameHost::Initialize] PlatformService configured\n");
            }
            */
        }
        
        OutputDebugStringA("[GameHost::Initialize] Initialization complete!\n");
        m_initialized = true;
    }

    void GameHost::configureDataModelServices(bool /*useChat*/, RBX::DataModel* dm)
    {
        if (!dm)
            return;

        RBX::DataModel::LegacyLock lock(dm, RBX::DataModelJob::Write);

        if (RBX::UserInputService* uis = dm->find<RBX::UserInputService>())
        {
            // On phone we at least enable touch/mouse; keyboard may be present on desktop emulator
            uis->setKeyboardEnabled(true);
            uis->setMouseEnabled(true);
        }
    }

    void GameHost::Tick(double dt)
    {
        if (!m_game)
            return;
        boost::shared_ptr<RBX::DataModel> dm = m_game->getDataModel();
        if (!dm)
            return;

        // Advance DataModel similarly to RenderJob path (write phase)
        {
            RBX::DataModel::scoped_write_request request(dm.get());
            dm->renderStep(static_cast<float>(dt));
        }
    }

    bool GameHost::LoadPlace(const std::string& filePath)
    {
        if (!m_game)
        {
            OutputDebugStringA("[GameHost::LoadPlace] ERROR: Game not initialized!\n");
            return false;
        }

        boost::shared_ptr<RBX::DataModel> dm = m_game->getDataModel();
        if (!dm)
        {
            OutputDebugStringA("[GameHost::LoadPlace] ERROR: No DataModel!\n");
            return false;
        }

        try
        {
            char buf[512];
            sprintf_s(buf, sizeof(buf), "[GameHost::LoadPlace] Loading place from: %s\n", filePath.c_str());
            OutputDebugStringA(buf);

            // Open the file
            std::ifstream file(filePath, std::ios::binary);
            if (!file.is_open())
            {
                sprintf_s(buf, sizeof(buf), "[GameHost::LoadPlace] ERROR: Failed to open file: %s\n", filePath.c_str());
                OutputDebugStringA(buf);
                return false;
            }

            // Deserialize into the workspace
            {
                RBX::DataModel::LegacyLock lock(dm.get(), RBX::DataModelJob::Write);
                
                // Get or create workspace
                RBX::Workspace* workspace = dm->getWorkspace();
                if (!workspace)
                {
                    OutputDebugStringA("[GameHost::LoadPlace] ERROR: No Workspace!\n");
                    return false;
                }

                OutputDebugStringA("[GameHost::LoadPlace] Deserializing binary content...\n");
                RBX::SerializerBinary::deserialize(file, workspace);
                OutputDebugStringA("[GameHost::LoadPlace] Successfully loaded place!\n");
            }

            return true;
        }
        catch (const std::exception& e)
        {
            char buf[512];
            sprintf_s(buf, sizeof(buf), "[GameHost::LoadPlace] Exception: %s\n", e.what());
            OutputDebugStringA(buf);
            return false;
        }
        catch (...)
        {
            OutputDebugStringA("[GameHost::LoadPlace] Unknown exception!\n");
            return false;
        }
    }

    bool GameHost::LoadPlaceFromBytes(const unsigned char* data, size_t length)
    {
        if (!m_game)
        {
            OutputDebugStringA("[GameHost::LoadPlaceFromBytes] ERROR: Game not initialized!\n");
            return false;
        }

        boost::shared_ptr<RBX::DataModel> dm = m_game->getDataModel();
        if (!dm)
        {
            OutputDebugStringA("[GameHost::LoadPlaceFromBytes] ERROR: No DataModel!\n");
            return false;
        }

        if (!data || length == 0)
        {
            OutputDebugStringA("[GameHost::LoadPlaceFromBytes] ERROR: No data!\n");
            return false;
        }

        try
        {
            char buf[256];
            sprintf_s(buf, sizeof(buf), "[GameHost::LoadPlaceFromBytes] Loading %u bytes...\n", (unsigned int)length);
            OutputDebugStringA(buf);

            // Create an in-memory stream from the byte array
            std::string dataStr(reinterpret_cast<const char*>(data), length);
            std::istringstream stream(dataStr, std::ios::binary);

            // Deserialize into the workspace
            {
                RBX::DataModel::LegacyLock lock(dm.get(), RBX::DataModelJob::Write);
                
                // Get or create workspace
                RBX::Workspace* workspace = dm->getWorkspace();
                if (!workspace)
                {
                    OutputDebugStringA("[GameHost::LoadPlaceFromBytes] ERROR: No Workspace!\n");
                    return false;
                }

                OutputDebugStringA("[GameHost::LoadPlaceFromBytes] Deserializing binary content...\n");
                RBX::SerializerBinary::deserialize(stream, workspace);
                OutputDebugStringA("[GameHost::LoadPlaceFromBytes] Successfully loaded place!\n");
                
                // Start core scripts and game simulation (like Xbox does)
                // This initializes Lighting, RunService, and other critical systems
                dm->startCoreScripts(false, ""); // No custom starter script for WP
                
                // Start the RunService to enable simulation
                if (RBX::RunService* runService = dm->create<RBX::RunService>())
                {
                    runService->run();
                    OutputDebugStringA("[GameHost::LoadPlaceFromBytes] RunService started\n");
                }
                
                // Notify that the game has loaded
                dm->gameLoaded();
                OutputDebugStringA("[GameHost::LoadPlaceFromBytes] gameLoaded() called\n");
                
                // DIAGNOSTIC: Count objects in workspace
                char diagBuf[512];
                int childCount = workspace->numChildren();
                sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes] Workspace has %d children\n", childCount);
                OutputDebugStringA(diagBuf);
                
                // List the children (up to 20 to avoid spam) and count Part instances
                int idx = 0;
                int partCount = 0;
                workspace->visitChildren([&diagBuf, &idx, &partCount](boost::shared_ptr<RBX::Instance> child) {
                    if (child && idx < 20)
                    {
                        const std::string& className = child->getClassNameStr();
                        sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes]   Child %d: %s (ClassName: %s)\n", 
                                 idx, child->getName().c_str(), className.c_str());
                        OutputDebugStringA(diagBuf);
                        
                        // Count renderable parts
                        if (className == "Part" || className == "WedgePart" || className == "SpawnLocation" || 
                            className == "TrussPart" || className == "MeshPart" || className == "UnionOperation")
                        {
                            partCount++;
                        }
                        idx++;
                    }
                });
                
                sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes] Total renderable parts found: %d\n", partCount);
                OutputDebugStringA(diagBuf);
                
                // Check for Sky in Lighting
                if (RBX::Lighting* lighting = dm->find<RBX::Lighting>())
                {
                    int lightingChildren = lighting->numChildren();
                    sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes] Lighting has %d children\n", lightingChildren);
                    OutputDebugStringA(diagBuf);
                    
                    // Check if there's a Sky instance
                    lighting->visitChildren([&diagBuf](boost::shared_ptr<RBX::Instance> child) {
                        if (child)
                        {
                            sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes]   Lighting child: %s (ClassName: %s)\n", 
                                     child->getName().c_str(), child->getClassNameStr().c_str());
                            OutputDebugStringA(diagBuf);
                        }
                    });
                }
                
                // Check camera
                RBX::Camera* camera = workspace->getCamera();
                if (camera)
                {
                    sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes] Camera exists: %s\n", camera->getName().c_str());
                    OutputDebugStringA(diagBuf);
                    
                    // Log camera position and focus
                    RBX::CoordinateFrame camCFrame = camera->getCameraCoordinateFrame();
                    RBX::Vector3 camPos = camCFrame.translation;
                    RBX::CoordinateFrame camFocus = camera->getCameraFocus();
                    RBX::Vector3 focusPos = camFocus.translation;
                    
                    sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes] Camera position: (%.2f, %.2f, %.2f)\n",
                             camPos.x, camPos.y, camPos.z);
                    OutputDebugStringA(diagBuf);
                    sprintf_s(diagBuf, sizeof(diagBuf), "[GameHost::LoadPlaceFromBytes] Camera focus: (%.2f, %.2f, %.2f)\n",
                             focusPos.x, focusPos.y, focusPos.z);
                    OutputDebugStringA(diagBuf);
                }
                else
                {
                    OutputDebugStringA("[GameHost::LoadPlaceFromBytes] WARNING: No Camera!\n");
                }
            }

            return true;
        }
        catch (const std::runtime_error& e)
        {
            char buf[512];
            sprintf_s(buf, sizeof(buf), "[GameHost::LoadPlaceFromBytes] std::runtime_error: %s\n", e.what());
            OutputDebugStringA(buf);
            
            // Check if file starts with binary magic header
            if (length > 8)
            {
                std::string header(reinterpret_cast<const char*>(data), 8);
                sprintf_s(buf, sizeof(buf), "[GameHost::LoadPlaceFromBytes] File header: '%s' (hex: %02X %02X %02X %02X %02X %02X %02X %02X)\n",
                         header.c_str(), data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7]);
                OutputDebugStringA(buf);
            }
            return false;
        }
        catch (const std::exception& e)
        {
            char buf[512];
            sprintf_s(buf, sizeof(buf), "[GameHost::LoadPlaceFromBytes] std::exception: %s\n", e.what());
            OutputDebugStringA(buf);
            return false;
        }
        catch (...)
        {
            OutputDebugStringA("[GameHost::LoadPlaceFromBytes] Unknown exception!\n");
            return false;
        }
    }

    void GameHost::Shutdown()
    {
        if (m_game)
        {
            m_game->shutdown();
            m_game.reset();
        }
    }
}
