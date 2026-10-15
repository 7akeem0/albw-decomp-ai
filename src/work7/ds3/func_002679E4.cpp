#include "ds3.h"
extern "C" const Vec3 bss_00740050;
struct S2679 { char pad[0x3d0]; Vec3 v3D0; char g[0x3e0-0x3dc]; f32 m3E0; };
extern "C" void func_00115C54(Vec3*, const Vec3*, const Vec3*);
extern "C" void func_004FABDC(S2679*, s32, s32, s32);
void func_002679E4(S2679* p) {
    Vec3* d = &p->v3D0;
    func_00115C54(d, d, &bss_00740050);
    p->m3E0 = -1.2f;
    func_004FABDC(p, 9, -1, 0);
}
