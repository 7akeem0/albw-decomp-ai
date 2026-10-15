#include "ds3.h"
struct Obj14D { char pad[0xd]; s8 bD; u8 bE; };
struct Obj2CD { char pad[0x74]; u16 m74; char pad2[0xc]; };
struct S2DFC2C { char pad[0x14]; Obj14D* m14; char pad2[0x2c-0x18]; Obj2CD* m2C; };
extern "C" void func_0012C718(void*);
extern "C" void func_002317C0(void*, float);
extern "C" void func_00231448(void*);
void func_002DFC2C(S2DFC2C* self) {
    Obj14D* o = self->m14;
    s8 k = o->bD;
    if (k == 1 || (k == 3 && o->bE == 3)) func_0012C718(o);
    Obj2CD* p = self->m2C;
    p->m74 = 2;
    func_002317C0((char*)p + 0x74, 1.0f);
    func_00231448((char*)p + 0x80);
}
