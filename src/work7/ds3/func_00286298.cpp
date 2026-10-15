#include "ds3.h"
struct S2862 { char pad[0x3dc]; f32 f3DC, f3E0, f3E4; char g1[0x434-0x3e8]; void* m434; char g2[0x458-0x438]; void* m458; };
extern "C" void func_004CF478(void*, s32, s32);
void func_00286298(S2862* p) {
    p->f3DC = 0.0f; p->f3E0 = 0.0f; p->f3E4 = 0.0f;
    func_004CF478(p->m458, 0, 0);
    Vec3* v = (Vec3*)((char*)p->m434 + 0x58);
    v->x = 1.0f; v->y = 1.0f; v->z = 1.0f;
}
