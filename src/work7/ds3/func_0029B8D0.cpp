#include "ds3.h"
struct S29B8D0 { char pad[0xf4]; void* mF4; };
extern "C" void* data_0070B960;
extern "C" void* data_0070B800;
extern "C" void* data_007142B0;
extern "C" void func_00122E08(void*);
extern "C" void func_0012E60C(void*, int);
extern "C" void func_002DFD00(void*);
extern "C" void func_001E30E0(S29B8D0*);
void func_0029B8D0(S29B8D0* self) {
    func_00122E08(self->mF4);
    u8* p = (u8*)((char*)data_0070B960 + 0x2c1f);
    *p &= ~1;
    func_0012E60C(data_0070B800, 1);
    func_002DFD00(data_007142B0);
    func_001E30E0(self);
}
