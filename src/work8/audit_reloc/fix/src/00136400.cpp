#include "../../../../work7/ds3/ds3.h"
struct Sub286D { char pad[8]; f32 f8; f32 fC; f32 f10; f32 f14; char pad2[0x1c - 0x18]; u8 b1c; };
struct Mid286D { char pad[0x14]; Sub286D* m14; };
struct S286D00 { char pad[0x484]; Mid286D* m414; };
extern "C" void func_00656F2C(void*, int) ;
void func_00136400(S286D00* self) {
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
    func_00656F2C((char*)self + 0x40c, 1);
}
