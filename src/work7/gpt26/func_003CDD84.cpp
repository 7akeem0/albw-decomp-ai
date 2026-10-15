#include "range.h"
extern u32 func_003DB654(u32, u32, u32, u32);
extern u32 func_0010C1B8(u32);
u32 func_003CDD84(u32 a, u32 b, u32 c, u32 d) {
    u32 failed = func_003DB654(a,b,c,d) >> 31;
    if (failed) return func_0010C1B8(failed);
    return failed;
}
