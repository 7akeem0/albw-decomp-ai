#include "ds3.h"
extern "C" int __cxa_guard_acquire(void*);
extern "C" void __cxa_guard_release(void*);
extern u32 data_0070B490;
extern Vec3 bss_007A9260;
extern char bss_0074C2E8[];
char* func_00261694(char* self) {
    if (!(data_0070B490 & 1)) {
        if (__cxa_guard_acquire(&data_0070B490)) {
            *(Vec3*)bss_0074C2E8 = bss_007A9260;
            __cxa_guard_release(&data_0070B490);
        }
    }
    char* o = *(char**)(*(char**)(self + 0x10) + 0x40c);
    if (o) {
        *(u32*)(o + 0x164) |= 0x40000000u;
        *(f32*)(bss_0074C2E8) = *(f32*)(o + 0x8c);
        *(f32*)(bss_0074C2E8 + 4) = *(f32*)(o + 0x9c);
        *(f32*)(bss_0074C2E8 + 8) = *(f32*)(o + 0xac);
    }
    return bss_0074C2E8;
}
