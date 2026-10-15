#include "ds3.h"
extern "C" int func_002B200C();
extern "C" void func_004FABDC(void*, int, int, int);
void func_002E4D70(char* self, int a1, char* a2) {
    *(f32*)(self + 0x4f0) = 1.0f;
    if (a1 != 0) return;
    if (*(u8*)(a2 + 0x2a) == 0) return;
    s8 v = *(s8*)(a2 + 0x24);
    if (v == 0x1f || v == 0xa) return;
    if (v == 9 || v == 0xb) return;
    if (v == 3 && *(u8*)(a2 + 0x25) == 2) return;
    func_004FABDC(self, 2, func_002B200C(), 0);
}
