#define EN_EXTRA f32 f();
#include "en206.h"
f32 En::f() {
    f32 r = 0.0f;
    if (m3a0 == m91c) {
        s8 k = m43c->m21;
        if (k == 8 || k == 15) r = 1.0f;
    }
    return r;
}
