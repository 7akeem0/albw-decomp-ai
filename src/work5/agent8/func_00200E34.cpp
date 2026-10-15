#define EN_EXTRA f32 f(struct HitE* h);
#include "en200.h"
struct HitE { char pad[0x21]; s8 m21; char pad2[0x38 - 0x22]; u32 m38; };
bool func_0053F7A8(Obj70FB60* p);
f32 En::f(HitE* h) {
    f32 r = 1.0f;
    if (data_0070FB60 && !func_0053F7A8(data_0070FB60) && m420->m22 == 6) {
        s8 k = h->m21;
        if (k == 5) {
            if ((h->m38 >> 28) != 4) return 0.0f;
        } else if (k == 8) {
            return 0.0f;
        }
    }
    return r;
}
