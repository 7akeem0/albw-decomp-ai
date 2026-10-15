#define OBJ1D8_EXTRA void f();
#include "obj1d8.h"
void func_004CEAF0(Model40C* m);
void func_001512B4(void* o, const Vec3* p);
void func_00151150(void* o, const Vec3* s);
// model sync (called from 1D88C4 and 1D941C). The rot args must come from a struct passed by
// const& (separate s32 members / const s32& params load them before the m164 |= store: 80.8/96.2%).
void Obj1D8::f() {
    m40c->setRotXZ(m488);
    m40c->setTrans(m3d0);
    m40c->setScale(Vec3(1.0f, 1.0f, 1.0f));
    func_004CEAF0(m40c);
    func_001512B4(m468, &m3d0);
    Vec3 s(m478, 1.0f, m478);
    func_00151150(m468, &s);
}
