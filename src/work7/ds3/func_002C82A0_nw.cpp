#include "ds3.h"
struct S2C82 { char pad[0x38]; u16 h38; char pad2[0x40c-0x3a]; };
extern "C" bool func_00588BF0(S2C82*, s32);
extern "C"  void func_00663434(void*, s32);
void func_002C82A0(S2C82* p) {
    if (p->h38 == 0) return;
    if (func_00588BF0(p, 1)) func_00663434((char*)p + 0x40c, 2);
}
