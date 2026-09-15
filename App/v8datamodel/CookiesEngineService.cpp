#include "stdafx.h"

#include "v8datamodel/CookiesEngineService.h"
#include "CookiesEngine.h"
#include "format_string.h"

namespace RBX
{
	const char* const sCookiesService = "CookiesService";

    REFLECTION_BEGIN();
	static Reflection::BoundFuncDesc<CookiesService, void(std::string, std::string)> setValue(&CookiesService::SetValue, "SetCookieValue", "key", "value", Security::Roblox);
	static Reflection::BoundFuncDesc<CookiesService, std::string(std::string)> getValue(&CookiesService::GetValue, "GetCookieValue", "key", Security::Roblox);
	static Reflection::BoundFuncDesc<CookiesService, void(std::string)> deleteValue(&CookiesService::DeleteValue, "DeleteCookieValue", "key", Security::Roblox);
    REFLECTION_END();


	static void sleep(int duration)
	{
#if defined(RBX_PLATFORM_WIN_PHONE)
		HANDLE evt = ::CreateEventExW(NULL, NULL, 0, EVENT_ALL_ACCESS);
		if (evt)
		{
			::WaitForSingleObjectEx(evt, duration < 0 ? 0 : static_cast<DWORD>(duration), FALSE);
			::CloseHandle(evt);
	}
#elif _WIN32
		Sleep(duration);
#else
		::usleep(1000*duration);
#endif
		
	}
	
	CookiesService::CookiesService()
	{
		setName(sCookiesService);
		path = convert_w2s(CookiesEngine::getCookiesFilePath());
	}

	void CookiesService::SetValue(std::string key, std::string value)
	{
		CookiesEngine engine(convert_s2w(path));
		engine.SetValue(key, value);
	}

	std::string CookiesService::GetValue(std::string key)
	{
		CookiesEngine engine(convert_s2w(path));
		
        bool valid = false;
        int result = 0;
        std::string value = engine.GetValue(key, &result, &valid);
        if (result == 0 && valid)
            return value;
        
		return std::string("");
	}

	void CookiesService::DeleteValue(std::string key)
	{
		CookiesEngine engine(convert_s2w(path));
        engine.DeleteValue(key);
	}
}
