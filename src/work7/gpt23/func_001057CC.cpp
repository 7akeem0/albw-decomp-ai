#include "range.h"
struct InitGlobal { u8 reserved; u8 enabled; };
extern InitGlobal data_00714838;
extern "C" u32 func_00108A7C();
extern "C" u32 func_001057CC() {
    if (!data_00714838.enabled) return 0;
    data_00714838.enabled = 0;
    return func_00108A7C();
}
