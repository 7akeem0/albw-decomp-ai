#include "ds3.h"
extern "C" void func_00272E30(void*);
extern "C" void func_00272FA4(void*, u16);
extern "C" void* func_004ACC38(void*);
extern "C" void func_0016B444(void*, u16, u32);
extern "C" void func_0027355C(void*);
extern "C" void func_00271AB8(void*);
extern "C" void func_00271D94(void*);
extern "C" void func_00272C20(void*);
extern void* data_0070C8E0;
extern void* data_0070BB18;
void func_002724E0(char* self, u16 a1, u16 a2) {
    char* p = self + 0x7c00;
    *(u16*)(p + 0xb0) = a1;
    *(u16*)(p + 0xb2) = a2;
    func_00272E30(self);
    func_00272FA4(self, a1);
    char* o = (char*)func_004ACC38(data_0070C8E0);
    char* q = self + 0x7cac;
    if (o) *(u8*)(o + 0x3fc) = (u8)*(u32*)q;
    func_0016B444(data_0070BB18, a2, *(u32*)q);
    func_0027355C(self);
    func_00271AB8(self);
    func_00271D94(self);
    func_00272C20(self);
}

