#include "ds2.h"

extern s32 func_00324A1C(void*);
extern void func_004CF478(void*, u32, u32);
extern void func_00151148(void*, u32);

struct SubE630 { char pad[0x44]; u8 m44; };
struct Obj23E630 {
    char pad0[0x78c];
    s8 m78C;
    char pad78d[0x7b0 - 0x78d];
    SubE630* m7B0;
    char pad7b4[0x7c4 - 0x7b4];
    void* m7C4;
    char pad7c8[0x7cc - 0x7c8];
    void* m7CC;
};

s32 func_0023E630(Obj23E630* self) {
    s32 r = func_00324A1C(self);
    s8 v = self->m78C;
    if (v != 0 && v != 4) {
        self->m7B0->m44 = (u8)r;
        func_004CF478(self->m7C4, r, 0);
        func_00151148(self->m7CC, r);
    }
    return r;
}
