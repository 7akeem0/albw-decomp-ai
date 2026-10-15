#define OBJ1D8_EXTRA void f();
#include "obj1d8.h"
s32 func_0068C690(const Vec3& v);   // angleFromVec
void func_004D7F70(Vec3* v, s32 ang);
// state enter (table ro 0x6A2AAC). 'add r6,sp,#0xc' before getPlayerPos = pointer local out=&d (KB #146);
// 'str r0,[r5,#0x84]' through the this+0x400 base = m484 is a 4-byte STRUCT (Angle), not s32 (98.4% -> MATCH).
void Obj1D8::f() {
    Vec3 dir(0.0f, 0.0f, 50.0f);
    m480 = 10;
    Info43C* i = m43c;
    s8 k = i->m21;
    if (k == 8 || k == 0xb || k == 0xe || k == 0xc || (k == 3 && i->m23 == 2)) {
        m480 = 50;
        m49f = 1;
    }
    if (m438) {
        if (m49e) func_00588C14(this, 0, 1);
        m438 = 0;
    }
    Vec3 d;
    Vec3* out = &d;
    out->setSub(*getPlayerPos(), m3d0);
    m47c = 50.0f;
    func_004D7F70(&dir, func_0068C690(d));
    m484 = Angle(func_0068C690(dir));
}
