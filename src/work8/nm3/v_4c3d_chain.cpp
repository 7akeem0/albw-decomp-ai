#include "ds6.h"
struct V4C3DF4 { virtual void v0(void* p); };
struct Obj4C3DF4 { char _pad[0x14]; u32 m14; char _pad2[0x9b9 - 0x18]; u8 m9b9; };
void* func_004F042C();
u32 func_004C3A70(Obj4C3DF4* self);
bool func_004C3DF4(Obj4C3DF4* self) {
    if (self->m9b9 == 0) return false;
    V4C3DF4* p = (V4C3DF4*)func_004F042C();
    return p && (p->v0((void*)(self->m14 + 0xe00)), func_004C3A70(self) != 0);
}
