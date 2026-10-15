#include "ds3.h"
struct S25DF { char pad[0xc8]; u32 mC8; };
extern "C" void* data_007143B8;
extern "C" void func_0029E36C(void*);
extern "C" bool func_00541648(void*);
extern "C" __attribute__((weak)) void func_0065FF80(void*, s32);
void func_0025DFA8(S25DF* p) {
    if (p->mC8 == 0x13b) func_0029E36C(data_007143B8);
    if (func_00541648(data_007143B8)) func_0065FF80((char*)p + 0xc8, 7);
}
