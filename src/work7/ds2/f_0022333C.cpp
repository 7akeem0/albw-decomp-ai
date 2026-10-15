#include "ds2.h"

extern void func_004FB4E0(void*, f32);
extern void func_004FABDC(void*, int, int, int);

struct Obj22333C {
    char pad0[0x3dc];
    f32 m3DC;
    char pad3e0[0x3e4 - 0x3e0];
    f32 m3E4;
};

void func_0022333C(Obj22333C* self, u32 a) {
    u32 v = a & 0xff;
    if (v == 0x1e || (v - 0xe) <= 3) {
        self->m3E4 = 0.0f;
        self->m3DC = 0.0f;
        func_004FB4E0(self, 1.0f);
        func_004FABDC(self, 6, -1, 0);
    }
}
