#include "ds6.h"

struct Obj4EB8B8 { char _pad[0x4c]; void* m4c; };

bool func_004B083C();
void func_00294E80(void* p, u16 mask, u32 c, f32 d);

void func_004EB8B8(Obj4EB8B8* self, u32 bit, u32 c, f32 d) {
    if (func_004B083C()) {
        u16 mask = (u16)(1u << bit);
        func_00294E80(self->m4c, mask, c, d);
    }
}
