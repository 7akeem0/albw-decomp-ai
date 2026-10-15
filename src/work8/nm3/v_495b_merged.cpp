#include "ds6.h"
struct Obj495BD0 { char _pad[0x228]; u32 m228; };
u32 func_0056BD08(void* p);
u32 func_004121F8(void* p, u32 a, u32 d, u32 b, u32 c);
u32 func_00495BD0(Obj495BD0* self, u32 a, u32 b, u32 c, u32 d) {
    if (d == 0) d = self->m228;
    return (d != 0 && func_0056BD08((char*)self + 0xc) != 0)
        ? func_004121F8((char*)self + 0xc, a, d, b, c) : 0;
}
