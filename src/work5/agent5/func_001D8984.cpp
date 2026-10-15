#define OBJ1D8_EXTRA void f();
#include "obj1d8.h"
// orig 'ldr r1,[r0,#0x14]; mov r0,r1': the value read through a[0] FIRST into a named local,
// then a[0].setFrame(v) (operator[] with constant 0 folds the bounds check; the two a[0] stay separate vregs)
void Obj1D8::f() {
    func_001D87DC(0, 0.0f);
    AnimArr* a = m410;
    f32 v = (*a)[0].m14;
    (*a)[0].setFrame(v);
}
