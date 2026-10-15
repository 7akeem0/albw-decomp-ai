#include "ds3.h"
extern "C" int func_0052E8A0(void*);
extern "C" u32 func_0052E7D8(void*, void*);
extern "C" void func_001DD48C(void*, u32, int);
extern "C" void func_002D55D0(void*, int);
extern char data_007111A8[];
struct V9 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void slot8(); };
int func_00290328(char* self, void* a1) {
    if (*(u8*)(self + 0xb0)) return 0;
    if (func_0052E8A0(*(void**)(self + 0x10)) != 0) return 0;
    s16 k = *(s16*)(self + 0x42);
    char* e = data_007111A8 + (k << 4);
    if (*(u32*)(e + 4) & 0x100) return 0;
    if (k == 0x21) return 0;
    ((V9*)*(void**)(self + 0x48))->slot8();
    u32 r = func_0052E7D8(*(void**)(self + 0x10), a1);
    func_001DD48C(*(void**)(self + 0x10), r, 1);
    func_002D55D0(*(void**)(self + 0x48), 0x21);
    return 1;
}
