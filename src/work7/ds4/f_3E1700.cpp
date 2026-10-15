#include "ds4.h"
extern u8 bss_007A06F0[];
extern "C" void func_003DEE3C(void*, u32);
extern "C" void func_003DF89C(void*, u32);

extern "C" void func_003E1700(char* self, u32 v) {
    *(u8*)(self + 0xd) = (u8)v;
    if (v == 0) return;
    if (v == 1) {
        func_003DEE3C(bss_007A06F0, *(u32*)self & 0xff);
        *(u8*)(self + 0xc) = 0;
        func_003DF89C(bss_007A06F0, *(u32*)self & 0xff);
        return;
    }
    if (v == 2) {
        func_003DEE3C(bss_007A06F0, *(u32*)self & 0xff);
    }
}
