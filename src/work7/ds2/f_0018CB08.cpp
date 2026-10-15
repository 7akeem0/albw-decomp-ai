#include "ds2.h"

extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);
extern s32 func_00588BE4(void*);
extern u32 ro_006933D4;
extern u32 ro_006933D8;

struct Sub8CB08 { char pad[0x28]; u32 m28; };

u32 func_0018CB08(void* a0, Sub8CB08* a) {
    void* p = func_0052FBA0(data_00706E20 + 0x3dbbc, a->m28);
    if (p == 0) return 1;
    s32 id = func_00588BE4(p);
    if (id == (s32)ro_006933D4) return 0;
    if (id == (s32)ro_006933D8) return 0;
    return 1;
}
