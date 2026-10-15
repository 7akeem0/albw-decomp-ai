#include "ds3.h"
extern void* data_0070FB60;
extern "C" void func_0028F924(void*);
extern "C" s32 func_0052F7F4(void*);
extern "C" void func_00664884(void*, int) __attribute__((weak));
struct S3043B4 { char pad[0x32]; u16 m32; char pad2[0x495 - 0x34]; u8 b495;
                 char pad3[0x4c0 - 0x496]; u32 m4c0; char pad4[0x51e - 0x4c4]; u8 b51e; };
void func_003043B4(S3043B4* self) {
    if (self->m4c0 == 0x10 && self->b51e != 0 && self->m32 != 1) {
        func_0028F924(data_0070FB60);
    }
    if (func_0052F7F4(self) != 0) {
        self->b495 = 1;
        func_00664884((char*)self + 0x4c0, 3);
    }
}
