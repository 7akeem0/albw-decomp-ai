#include "ds3.h"
struct S31C5E8 { char pad[0x98]; char m98[0xc]; char mA4[0xc]; char mB0[0xc]; char mBC[0x30]; u32 mEC; };
extern "C" void func_00231448(void*);
extern "C" void func_002317C0(void*, float);
void func_0031C5E8(S31C5E8* self) {
    func_00231448(self->mB0);
    func_00231448(self->mBC);
    func_002317C0(self->m98, 1.0f);
    func_002317C0(self->mA4, 1.0f);
    self->mEC = 0xffffffff;
}
