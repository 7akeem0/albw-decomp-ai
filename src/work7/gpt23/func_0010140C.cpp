#include "range.h"
extern "C" u32 func_00104368(u32);
extern "C" void func_0010140C(u32 arg) {
    u32 result = func_00104368(arg);
    if ((s32)(result & 0x80000000u) < 0)
        diagnoseResult(result,__current_pc());
}
