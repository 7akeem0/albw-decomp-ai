#include "ds3.h"
struct S3298E4 { char pad[0x8c4]; u32 m8C4; char pad2[0x99c-0x8c8]; u32 m99C; char pad3[0xba8-0x9a0]; u32 mBA8; char pad4[0xc60-0xbac]; u32 mC60; };
extern "C" void func_0036E490(void*, int, u32);
extern "C" void func_00665670(void*, int) ;
void func_003298E4(S3298E4* self) {
    if (self->mC60 == 0) return;
    if (--self->mC60 == 0) {
        func_0036E490((char*)self + 0x8f8, 0, self->m8C4);
        func_0036E490((char*)self + 0x9d0, 0, self->m99C);
        func_00665670((char*)self + 0xba8, 6);
    }
}
