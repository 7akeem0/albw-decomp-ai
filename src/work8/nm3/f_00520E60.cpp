#include "ds6.h"

struct Sub520E60 { char _pad[0xd]; u8 m0d; u8 m0e; };
struct Obj520E60 { char _pad[0x18]; Sub520E60* m18; };

extern void* data_00712450;
u32 func_00520B48(void* p);

bool func_00520E60(Obj520E60* self) {
    Sub520E60* p = self->m18;
    return p && p->m0d == 3 && p->m0e == 3 && func_00520B48(data_00712450) == 0;
}
