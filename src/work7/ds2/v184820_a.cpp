#include "ds2.h"
extern u8 func_004BFD14(void*);
extern void func_004CF478(void*, int, int);
u32 func_00184820(void* self) {
    char* r5 = (char*)self + 0x900;
    s8 old = *(s8*)(r5 + 0x15);
    u8 res = func_004BFD14(self);
    *(u8*)((char*)self + 0x9c9) = res;
    u8 now = *(u8*)(r5 + 0x15);
    if (old == 0) {
        if (now != 0) {
            void* p = *(void**)((char*)self + 0x990);
            if (p) func_004CF478(p, 0, 0);
        }
    } else {
        if (now == 0) {
            void* p = *(void**)((char*)self + 0x990);
            if (p) func_004CF478(p, 1, 0);
        }
    }
    u32 v = *(u8*)((char*)self + 0x9f9);
    v -= 3;
    if (v > 3) return (u32)*(s8*)(r5 + 0xc9);
    return 1;
}

