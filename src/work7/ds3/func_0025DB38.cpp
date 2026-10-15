#include "ds3.h"
struct S25DB { char pad[0xc8]; char c8[0x30]; char f8[0x40]; };
extern "C" void func_001E3134(S25DB*);
extern "C" void* data_0070B728;
extern "C" void* data_00712588;
extern "C" void func_004CD7C8(void*, void*);
extern "C" void func_002DF5C4(void*);
extern "C" __attribute__((weak)) void func_0065FF80(void*, s32);
void func_0025DB38(S25DB* p) {
    func_001E3134(p);
    func_004CD7C8(data_0070B728, p->f8);
    func_002DF5C4(data_00712588);
    func_0065FF80(p->c8, 0);
}
