#include "ds3.h"
extern "C" void* func_0052FBA0(void*, u32);
extern "C" void func_003A42B0(void*, int);
extern "C" void func_0039DC1C(void*, int, int);
extern "C" void func_004FB4E0(void*, f32);
extern void* data_00706E20;
void func_002F4C78(char* self, int a1) {
    if (a1 == 0x21) return;
    char* a = (char*)func_0052FBA0((char*)data_00706E20 + 0x3dbbc, *(u32*)(self + 0xc90));
    *(u32*)(self + 0x920) = 0;
    func_003A42B0(self + 0x8ec, 2);
    if (a) func_0039DC1C(a, 0, 0);
    func_004FB4E0(self, 1.0f);
}
