#include "ds2.h"
struct Vec3 { f32 x, y, z; };
Vec3* func_00559B54(void*);
u32 func_00521064(void*);
u32 func_00520EE4(void*);
 void func_0065C310(void*, u32);

struct ThisCD {
    char pad0[0x3dc];
    Vec3 v;            // 0x3dc
    char pad1[0x4d4 - 0x3e8];
    char m4d4[1];      // 0x4d4
    char pad2[0x4f8 - 0x4d5];
    u8 m4f8;           // 0x4f8
};

void func_001CD6C4(ThisCD* t) {
    Vec3* dst = (Vec3*)((char*)t + 0x3dc);
    *dst = *func_00559B54(t);
    if (func_00521064(t) == 0 && t->m4f8) {
        func_0065C310((char*)t + 0x4d4, 1);
        return;
    }
    if (func_00520EE4(t)) {
        func_0065C310((char*)t + 0x4d4, 5);
    }
}
