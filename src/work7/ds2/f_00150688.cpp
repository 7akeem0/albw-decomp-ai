#include "ds2.h"

extern void func_00435BE8(void*, void*);
extern void* g_709D28;
extern void func_004A9120(void*, void*);
extern void func_004A8BFC(void*, void*, u32);

void func_00150688(void* a0, char* a1, char* a2) {
    if (a1 == 0) return;
    if (*(u32*)(a1 + 0x4c) == 0) return;
    u8 old = *(u8*)(a1 + 0x20);
    func_00435BE8(a1 + 0x20, a2);
    u8 n = (u8)(*(u16*)(a2 + 4) & 0xff);
    if (old == n) return;
    *(u8*)(a1 + 0x20) = n;
    func_004A9120(g_709D28, a1);
    func_004A8BFC(g_709D28, a1, n);
}
