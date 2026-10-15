#include "../../../work7/ds2/ds2.h"
extern u8 func_00521004(void*);
extern void func_004CF478(void*, u32, u32);
extern s32 func_00588BF0(void*, int);
extern void func_001B9AAC(void*, u32);
void func_00234B28(void* self, u32 a) {
    if (*(u8*)((char*)self + 0x477) != 0) {
        u8 v = func_00521004(self);
        char* p = *(char**)((char*)self + 0x410);
        p[0x44] = v;
        func_004CF478(*(void**)((char*)self + 0x40c), v, 0);
        if (*(u32*)((char*)self + 0x47c) == 0) {
            if (func_00588BF0(self, 1) != 0) *(u8*)((char*)self + 0x2d7) = 1;
        }
    }
    func_001B9AAC(self, a);
}
