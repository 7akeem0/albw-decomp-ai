#include "ds2.h"

extern bool func_00588BF0(void*, u32);
 extern void func_0065AC0C(void*, u32);

void func_001AD568(void* p) {
    if (func_00588BF0(p, 0)) func_0065AC0C((char*)p + 0x8bc, 1);
}

