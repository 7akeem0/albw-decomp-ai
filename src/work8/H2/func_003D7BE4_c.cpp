#include "range.h"
extern "C" s32 func_003D9974(void*, u32, u32);
extern "C" u16* func_003DA0A0(u32);
struct Obj {
    s32 f(void* a, u32 k);
};
s32 Obj::f(void* a, u32 k) {
    if (func_003D9974(a, k, k) == 0) return 2;
    u16* arr = func_003DA0A0(k);
    s32 i = k;
    if (arr != 0) {
        i = 0;
        do {
            u16 v = arr[i + 1];
            if (v == 0) break;
            if (func_003D9974(a, v, v) == 0) return 2;
            i++;
        } while (i < 3);
    }
    return 0;
}
