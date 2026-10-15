#include "ds6.h"

struct Actor4EDEA0 { char _pad[0x54]; u16 m54; };
extern void* data_00706E20;
Actor4EDEA0* func_0052FBA0(void* mgr, u32 handle);

struct Obj4EDEA0 {
    char _pad[0x14];
    u32 m14;
    u16 m18;
};

void func_004EDEA0(Obj4EDEA0* self, u32* handle) {
    self->m14 = *handle;
    Actor4EDEA0* a = func_0052FBA0((char*)data_00706E20 + 0x3d800 + 0x3bc, *handle);
    if (a) self->m18 = a->m54;
}
