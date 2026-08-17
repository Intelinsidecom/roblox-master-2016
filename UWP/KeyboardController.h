#pragma once

#include <atomic>
#include <functional>
#include <string>

#include <boost/thread/mutex.hpp>
#include <boost/smart_ptr/weak_ptr.hpp>

#include "rbx/signal.h"
#include "v8datamodel/TextBox.h"

namespace RBX
{
    class DataModel;
    class UserInputService;
    class Instance;
}

// Bridges the on-screen (touch) keyboard into the engine's focused TextBox,
// mirroring what the iOS/Android ports do. The engine signals when a Roblox
// TextBox gains/loses focus; this controller forwards that to the XAML layer
// (GameView), which shows/hides the InputPane over a native TextBox. Text typed
// there is pushed back into the engine so chat, report-abuse, search, etc. work
// on touch devices.
class KeyboardController
{
public:
    static KeyboardController& GetInstance();

    void initialize(RBX::DataModel* dataModel);
    void shutdown();

    // Installed by the XAML layer (GameView). Invoked on the UI thread whenever
    // the engine's focused TextBox changes and the touch keyboard should be
    // shown/hidden.
    void setShowTextInputHandler(std::function<void(bool show, std::wstring initialText)> handler);

    // Called by the XAML layer on the UI thread while the user types. Pushes the
    // live text into the engine's focused TextBox (rendered in-game when the
    // DisplayTextBoxTextWhileTypingMobile flag is enabled).
    void onTextChanged(Platform::String^ text);

    // Called by the XAML layer on the UI thread when the user commits (Enter) or
    // editing ends (focus lost). Completes editing in the engine, firing the
    // TextBox's FocusLost event so the Lua-side chat/report flows finalize.
    void onTextCommitted(Platform::String^ text, bool shouldCommit);

private:
    KeyboardController();
    ~KeyboardController();

    void bindToDataModel();
    void onTextBoxFocusGained(shared_ptr<RBX::Instance> textBox);
    void onTextBoxFocusReleased(shared_ptr<RBX::Instance> textBox);
    void showTextInputUi(bool show, std::wstring initialText);
    RBX::UserInputService* getUserInputService();

    RBX::DataModel* m_dataModel;
    std::atomic<bool> m_isShuttingDown;
    bool m_initialized;

    rbx::signals::scoped_connection m_textBoxFocusGainedConnection;
    rbx::signals::scoped_connection m_textBoxFocusReleasedConnection;

    boost::weak_ptr<RBX::TextBox> m_currentTextBox;
    std::atomic<bool> m_committing;
    boost::mutex m_mutex;

    std::function<void(bool, std::wstring)> m_showTextInputHandler;
};
