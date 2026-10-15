#include "ds3.h"
struct SubC40 { char pad[8]; f32 m8; char pad2[0x26-0xc]; u8 m26; };
struct MidC40 { char pad[0x14]; SubC40* m14; };
struct S28C40C { char pad[0x24]; MidC40* m24; };
extern "C" void func_00169A80(void*);
void func_0028C40C(S28C40C* self, int type) {
    f32 v = 0.0f;
    if (type == 2) v = 1.0f;
    else if (type == 3) v = 2.0f;
    MidC40* m = self->m24;
    SubC40* s = m->m14;
    if (s->m8 != v) { s->m8 = v; s->m26 = 1; }
    func_00169A80(self->m24);
}
