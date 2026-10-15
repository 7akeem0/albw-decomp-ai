#include "ds3.h"
struct S2D06 { char pad[0x3dc]; f32 f3DC, f3E0, f3E4; char g[0x444-0x3e8]; void* m444; char g2[0x44c-0x448]; void* m44C; char g3[0x4b1-0x450]; u8 b4B1; };
extern "C" void func_004CF478(void*, s32, s32);
extern "C" void func_00151148(void*, s32);
void func_002D0648(S2D06* p) {
    func_004CF478(p->m444, 0, 0);
    func_00151148(p->m44C, 0);
    u8 z = 0; p->b4B1 = z;
    f32 fz = 0.0f; p->f3DC = fz; p->f3E0 = fz; p->f3E4 = fz;
}
