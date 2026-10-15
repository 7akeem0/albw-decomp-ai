#include "ds4.h"
extern "C" u32 func_004F0460(u32);
extern "C" u32 func_004F061C(u32);

extern "C" void func_003705A0(char* self, u32 a1) {
    if (func_004F0460(a1) == 0) return;
    u32 r = func_004F061C(a1);
    if (*(u8*)(self + 0xe) == a1) {
        u8 v = (r != 0) ? 0xd : 0;
        *(u8*)(self + 0xe) = v;
        *(u8*)(self + 0xc) = 1;
        return;
    }
    if (*(u8*)(self + 0xf) == a1) {
        u8 v = (r != 0) ? 0xd : 0;
        *(u8*)(self + 0xf) = v;
        *(u8*)(self + 0xd) = 1;
    }
}
