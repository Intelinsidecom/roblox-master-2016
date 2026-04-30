
#include "stdafx.h"

int __cdecl IgnoreEarlyMFCReportHook(int nReportType, char* szMsg, int* pnRet)
{
	if (filtering)
	{
		if (strcmp(szMsg, "Object dump complete.\n") == 0)
		{
			filtering = false;
		}
		return 1;
	}
	else
	{
		if (strcmp(szMsg, "Detected memory leaks!\n") == 0)
		{
			filtering = true;
			return 1;
		}
	}
	
	return 0;
}


int __cdecl RbxDebug_InitMemTrackingImpl(void)
{
	int nOldFlags = 0;
	
	if (!bInitialized)
	{
		nOldFlags = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
		_CrtSetDbgFlag(nOldFlags & 0xffffffdf);
		_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, IgnoreEarlyMFCReportHook);
		bInitialized = true;
	}
	
	return nOldFlags;
}

void __cdecl RbxDebug_ThisModuleDoneImpl(void)
{
}

void __cdecl RbxDebug_ShutdownMemTracking(void)
{
	if (bInitialized)
	{
		_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, IgnoreEarlyMFCReportHook);
		bInitialized = false;
		_CrtDumpMemoryLeaks();
	}
}
