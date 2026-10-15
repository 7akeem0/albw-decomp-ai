#include "ipc_common.h"

typedef float f32;

struct IV0 {
    virtual void v0();
};

struct F10C7F8 {
    u8 pad0[4];
    f32 m4;
    f32 m8;
    f32 mC;
    u32 m10;
    IV0* m14;
};

void func_0010C7F8(F10C7F8* p, f32 v, u32 n) {
    f32 old = p->m4;
    if (old == v) {
        p->m10 = 0;
        return;
    }
    p->m8 = v;
    p->m10 = n;
    if (n != 0) {
        p->mC = (old - v) / (f32)n;
        return;
    }
    p->m4 = v;
    p->mC = 0.0f;
    if (p->m14) {
        p->m14->v0();
    }
}
