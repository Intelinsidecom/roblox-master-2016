#pragma once

#if defined(RBX_PLATFORM_DURANGO)
#   include <d3d11_x.h>
#   include <D3Dcompiler_x.h>
#   include <xdk.h>
#elif defined(RBX_PLATFORM_UWP)
#   include <windows.h>
#   include <D3D11.h>
#   include <D3Dcompiler.h>
#else
#   include <D3D11.h>
#   include <D3Dcompiler.h>
#endif
