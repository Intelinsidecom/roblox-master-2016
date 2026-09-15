#pragma once

extern "C" int XexCheckExecutablePrivilege(unsigned long PrivilegeType);
static inline void RBX_DIAG(unsigned long tag)
{
#ifdef RBX_PLATFORM_XBOX360
	XexCheckExecutablePrivilege(tag);
#endif
}