#include "ds3.h"
struct Pr2ACE { u32 a, b; };
extern "C" void func_002ADE0C(void*, u32);
extern "C" void func_002AD658(void*, s32, s32, s32, Pr2ACE);
void func_002ACEE4(void* p, u32 arg) {
    func_002ADE0C(p, arg);
    Pr2ACE t; t.b = 1; t.a = 0;
    func_002AD658(p, 0x1f, (u8)arg, 0x1f, t);
}
