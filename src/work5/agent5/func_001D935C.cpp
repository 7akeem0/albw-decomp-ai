#define OBJ1D8_EXTRA void f();
#include "obj1d8.h"
// state exec (table ro 0x6A2AD4): like 1D8D00 but waits for the anim end
void Obj1D8::f() {
    approach(m478, 0.01f, 0.05f);
    m40c->m158 = m478;
    if ((*m410)[0].isEnd()) {
        if (m49e) func_00588C14(this, 0, 1);
        m2d7 = 1;
    }
}
