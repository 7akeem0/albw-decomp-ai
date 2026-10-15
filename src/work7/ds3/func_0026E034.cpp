#include "ds3.h"
struct M74 { char pad[0x50]; u8 b50; };
struct S26E034 { char pad[0x18]; u32 m18; char pad2[0x74-0x1c]; M74* m74; char pad3[0x8c-0x78]; u8 b8C; };
extern "C" void* data_00712F70;
extern "C" void func_0014B1D4(void*, int, int);
void func_0026E034(S26E034* self) {
    if (self->m74->b50 == 2 && self->b8C == 0) {
        func_0014B1D4(data_00712F70, 1, 0);
        self->m18 &= ~4;
        self->b8C++;
    }
}
