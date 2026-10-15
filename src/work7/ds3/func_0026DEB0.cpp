#include "ds3.h"
struct M74E { char pad[0x50]; u8 b50; };
struct G712F70 { char pad[0x1b8]; u32 m1b8; };
struct S26DEB0 { char pad[0x18]; u32 m18; char pad2[0x74-0x1c]; M74E* m74; char pad3[0x88-0x78]; f32 m88; };
extern "C" G712F70* data_00712F70;
extern "C" void* data_00712450;
extern "C" void func_0014A5D4(void*, u32);
extern "C" void func_00532CC0(M74E*, void*, float);
void func_0026DEB0(S26DEB0* self, void* arg) {
    if (self->m74->b50 != 2) return;
    if (self->m18 & 4) return;
    func_0014A5D4(data_00712450, data_00712F70->m1b8);
    func_00532CC0(self->m74, arg, self->m88);
}
