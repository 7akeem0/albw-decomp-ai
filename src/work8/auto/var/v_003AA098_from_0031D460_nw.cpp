#include "../../../work7/ds3/ds3.h"
struct Sub31D4 { char pad[8]; f32 f8; f32 fC; f32 f10; f32 f14; char pad2[0x1c - 0x18]; u8 b1c; };
struct Mid31D4 { char pad[0x14]; Sub31D4* m14; };
struct S31D460 { char pad[0x1f8]; Mid31D4* m40; };
extern "C" void func_0066552C(void*, int) ;
void func_0031D460(S31D460* self) {
    Sub31D4* o = self->m40->m14;
    if (o->b1c != 0) return;
    f32 z = 0.0f;
    if (o->f10 >= z) {
        if (o->f8 == o->f14) goto doCall;
        return;
    } else {
        if (o->f8 <= z) {} else return;
    }
doCall:
    func_0066552C((char*)self + 0x210, 1);
}
