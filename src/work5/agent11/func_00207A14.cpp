#define EN7_EXTRA void f();
#include "en207.h"
struct Obj5A8;
void func_004FD038(Obj5A8* o, s32 a);
void func_004FD238(Obj5A8* o, s32 a);
struct G708998;
extern G708998* data_00708998;
const Vec3* func_00588F08(G708998* g);
void func_0036C42C(Obj27C* o);
void En7::f() {
    func_004FABDC(this, 31, 10, 0);
    (*mD44)[0].m10 = 1.0f;
    m59c.resetC(0x80);
    m59c.resetC(4);
    func_004FD038((Obj5A8*)((char*)this + 0x5a8), 0);
    m59c.reset(8);
    func_004FD238((Obj5A8*)((char*)this + 0x5a8), 0);
    mD30.set(*func_00588F08(data_00708998));
    mB84.pos.x = mD30.x; mB84.pos.y = mD30.y; mB84.pos.z = mD30.z;
    mB70 = 0;
    func_0036C42C((Obj27C*)mA7C);
}
