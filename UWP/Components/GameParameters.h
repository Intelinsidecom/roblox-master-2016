#pragma once

namespace Roblox
{
    namespace Controls
    {
        public ref class GameParameters sealed
        {
        public:
            GameParameters();

            property int joinRequestType
            {
                int get();
                void set(int value);
            }

            property Platform::String^ placeID
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Platform::String^ userID
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Platform::String^ instanceID
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Platform::String^ accessCode
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Platform::String^ partyGuid
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Platform::String^ browserTrackerID
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property bool isPartyLeader
            {
                bool get();
                void set(bool value);
            }

        private:
            int m_joinRequestType;
            Platform::String^ m_placeID;
            Platform::String^ m_userID;
            Platform::String^ m_instanceID;
            Platform::String^ m_accessCode;
            Platform::String^ m_partyGuid;
            Platform::String^ m_browserTrackerID;
            bool m_isPartyLeader;
        };
    }
}
