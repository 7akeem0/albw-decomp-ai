#include "h7.h"

struct Sub005466E8 {
    char _0[0x168];
    u8 m168;
    char _169[0x324 - 0x169];
    u8 m324;
};
struct Obj005466E8 {
    char _0[0x40];
    u32 m40;
    char _44[0x48 - 0x44];
    u32 m48;
    char _4c[0x50 - 0x4c];
    Sub005466E8* m50;
};

s32 func_0054CB00(u32 a, u32 b, u32 c, u32 d);

s32 func_005466E8(Obj005466E8* self, u32 a, u32 b) {
    s32 ret = 0;
    Sub005466E8* s = self->m50;
    if ((s->m324 & 1) == 0) {
        if ((s->m324 & 8) == 0) {
            if (s->m168 == 0) return ret;
        }
    }
    s32 r = func_0054CB00(self->m48, a, b, self->m40);
    if (r != -1) {
        if (r == 0) ret = 42;
    }
    return ret;
}
