#include "ds2.h"
u32 func_0052FBA0(void*, u32);
u32 func_00588BE4(void*);
u32 func_004F7BB8(void*, void*);
extern void* data_00706E20;
extern u32 ro_006933D0;
extern u32 ro_006930CC;

u32 func_0020EB24(void* t, void* a) {
    void* mgr = (char*)data_00706E20 + 0x3dbbc;
    void* actor = (void*)func_0052FBA0(mgr, *(u32*)((char*)a + 0x28));
    if (actor) {
        if (func_00588BE4(actor) == ro_006933D0) return 0;
        if (func_00588BE4(actor) == ro_006930CC) return 0;
    }
    return func_004F7BB8(t, a);
}
