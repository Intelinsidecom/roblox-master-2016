#pragma once

#if defined(RBX_PLATFORM_UWP)
#define _WIN32_WINNT 0x0A00
#define NTDDI_VERSION 0x0A000000
#include <windows.h>
#endif

#if defined(_WIN32) && !defined(RBX_PLATFORM_DURANGO) && !defined(RBX_PLATFORM_UWP)
#include <windows.h>
#include <wincrypt.h>
#endif

#include <string>

namespace RBX
{
	class Crypt
	{
#if defined (_WIN32) && !defined(RBX_PLATFORM_DURANGO) && !defined(RBX_PLATFORM_UWP)
	HCRYPTPROV context;
	HCRYPTKEY key;
#endif
	public:
		Crypt();
		~Crypt();
		void verifySignatureBase64(std::string message, std::string signatureBase64);
	};
}


