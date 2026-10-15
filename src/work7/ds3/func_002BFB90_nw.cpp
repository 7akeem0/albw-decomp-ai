#include "ds3.h"
#include "vt44.h"
struct Obj14BF { char pad[0x16]; u16 m16; };
struct S2BFB90 : Vt44 { char pad[0x14-4]; Obj14BF* m14; char pad2[0x38-0x18]; u32 m38; char pad3[0x5e-0x3c]; u8 b5E; };
extern "C" void func_00662C9C(void*, int) ;
void func_002BFB90(S2BFB90* self) {
    if (self->m14->m16 & 0x10) self->b5E = 1;
    if (self->v25() != 0) return;
    if (self->b5E != 0 || !(self->m14->m16 & 8)) {
        func_00662C9C((char*)self + 0x38, 2);
    }
}
