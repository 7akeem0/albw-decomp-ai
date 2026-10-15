#include "ds3.h"
struct S2FD0b { char pad[0x2dc]; u32 m2DC; };
extern "C" void func_00230A08(S2FD0b*);
extern "C" void** data_00706E20;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" __attribute__((weak)) void func_00665160(void*, s32);
void func_002FD0BC(S2FD0b* p) {
    func_00230A08(p);
    void* g = data_00706E20;
    if (g) {
        void* a = func_0052FBA0((char*)g + 0x3dbbc, p->m2DC);
        if (a) func_00665160((char*)a + 0x49c, 5);
    }
}
