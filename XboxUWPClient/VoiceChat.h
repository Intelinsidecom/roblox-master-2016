#pragma once

#include <boost/enable_shared_from_this.hpp>
#include <collection.h>

#include "VoiceChatBase.h"

namespace RBX
{
    class VoiceChat : public boost::enable_shared_from_this<VoiceChat>, public VoiceChatBase
    {
    private: 
        VoiceChat(unsigned char sessionConsoleId);
    public:
        static boost::shared_ptr<VoiceChatBase> create(unsigned char sessionConsoleId)
        {
            boost::shared_ptr<VoiceChat> sp(new VoiceChat(sessionConsoleId));
            sp->init();
            return sp;
        }
        virtual ~VoiceChat();

        // local user 
                
        virtual void addLocalUserToChannel(uint8 channelIndex, Microsoft::Xbox::Services::System::XboxLiveUser^ user);
        virtual void removeLocalUserFromChannel();

        // remote users
        virtual void addConnections(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember^>^ members);
        virtual void removeConnections(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember^>^ members);
        void onMeshConnectionAdded(Microsoft::Xbox::Samples::NetworkMesh::MeshConnection^ meshConnection);
        void onMeshConnectionRemoved(Microsoft::Xbox::Samples::NetworkMesh::MeshConnection^ meshConnection);

        // remote users
        virtual void multiplayerUserAdded(Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember^ member);
        virtual void multiplayerUserRemoved(Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember^ member);

        // receive/send
        void onIncomingChatMessage(Windows::Storage::Streams::IBuffer^ chatMessage, Platform::Object^ uniqueRemoteConsoleIdentifier);
        void onOutgoingChatPacketReady(Microsoft::Xbox::GameChat::ChatPacketEventArgs^ args);
        void onDebugMessageReceived(Microsoft::Xbox::GameChat::DebugMessageEventArgs^ args);

        // muting
        virtual void setMuteState(bool muted, Microsoft::Xbox::GameChat::GameChatUser^ chatUser);
        virtual void muteAll();
        virtual void unmuteAll();

    private:

        void init();

        typedef Platform::Box<unsigned int> ConsoleId;

        Microsoft::Xbox::GameChat::ChatManager^ chatManager;

        Microsoft::Xbox::Services::System::XboxLiveUser^ currentUser;
        
        void headsetConnected(Microsoft::Xbox::Services::System::XboxLiveUser^ user);
        void headsetDisconnected();
        bool localUserHasHeadset;

        // This is sample that we are not supposed to use... YOLO :D
        Microsoft::Xbox::Samples::NetworkMesh::MeshManager^ networkMesh;

        Windows::Foundation::EventRegistrationToken onDebugMessageEvtToken;
        Windows::Foundation::EventRegistrationToken onOutgoingChatPacketReadyEvtToken;
        Windows::Foundation::EventRegistrationToken onCompareUniqueConsoleIdentifiersEvtToken;
        // UWP replacement for the XDK CoreApplication::ResourceAvailabilityChanged token
        Windows::Foundation::EventRegistrationToken onSuspendingEvtToken;
        Windows::Foundation::EventRegistrationToken onResumingEvtToken;

        Windows::Foundation::EventRegistrationToken onAudioAdded;
        Windows::Foundation::EventRegistrationToken onAudioRemoved;

        Windows::Foundation::EventRegistrationToken onChatMessageEvtToken;
        Windows::Foundation::EventRegistrationToken onMeshConnectionAddedEvtToken;
        Windows::Foundation::EventRegistrationToken onDisconnectedEvtToken;
    };
}