#include "albw_types.h"

// 0x00169A28 (24 bytes): zero the first 16 bytes of a 20-byte element.
// Called through the vec-new helper at 0x16A454 (blx 0x100118, r2=#0x14 element size)
// with the element count passed to the ctor as its second argument.
// armcc b1049 at -O2 -Otime keeps arg n (r1) live across the zero-init, so the
// zero constant is allocated to r2 instead of the usual r1 (-O3 rematerializes).
struct Obj169A28 {
    u32 m0;
    u32 m4;
    u32 m8;
    u32 mC;
    u32 m10;
};

void func_00169A28(Obj169A28* self, u32 n) {
    self->m0 = 0;
    self->m4 = 0;
    self->m8 = 0;
    self->mC = 0;
    if (n)
        self->m0 = 0;
}
