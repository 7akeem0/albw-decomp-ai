#include "ds6.h"

struct Sub10_4EDAD0 { char _pad[0x68]; u32 m68; };
struct Actor4EDAD0 { char _pad[0x54]; u16 m54; };
struct Obj4EDAD0 {
    char _pad[0x10];
    Sub10_4EDAD0* m10;
    char _pad2[0x20 - 0x14];
    u32 m20;
    char _pad3[0x2c - 0x24];
    u16 m2c;
};

extern void* data_00706E20;
void* func_0052FBA0(void* mgr, u32 h);

void func_004EDAD0(Obj4EDAD0* self, u32* p) {
    self->m20 = *p;
    if (self->m10) self->m10->m68 = *p;
    void* mgr = data_00706E20;
    Actor4EDAD0* a = (Actor4EDAD0*)func_0052FBA0((char*)mgr + 0x3DBBC, *p);
    if (a) self->m2c = a->m54;
}
