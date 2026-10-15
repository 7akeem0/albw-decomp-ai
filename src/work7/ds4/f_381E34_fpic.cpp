#include "ds4.h"
extern "C" void func_0037FAE0(void*);
extern "C" void func_006678C0(void*, u32);
extern "C" u32 func_0038063C(void*);

extern "C" void func_00381E34(char* self) {
    *(float*)(self + 0x3dc) = 0.0f;
    *(float*)(self + 0x3e4) = 0.0f;
    func_0037FAE0(self);
    if (*(u8*)(self + 0xb00) == 5) func_006678C0(self + 0xa48, 3);
    if (func_0038063C(self) != 0) func_006678C0(self + 0xa48, 4);
}
