#include "ds3.h"
struct S2B92 { char pad[0x93c]; void** m93C; };
extern "C" void* data_00709F30;
extern "C" void func_004C6654(void*, s32);
extern "C" void func_003B1230(void*, s32, s32);
void func_002B920C(S2B92* p, s32 a, s32 b) {
    if (a == 0xa) func_004C6654(data_00709F30, 0x25);
    func_003B1230(*(void**)((char*)p->m93C + 4), a, b);
}
