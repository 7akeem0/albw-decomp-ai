#include "ds3.h"
struct Pair10 { u32 a, b; };
struct S2754F8 { char pad[8]; void* m8; char pad1[4]; Pair10 p10; char pad2[0x64-0x18]; u32 m64; };
extern "C" void func_00660CE8(void*, int) ;
void func_002754F8(S2754F8* self) {
    Pair10 p = self->p10;
    if (p.b > p.a) { self->p10.a = p.a + 1; return; }
    u8* q = (u8*)self->m8;
    if (q[0xb1] != 0) { func_00660CE8((char*)self + 0x64, 2); return; }
    if (q[0xb0] != 0) { func_00660CE8((char*)self + 0x64, 1); return; }
}
