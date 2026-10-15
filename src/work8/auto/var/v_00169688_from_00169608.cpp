#include "../../F6/ds2.h"
extern void* func_00533304(u32, u32, int);
struct Hdr1696 { s32 m0; u32 m4; void** m8; };
void func_00169608(Hdr1696* self, u32 i, u32 a, u32 b) {
    void* p = func_00533304(b, a, 0);
    if (p != 0) {
        if (self->m0 < 0) self->m0 = *(u8*)(*(char**)p + 5);
        void** arr = self->m4 > i ? self->m8 + i : self->m8;
        arr[0] = p;
    } else {
        void** arr = self->m4 > i ? self->m8 + i : self->m8;
        arr[0] = 0;
    }
}
