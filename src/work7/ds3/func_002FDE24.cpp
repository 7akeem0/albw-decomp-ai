#include "ds3.h"
#include "vt44.h"
struct S2FDE24 : Vt44 { char pad[0x7c-4]; u8 b7C; u8 b7D; };
extern "C" void* data_0070B728;
extern "C" void func_002E1B70(void*);
void func_002FDE24(S2FDE24* self) {
    if (data_0070B728 == 0 || self->b7D != 0) { self->v8(); return; }
    u8 k = self->b7C;
    if (k == 1 || k == 2 || k == 3) func_002E1B70((char*)self + 0x30);
    self->v8();
}
