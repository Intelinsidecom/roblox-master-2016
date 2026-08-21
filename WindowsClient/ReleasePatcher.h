#pragma once

#if defined(_MSC_VER) && _MSC_VER < 1700
#define ROBLOX_CODE_SEG_ZERO
#else
#define ROBLOX_CODE_SEG_ZERO __declspec(code_seg(".zero"))
#endif

namespace RBX{ namespace Security {

    ROBLOX_CODE_SEG_ZERO bool patchMain();
}
}

