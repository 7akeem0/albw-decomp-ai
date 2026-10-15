#include "ds3.h"
struct S2D42E8 { u32 m0; void* m4; u32 m8; u32 mC; u32 m10; u32 m14; };
extern "C" void* func_00584CA8(void*, int, int);
void func_002D42E8(S2D42E8* self) {
    self->mC = *(u32*)func_00584CA8(self->m4, 0, 0);
    self->m10 = *(u32*)func_00584CA8(self->m4, 0, 1);
    self->m14 = *(u32*)func_00584CA8(self->m4, 0, 2);
}
