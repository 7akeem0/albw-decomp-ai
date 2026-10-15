#include "ds2.h"
extern void* func_0015B580(void*, int);
u32 func_0015FB88(void* self, s32 a) {
    for (u32 i = 0; i < 2u; i++) {
        void* ss = self;
        s32 aa = a;
        void* p = func_0015B580(ss, i);
        if (p) {
            s8 c = *(s8*)((char*)p + 0x8c0);
            if (c != aa && c != 0x16) return 0;
        }
    }
    return 1;
}
