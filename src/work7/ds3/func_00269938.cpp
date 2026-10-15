#include "ds3.h"
extern "C" u32 func_00564A78(void*, void*);
extern char bss_0073FF98[];
void func_00269938(char* self) {
    if (*(u8*)(self + 0xaed)) return;
    for (int i = 0; i < 2; i++) {
        u32 h = func_00564A78(*(void**)(self + 0x40c), bss_0073FF98 + i * 8);
        char* r1 = *(char**)(self + 0x40c);
        r1 = *(char**)(r1 + 0x24);
        r1 = *(char**)(r1 + 0xc);
        char* o = r1 + h * 64;
        *(f32*)(o + 4) = 0.1f;
        *(f32*)(o + 8) = 0.1f;
        *(f32*)(o + 0xc) = 0.1f;
        *(u32*)o &= ~0x2800000u;
    }
}
