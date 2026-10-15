#define A1E4_EXTRA void func_001E4190(f32 v);
#include "actor1e4.h"

void Actor1E4::func_001E4190(f32 v) {
    Ctl48C* c = m48C;
    if (c) {
        Sub14* s = c->get();
        if (s->m8 != v) {
            s->m8 = v;
            s->m26 = 1;
        }
    }
}
