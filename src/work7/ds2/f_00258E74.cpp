#include "ds2.h"

extern void* g_711F50;
extern s32 func_005883F8(void*, u32);
extern u32 func_00587FCC(void*, u32);
extern s32 func_00258F5C(void*, u32, u32, u32);

struct Obj258E74 { char pad0[0x44]; u32 m44; };

s32 func_00258E74(Obj258E74* self, u32 a, u32 b, u32 c) {
    if (func_005883F8(g_711F50, b) != 0) return 0;
    self->m44 = 0;
    u32 r = func_00587FCC(g_711F50, b);
    return func_00258F5C(self, a, r, c);
}
