#include "ds3.h"
extern "C" void func_0052E32C(void*, void*);
extern "C" void func_00289F70(void*);
extern "C" int func_00581D60(void*);
extern void* data_0070FB60;
extern void* data_0070C8E0;
struct S28A3B8 {
    char pad0[0x54];
    s16 s54;
    char pad56[0x3d0 - 0x56];
    u32 f3d0;
    f32 f3d4;
    char pad3d8[0x3e8 - 0x3d8];
    u32 f3e8;
    char pad3ec[0x5d4 - 0x3ec];
    u8 b5d4;
};
void func_0028A3B8(S28A3B8* self) {
    func_0052E32C(data_0070FB60, (char*)self + 0x3d0);
    self->f3d4 = self->f3d4 + 0.3f;
    self->f3e8 = *(u32*)(*(u32*)((char*)data_0070FB60 + 0x24));
    func_00289F70(self);
    if (func_00581D60(data_0070C8E0) != self->s54) self->b5d4 = 1;
}
