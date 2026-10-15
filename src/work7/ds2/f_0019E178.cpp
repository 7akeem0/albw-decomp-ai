#include "ds2.h"

extern s32 func_0058AB74(void*);
extern void func_004FC07C(void*, int, int, int);
extern void func_004FB4E0(void*, f32);

struct Obj19E178 {
    char pad0[0x3dc];
    f32 m3DC, m3E0, m3E4;
};

void func_0019E178(Obj19E178* self) {
    if (func_0058AB74(self) == 2) func_004FC07C(self, 0, 0, 0);
    else func_004FC07C(self, 0, -1, 0);
    func_004FB4E0(self, 2.0f);
    self->m3DC = 0.0f;
    self->m3E0 = 0.0f;
    self->m3E4 = 0.0f;
}
