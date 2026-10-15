#include "ds6.h"

struct Sub614 { char _pad[0x42]; s16 m42; };
struct Obj52E860 { char _pad[0x614]; Sub614* m614; };

f32 func_0052E860(Obj52E860* self) {
    s16 k = self->m614->m42;
    f32 a = 1.25f;
    if (k == 0x2c) return a;
    if (k == 0x45) return 1.2f;
    if (k == 0x97 || k == 0x96) return a;
    return 1.0f;
}

