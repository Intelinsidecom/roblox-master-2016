// AppBridge\LogManager.cpp
// Source path (from PDB): C:\p4v\Branches\WinUWP_dev\Client\AppBridge\LogManager.cpp

#include "pch.h"
#include "LogManager.h"

#include <fstream>
#include <sstream>

#include <boost/filesystem/path.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/unordered_map.hpp>

#include "util/Guid.h"
#include "util/FileSystem.h"
#include "util/standardout.h"
#include "RbxFormat.h"

#include "FastLog.h"
#include "RbxAssert.h"

namespace
{
    std::string getFastLogGuid()
    {
        std::string logGuid;
        RBX::Guid::generateRBXGUID(logGuid);
        logGuid = logGuid.substr(1, 6);
        return logGuid;
    }

    class LogManager
    {
        typedef boost::unordered_map<FLog::Channel, boost::shared_ptr<std::ostream> > Channels;

        boost::filesystem::path kLogPath;
        std::string kLogGuid;
        bool kInitialized;

        Channels channels;
        boost::mutex mutex;

    public:
        void init(const boost::filesystem::path& logPath, const std::string& guid)
        {
            boost::mutex::scoped_lock lock(mutex);
            kLogPath = logPath;
            kLogGuid = guid;
            kInitialized = true;
        }

        void writeEntry(const FLog::Channel& channelId, const char* message)
        {
            RBXASSERT(kInitialized);

            boost::mutex::scoped_lock lock(mutex);

            const Channels::iterator it = channels.find(channelId);
            Channels::mapped_type stream;

            if (channels.end() == it)
            {
                std::stringstream fileNameSS;
                fileNameSS << "log_" << kLogGuid << "_" << channelId << ".txt";
                boost::filesystem::path path = kLogPath / fileNameSS.str();
                RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "Opening log file at %s", path.c_str());
                Channels::value_type pair =
                    std::make_pair(channelId, boost::shared_ptr<std::ostream>(new std::ofstream(path.c_str())));
                if (!pair.second)
                {
                    std::stringstream ss;
                    ss << "Could not open file: " << path.c_str();
                    throw RBX::runtime_error(ss.str().c_str());
                }
                channels.insert(pair);
                stream = pair.second;
            }
            else
            {
                stream = it->second;
            }

            *stream << message << '\n';
        }
    };

    static LogManager channels;

    static void writeLogEntry(FLog::Channel channelId, const char* message)
    {
        channels.writeEntry(channelId, message);
    }
} // namespace

namespace RBX
{
namespace AppBridge
{
namespace LogManager
{
    void Initialize()
    {
        std::string logGuid = getFastLogGuid();
        StandardOut::singleton()->printf(MESSAGE_INFO, "LogManager::kLogGuid = %s", logGuid.c_str());

        boost::filesystem::path logPath = FileSystem::getUserDirectory(true, RBX::DirAppData, "Log");
        StandardOut::singleton()->printf(MESSAGE_INFO, "LogManager::kLogPath = %s", logPath.string().c_str());

        channels.init(logPath, logGuid);

        FLog::SetExternalLogFunc(&writeLogEntry);
        StandardOut::singleton()->printf(MESSAGE_INFO, "FastLog system ready.");
    }

    void Shutdown()
    {
        FLog::SetExternalLogFunc(NULL);
        StandardOut::singleton()->printf(MESSAGE_INFO, "FastLog system offline.");
    }
} // namespace LogManager
} // namespace AppBridge
} // namespace RBX
