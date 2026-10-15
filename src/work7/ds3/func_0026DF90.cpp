#include "ds3.h"
struct T26DF90 { u32 cur; u32 max; f32 rate;
    bool step() { if (cur < max) { cur++; return true; } return false; }
    f32 ease() { if (max == 0 || cur == 0) return 0.0f; if (max <= cur) return 1.0f; return (f32)cur * rate; }
};
struct S26DF90 { char pad[0x7c]; T26DF90 t; f32 m88; };
s32 func_0026DF90(S26DF90* self) {
    if (!self->t.step()) return 1;
    self->m88 = 1.0f - self->t.ease();
    return 0;
}
