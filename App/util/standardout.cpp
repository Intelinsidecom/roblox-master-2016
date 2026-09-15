/* Copyright 2003-2005 ROBLOX Corporation, All Rights Reserved */
#include "stdafx.h"

#include "util/standardout.h"
#include "rbx/Log.h"
#include "RbxFormat.h"

using namespace RBX;

// Xbox 360 diagnostic markers (see Xbox360Client/Stubs.cpp RBXStage).
extern "C" int XexCheckExecutablePrivilege(unsigned long PrivilegeType);
static void __cdecl RBXStage(unsigned long tag)
{
#ifdef RBX_PLATFORM_XBOX360
	XexCheckExecutablePrivilege(tag);
#endif
}

bool StandardOut::allowPrintWarnings = true;

shared_ptr<StandardOut> StandardOut::singleton()
{
	static shared_ptr<StandardOut> standardOut(new StandardOut());
	return standardOut;
}

void StandardOut::print_exception(const boost::function0<void>& f, MessageType type, bool rethrow)
{
	try
	{
		f();
	}
	catch (const RBX::base_exception& e)
	{
		singleton()->print(type, e);
		if (rethrow)
			throw;
	}
}

void StandardOut::printf(MessageType type, const char* format, ...)
{
	va_list arg_list;
	va_start(arg_list, format);
	std::string message = RBX::vformat(format, arg_list);
	va_end(arg_list);
	RBXStage(0xB6); // vformat done
	print(type, message);
}



void StandardOut::print(MessageType type, const std::exception& e)
{
	print(type, e.what());
}



void StandardOut::print(MessageType type, const char* message)
{
	print(type, std::string(message));
}



void StandardOut::print(MessageType type, const std::string& message)
{
	RBXStage(0xA8); // print() entry (Log::current path)
	if (RBX::Log::current())
	{
		switch (type)
		{
		case MESSAGE_ERROR:
			RBX::Log::current()->writeEntry(Log::Error, message.c_str());
			break;
		case MESSAGE_WARNING:
			RBX::Log::current()->writeEntry(Log::Warning, message.c_str());
			break;
		case MESSAGE_INFO:
			RBX::Log::current()->writeEntry(Log::Information, message.c_str());
			break;
		case MESSAGE_OUTPUT:
			// No more than 256 characters please!
			if (message.size() < 256)
				RBX::Log::current()->writeEntry(Log::Information, message.c_str());
			else
				RBX::Log::current()->writeEntry(Log::Information,message.substr(0, 256).c_str());
			break;
		case MESSAGE_SENSITIVE:
			RBX::Log::current()->writeEntry(Log::Warning, message.c_str());
			break;
        default:
            RBX::Log::current()->writeEntry(Log::Error,"Standard Message Out set with incorrect Message Type");
            break;
                
		}
	}

	RBXStage(0xA9); // Log::current() writeEntry done

	if(!StandardOut::allowPrintWarnings && (MESSAGE_WARNING == type))
	{
		// Do nothing.
	}
	else if(!messageOut.empty())
	{
		// Xbox 360 diagnostic: guard against re-entrant emit. A StandardOut
		// print triggered from within messageOut()/Log::writeEntry would
		// re-acquire the non-recursive `sync` boost::mutex and self-deadlock
		// (spinning in RtlEnterCriticalSection(40000618)). Detect same-thread
		// nesting and drop the nested message instead of hanging.
		static bool sInEmit = false;
		if (sInEmit)
		{
			RBXStage(0xA5); // SYNCMUTEX RE-ENTRY (would self-deadlock) — message dropped
		}
		else
		{
			// Xbox 360 diagnostic: print StandardOut's `sync` lock address once,
			// from a NON-nested emit so it is not dropped by the guard.
			static bool syncAddrPrinted = false;
			if (!syncAddrPrinted)
			{
				syncAddrPrinted = true;
				RBXStage(0xA6); // before printing sync address
				StandardOut::singleton()->printf(RBX::MESSAGE_INFO, "DIAG SYNCMUTEX %p", (void*)&sync);
				RBXStage(0xA7); // after printing sync address
			}
			StandardOutMessage msg(type, message.c_str());
			sInEmit = true;
			{
				boost::mutex::scoped_lock lock(sync);
				messageOut(boost::cref(msg));
			}
			sInEmit = false;
			RBXStage(0xB0); // messageOut emit done
		}
	}
}
