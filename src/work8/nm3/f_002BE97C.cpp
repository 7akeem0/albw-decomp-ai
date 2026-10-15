#include "ds3.h"
#include "vt44.h"
struct G70D7 { char pad[0x64]; void* m64; };
struct Obj2BE9 { char pad[0x14]; u32 m14; };
struct S2BE97C : Vt44 { };
extern "C" G70D7* data_0070D7D0;
extern "C" void* data_007142C8;
extern "C" void func_0051AA44(void*);
extern "C" void func_00230D94(S2BE97C*);
void func_002BE97C(S2BE97C* self) {
    Obj2BE9* o = (Obj2BE9*)((G70D7*)data_0070D7D0)->m64;
    u32 r = self->v16();
    bool eq = o->m14 == r;
    if (eq) o->m14 = 0;
    if (eq) func_0051AA44(data_007142C8);

    func_00230D94(self);
}
