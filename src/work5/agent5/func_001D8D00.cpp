#define OBJ1D8_EXTRA void f();
#include "obj1d8.h"
// v += (target - v) * rate through an inline helper taking f32& (a named 'f32& v = m478' local: 70%)
void Obj1D8::f() {
    approach(m478, 0.01f, 0.05f);
    m40c->m158 = m478;
    if (m478 < 0.1f) {
        if (m49e) func_00588C14(this, 0, 1);
        m2d7 = 1;
    }
}
