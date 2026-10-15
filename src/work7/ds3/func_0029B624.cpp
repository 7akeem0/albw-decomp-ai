#include "ds3.h"
extern "C" int func_00588BF0(void*, int);
extern "C" void func_004ED474(void*, void*);
extern void* data_00708998;
void func_0029B624(char* self) {
    if (*(u16*)(self + 0x36) && func_00588BF0(self, 0) == 0) return;
    if (func_00588BF0(self, 1) != 0) return;
    if ((u32)*(s16*)(self + 0x40c) >= 2u) return;
    func_004ED474(data_00708998, self);
}
