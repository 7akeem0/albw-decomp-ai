#include "h7.h"

struct Rec0056D38C { u16 m0; u16 m2; u16 m4; u16 m6; u16 m8; u16 ma; u16 mc; };
struct Out0056D38C { u32 m0; u32 m4; u32 m8; u32 mc; u32 m10; u32 m14; u32 m18; };
struct Obj0056D38C { char _0[0x3c]; void* m3c; };

Rec0056D38C* func_0056B464(void* p);

u32 func_0056D38C(Obj0056D38C* self, Out0056D38C* out) {
    Rec0056D38C* r = func_0056B464(self->m3c);
    if (r == 0) return 0;
    out->m0 = r->m0;
    out->m4 = r->m2;
    out->m8 = r->m4;
    out->mc = r->m6;
    out->m10 = r->m8;
    out->m14 = r->ma;
    out->m18 = r->mc;
    return 1;
}
