#include "ds6.h"

struct Obj5126B8 {
    char _pad[0x478];
    u8 m478;
};

u32 func_0054DDF4(void* self, u32 a);
void func_0034C8F0(void* p, u32 a, u32 b);

u32 func_005126B8(Obj5126B8* self, u32 a) {
    u32 b = self->m478 ? 1 : 0;
    u32 r = func_0054DDF4(self, b);
    func_0034C8F0((char*)self + 0x508, r, a);
    return 0;
}

