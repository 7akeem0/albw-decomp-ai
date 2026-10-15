#include "ds3.h"
struct S2977 { char pad[0x5c]; char c5C[0x18]; char c74[0x18]; f32 f8C, f90; };
extern "C" void func_0010C7F8(void*, s32, f32);
void func_00297780(S2977* p) {
    func_0010C7F8(p->c5C, 0, 1.0f);
    f32 z = 0.0f;
    func_0010C7F8(p->c74, 0, z);
    p->f8C = z; p->f90 = z;
}
