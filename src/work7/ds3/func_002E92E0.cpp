#include "ds3.h"
extern "C" void func_003A42B0(void*, int);
extern "C" void func_004F9554(void*, int, int, int);
extern "C" void func_004F88A0(void*, u32);
extern "C" void func_004FAD90(void*);
struct Pair { u32 cur, max; };
void func_002E92E0(char* self, int a1) {
    Pair p = *(Pair*)(self + 0xb0c);
    if (!(p.cur < p.max && a1 == 0x21)) {
        func_003A42B0(self + 0x8ec, 2);
        func_004F9554(*(void**)(self + 0x430), 7, 0, 1);
        func_004F9554(*(void**)(self + 0x434), 7, 0, 1);
        func_004F88A0(self, *(u32*)(self + 0xaec));
        func_004FAD90(self);
    }
}
