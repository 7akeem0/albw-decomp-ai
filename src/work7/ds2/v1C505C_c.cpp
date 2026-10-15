#include "ds2.h"
extern s32 func_00588BF0(void*, s32);
extern void* data_00709DF8;
u32 func_001C505C(void* self, s32 a, s32 b, s32 k) {
    switch (k) {
    case 0:
        if (func_00588BF0(self, 0) != 0) return 0;
        return 1;
    case 1: {
        void* v = data_00709DF8;
        if (v == 0) return 1;
        if (*(u32*)((char*)v + 0x84) >= 0x1a5e0) return 1;
        return 0;
    }
    default:
        return 1;
    }
}
