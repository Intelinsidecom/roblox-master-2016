
#pragma once

#include <windows.h>
#include <crtdbg.h>
#include <stdio.h>
#include <string.h>

extern bool bInitialized;
extern bool filtering;
int __cdecl RbxDebug_InitMemTrackingImpl(void);
void __cdecl RbxDebug_ThisModuleDoneImpl(void);
void __cdecl RbxDebug_ShutdownMemTracking(void);
int __cdecl IgnoreEarlyMFCReportHook(int nReportType, char* szMsg, int* pnRet);
