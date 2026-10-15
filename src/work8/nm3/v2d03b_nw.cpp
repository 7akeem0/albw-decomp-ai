#include "ds3.h"
struct S2D03 { char pad[0x2d7]; u8 b2D7; char g1[0x3d0-0x2d8]; Vec3 v3D0; Vec3 v3DC; char g2[0x420-0x3e8]; char c420[0x40]; char g3[0x4cc-0x460]; s32 m4CC; u8 b4D0; };
extern "C" void func_00115C54(Vec3*, const Vec3*, const Vec3*);
extern "C"  void func_00663A98(void*, s32);
void func_002D03D4(S2D03* p) {
    Vec3* d = &p->v3D0;
    func_00115C54(d, d, &p->v3DC);
    s32 c = --p->m4CC;
    if (c == 0) {
        if (p->b4D0) { p->b2D7 = 1; return; }
        func_00663A98(p->c420, 1);
    }
}

