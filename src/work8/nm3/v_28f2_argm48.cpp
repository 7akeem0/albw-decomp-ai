#include "ds3.h"
struct S28F2F0 { char pad[0x10]; void* m10; char pad2[0x42-0x14]; s16 m42; char pad3[0x48-0x44]; void* m48; };
extern "C" int func_0052E8A0(void*);
extern "C" u8 data_007111A8[];
extern "C" void func_002DD8F4(S28F2F0*);
extern "C" void* func_002D55D0(void*, int);
void func_0028F2F0(S28F2F0* self) {
    if (func_0052E8A0(self->m10) != 0) return;
    s16 idx = *(s16*)((char*)self + 0x42);
    if (data_007111A8[idx * 16] == 0x15) {
        func_002DD8F4((S28F2F0*)self->m48);
        return;
    }
    u32* sd = (u32*)func_002D55D0(self->m48, 0x91);
    if (sd) *sd = 0;
}
