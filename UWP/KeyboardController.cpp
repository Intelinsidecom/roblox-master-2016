#include "pch.h"
#include "KeyboardController.h"

#include <boost/bind.hpp>

#include "FunctionMarshaller.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/UserInputService.h"
#include "v8tree/Service.h"

using namespace Platform;

namespace
{
std::string Utf16ToUtf8(const wchar_t* wide, size_t len)
{
    if (len == 0)
        return std::string();

    int size = ::WideCharToMultiByte(CP_UTF8, 0, wide, static_cast<int>(len), NULL, 0, NULL, NULL);
    if (size <= 0)
        return std::string();

    std::string out(static_cast<size_t>(size), '\0');
    ::WideCharToMultiByte(CP_UTF8, 0, wide, static_cast<int>(len), &out[0], size, NULL, NULL);
    return out;
}

std::wstring Utf8ToUtf16(const std::string& utf8)
{
    if (utf8.empty())
        return std::wstring();

    int size = ::MultiByteToWideChar(CP_UTF8, 0, utf8.c_str(), static_cast<int>(utf8.size()), NULL, 0);
    if (size <= 0)
        return std::wstring(utf8.begin(), utf8.end());

    std::wstring out(static_cast<size_t>(size), L'\0');
    ::MultiByteToWideChar(CP_UTF8, 0, utf8.c_str(), static_cast<int>(utf8.size()), &out[0], size);
    return out;
}
} // namespace

KeyboardController::KeyboardController()
    : m_dataModel(NULL)
    , m_isShuttingDown(false)
    , m_initialized(false)
    , m_committing(false)
{
}

KeyboardController::~KeyboardController()
{
    shutdown();
}

KeyboardController& KeyboardController::GetInstance()
{
    static KeyboardController instance;
    return instance;
}

void KeyboardController::initialize(RBX::DataModel* dataModel)
{
    if (m_isShuttingDown || m_initialized || !dataModel)
        return;

    m_dataModel = dataModel;
    m_initialized = true;

    // Bind the focus signals on the DataModel thread (they fire there when a
    // Roblox TextBox gains/loses focus).
    dataModel->submitTask(boost::bind(&KeyboardController::bindToDataModel, this), RBX::DataModelJob::Write);
}

void KeyboardController::shutdown()
{
    m_isShuttingDown = true;

    m_textBoxFocusGainedConnection.disconnect();
    m_textBoxFocusReleasedConnection.disconnect();

    {
        boost::mutex::scoped_lock lock(m_mutex);
        if (m_currentTextBox.lock())
        {
            showTextInputUi(false, L"");
        }
        m_currentTextBox.reset();
    }

    m_showTextInputHandler = std::function<void(bool, std::wstring)>();
    m_dataModel = NULL;
    m_initialized = false;
}

void KeyboardController::bindToDataModel()
{
    if (RBX::UserInputService* inputService = getUserInputService())
    {
        m_textBoxFocusGainedConnection = inputService->textBoxGainFocus.connect(
            boost::bind(&KeyboardController::onTextBoxFocusGained, this, _1));
        m_textBoxFocusReleasedConnection = inputService->textBoxReleaseFocus.connect(
            boost::bind(&KeyboardController::onTextBoxFocusReleased, this, _1));
    }
}

RBX::UserInputService* KeyboardController::getUserInputService()
{
    if (RBX::DataModel* dataModel = m_dataModel)
    {
        return RBX::ServiceProvider::find<RBX::UserInputService>(dataModel);
    }
    return NULL;
}

void KeyboardController::setShowTextInputHandler(std::function<void(bool, std::wstring)> handler)
{
    m_showTextInputHandler = handler;
}

void KeyboardController::onTextBoxFocusGained(shared_ptr<RBX::Instance> textBox)
{
    if (m_isShuttingDown)
        return;

    shared_ptr<RBX::TextBox> castTextBox = boost::dynamic_pointer_cast<RBX::TextBox>(textBox);
    if (!castTextBox)
        return;

    {
        boost::mutex::scoped_lock lock(m_mutex);
        m_currentTextBox = castTextBox;
    }
    m_committing.store(false);

    std::wstring initial = Utf8ToUtf16(castTextBox->getBufferedText());

    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (marshaller)
    {
        marshaller->Submit([this, initial]()
        {
            if (m_isShuttingDown)
                return;
            showTextInputUi(true, initial);
        });
    }
}

void KeyboardController::onTextBoxFocusReleased(shared_ptr<RBX::Instance> /*textBox*/)
{
    if (m_isShuttingDown)
        return;

    {
        boost::mutex::scoped_lock lock(m_mutex);
        m_currentTextBox.reset();
    }
    m_committing.store(false);

    RBX::FunctionMarshaller* marshaller = RBX::FunctionMarshaller::GetWindow();
    if (marshaller)
    {
        marshaller->Submit([this]()
        {
            if (m_isShuttingDown)
                return;
            showTextInputUi(false, L"");
        });
    }
}

void KeyboardController::showTextInputUi(bool show, std::wstring initialText)
{
    if (m_showTextInputHandler)
        m_showTextInputHandler(show, initialText);
}

void KeyboardController::onTextChanged(Platform::String^ text)
{
    if (m_isShuttingDown)
        return;

    shared_ptr<RBX::TextBox> currentTextBox;
    {
        boost::mutex::scoped_lock lock(m_mutex);
        currentTextBox = m_currentTextBox.lock();
    }

    if (!currentTextBox)
        return;

    RBX::DataModel* dataModel = m_dataModel;
    if (!dataModel)
        return;

    std::string utf8 = Utf16ToUtf8(text->Data(), text->Length());
    const int cursorPos = static_cast<int>(utf8.size());

    // The TextBox must be touched on the DataModel thread.
    dataModel->submitTask([currentTextBox, utf8, cursorPos](RBX::DataModel* /*dm*/)
    {
        currentTextBox->setBufferedText(utf8, cursorPos);
    }, RBX::DataModelJob::Write);
}

void KeyboardController::onTextCommitted(Platform::String^ text, bool shouldCommit)
{
    if (m_isShuttingDown)
        return;

    bool expected = false;
    if (!m_committing.compare_exchange_strong(expected, true))
        return;

    std::string utf8 = Utf16ToUtf8(text->Data(), text->Length());

    // textboxDidFinishEditing is mutex-protected in the engine, so it is safe to
    // call from the UI thread (the iOS/Android ports do the same). It queues the
    // finish so the engine commits the text and fires the TextBox's FocusLost.
    if (RBX::UserInputService* inputService = getUserInputService())
    {
        inputService->textboxDidFinishEditing(utf8.c_str(), shouldCommit);
    }

    {
        boost::mutex::scoped_lock lock(m_mutex);
        m_currentTextBox.reset();
    }
}
