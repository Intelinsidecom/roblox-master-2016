#pragma once

// Xbox/Durango XDK Version Selection
// ====================================
// Set to 1 for XDK 2015 (with RealTimeActivity APIs)
// Set to 0 for XDK 2016+ (polling-based approach)
#ifndef USE_XDK_2015_RTA
#define USE_XDK_2015_RTA 0
#endif

// Xbox/Durango XDK Compatibility Fixes
// ====================================

// Define target architecture for XDK headers
// This must be defined before including any Windows/XDK headers
#ifndef _AMD64_
#define _AMD64_
#endif

// Standard Xbox/Durango Headers
#include <xdk.h>
#include <mmdeviceapi.h>

#ifndef NTDDI_VERSION
#define NTDDI_VERSION 0x0A000006
#endif

// WRL and PPL
#include <wrl.h>
#include <ppltasks.h>

// Standard C/C++
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <io.h>
#include <thread>
#include <atomic>
#include <functional>

// Common project headers
#include "XboxService.h"
#include "XboxUtils.h"
