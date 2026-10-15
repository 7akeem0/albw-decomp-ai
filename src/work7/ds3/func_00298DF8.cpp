#include "ds3.h"
extern void* data_00708998;
extern void* data_00711F50;
void func_001E8268(void*, void*, void*, void*);
s32 func_00588268(void*);
void func_00298DF8(char* self) {
    if (*(u8*)(self + 0x34b) != 0) {
        void* g = data_00708998;
        func_001E8268(*(void**)((char*)g + 0x18), self + 0x398, self + 0x360, self + 0x36c);
    }
    s32 n = *(s32*)(self + 0x34c) - 1;
    *(s32*)(self + 0x34c) = n;
    if (n <= 0) {
        if (func_00588268(data_00711F50) != 0) *(s32*)(self + 0x34c) = 1;
        else *(u8*)(self + 0x2d7) = 1;
    }
}
