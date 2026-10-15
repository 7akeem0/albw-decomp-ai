#include "ds2.h"

extern void func_004FABDC(void*, int, int, int);
extern void func_004FB4E0(void*, f32);

struct Obj22BC68 {
    char pad0[0x3dc];
    f32 m3DC, m3E0, m3E4;
    char pad3e8[0x59c - 0x3e8];
    struct BF{u32 v;void set(u32 m){v|=m;}} m59C;
};

void func_0022BC68(Obj22BC68* self) {
    self->m59C.set(1);
    self->m3DC = 0.0f;
    self->m3E0 = 0.0f;
    self->m3E4 = 0.0f;
    func_004FABDC(self, 9, 0, 0);
    func_004FB4E0(self, 1.0f);
}
