#include "ds3.h"
struct S31C464 { char p0[0x50]; u32 m50; char p1[0x98-0x54]; char m98[0xc]; char mA4[0xc]; char mB0[0xc]; char mBC[0x24]; float mE0; float mE4; };
extern "C" void func_00231448(void*);
extern "C" void func_002313DC(void*);
extern "C" void func_006653E8(void*, int) ;
void func_0031C464(S31C464* self) {
    if (self->mE0 >= self->mE4) {
        func_00231448(self->m98);
        func_00231448(self->mA4);
        func_002313DC(self->mB0);
        func_002313DC(self->mBC);
        func_006653E8(&self->m50, 0);
    }
}
