#include "pch.h"
#include "GameParameters.h"

using namespace Roblox::Controls;

GameParameters::GameParameters()
    : m_joinRequestType(0)
    , m_placeID(nullptr)
    , m_userID(nullptr)
    , m_instanceID(nullptr)
    , m_accessCode(nullptr)
    , m_partyGuid(nullptr)
    , m_browserTrackerID(nullptr)
    , m_isPartyLeader(false)
{
}

int GameParameters::joinRequestType::get() { return m_joinRequestType; }
void GameParameters::joinRequestType::set(int value) { m_joinRequestType = value; }

Platform::String^ GameParameters::placeID::get() { return m_placeID; }
void GameParameters::placeID::set(Platform::String^ value) { m_placeID = value; }

Platform::String^ GameParameters::userID::get() { return m_userID; }
void GameParameters::userID::set(Platform::String^ value) { m_userID = value; }

Platform::String^ GameParameters::instanceID::get() { return m_instanceID; }
void GameParameters::instanceID::set(Platform::String^ value) { m_instanceID = value; }

Platform::String^ GameParameters::accessCode::get() { return m_accessCode; }
void GameParameters::accessCode::set(Platform::String^ value) { m_accessCode = value; }

Platform::String^ GameParameters::partyGuid::get() { return m_partyGuid; }
void GameParameters::partyGuid::set(Platform::String^ value) { m_partyGuid = value; }

Platform::String^ GameParameters::browserTrackerID::get() { return m_browserTrackerID; }
void GameParameters::browserTrackerID::set(Platform::String^ value) { m_browserTrackerID = value; }

bool GameParameters::isPartyLeader::get() { return m_isPartyLeader; }
void GameParameters::isPartyLeader::set(bool value) { m_isPartyLeader = value; }
