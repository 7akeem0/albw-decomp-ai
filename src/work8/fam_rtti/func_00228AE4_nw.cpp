#include "../../work7/ds3/ds3.h"
struct Sub286D { char pad[8]; f32 f8; f32 fC; f32 f10; f32 f14; char pad2[0x1c - 0x18]; u8 b1c; };
struct Mid286D { char pad[0x14]; Sub286D* m14; };
struct S286D00 { char pad[0x68c]; Mid286D* m414; };
extern "C" void func_0066133C(void*, int) ;
void func_00228AE4(S286D00* self) {
    Sub286D* o = self->m414->m14;
    if (o->b1c != 0) return;
    f32 z = 0.0f;
    if (o->f10 >= z) {
        if (o->f8 == o->f14) goto doCall;
        return;
    } else {
        if (o->f8 <= z) {} else return;
    }
doCall:
    func_0066133C((char*)self + 0x468, 7);
}
