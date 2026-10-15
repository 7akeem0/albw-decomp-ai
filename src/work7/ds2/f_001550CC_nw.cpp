#include "ds2.h"

extern bool func_00588BF0(void*, u32);
 extern void func_00657D18(void*, u32);

void func_001550CC(void* p) {
    if (func_00588BF0(p, 0)) func_00657D18((char*)p + 0x8bc, 1);
}

