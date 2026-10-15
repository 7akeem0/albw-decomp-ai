#include "ds6.h"

struct Obj498514 {
    char _pad[4];
    u8 m4;
    char _pad2[0x9c - 5];
    f32 m9c;
    f32 ma0;
    f32 ma4;
    f32 ma8;
};

f32 func_0059163C(f32 v);
f32 func_005909A0(f32 v);
f32 func_00591804(f32 v);

void func_00498514(Obj498514* self, f32 v) {
    f32 h = v * 0.5f;
    self->m9c = v;
    self->ma0 = func_0059163C(h);
    self->ma4 = func_005909A0(h);
    self->ma8 = func_00591804(h);
    self->m4 = 1;
}
