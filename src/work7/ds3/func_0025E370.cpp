#include "ds3.h"
struct S25E3 { char pad[0xbc]; char c[0x7c]; u8 b138; };
extern "C" void* data_00709DF8;
extern "C" bool func_004EF418(void*, void*, s32, s32);
void func_0025E370(S25E3* p) {
    if (!p->b138) return;
    if (func_004EF418(data_00709DF8, p->c, 0xc, 0)) p->b138 = 0;
}
