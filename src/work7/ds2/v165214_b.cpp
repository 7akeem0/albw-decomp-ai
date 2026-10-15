#include "ds2.h"
extern void func_00658748(void*, int) __attribute__((weak));
extern void func_004FC570(void*);
void func_00165214(void* self) {
    char* p = *(char**)((char*)self + 0x510);
    if (*(u8*)(p + 4) != 0) return;
    char* r2 = (char*)self + 0x8bc;
    if (*(s16*)((char*)self + 0x508) <= 0) { func_00658748(r2, 6); return; }
    u8 b = *(u8*)(p + 5);
    if (b == 3) { func_00658748(r2, 4); return; }
    func_00658748(r2, 4);
    *(u32*)((char*)self + 0x904) = 0x50;
    func_004FC570(self);
}

