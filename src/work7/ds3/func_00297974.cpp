#include "ds3.h"
extern "C" void func_002DF504(void*, void*);
extern "C" void func_00152444(void*);
extern "C" void func_001525B8(void*);
extern "C" void func_00152798(void*);
extern "C" void func_002DF44C(void*, void*);
extern void* data_00712588;
struct V7 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void slot6(int); };
void func_00297974(char* self) {
    char* g = (char*)data_00712588;
    if (*(u32*)(g + 0x10) != 0) return;
    func_002DF504(g, self);
    u8 k = *(u8*)(self + 0x90);
    if (k == 0) func_00152444(*(void**)(self + 0x8c));
    else if (k == 1) func_001525B8(*(void**)(self + 0x8c));
    else if (k == 2) func_00152798(*(void**)(self + 0x8c));
    func_002DF44C((void*)data_00712588, self);
    ((V7*)self)->slot6(0);
}
