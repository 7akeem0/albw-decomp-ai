#define A1E4_EXTRA void func_001E43DC(f32 v); void func_001E43F8(f32 v);
#include "actor1e4.h"

void Actor1E4::func_001E43DC(f32 v) {
    Ctl48C* c = m490;
    if (c)
        c->get()->m10 = v;
}

void Actor1E4::func_001E43F8(f32 v) {
    Ctl48C* c = m48C;
    if (c)
        c->get()->m10 = v;
}
