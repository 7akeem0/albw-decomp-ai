#include "ds3.h"
extern "C" void func_0014FDC4(void*, int, int, f32, f32);
extern "C" int func_0058E2B8(u32*);
extern "C" void func_0051D2F4(s32*, int, int, int, f32);
void func_002F97EC(char* self, int a1, int a2, f32 a3, f32 a4) {
    char* p = (char*)self + 0x8cc;
    u32 saved = *(u32*)(self + 0x3e8);
    func_0014FDC4(self, a1, a2, a3, 0.1f);
    if (*(void**)p) {
        u32 d;
        u32* pd = &d;
        *pd = *(u32*)(self + 0x3e8) - saved;
        s32 idx = func_0058E2B8(pd);
        s32 m = idx < 0xb60b60 ? 0xb60b60 : idx;
        func_0051D2F4((s32*)p, 0, 0xb60b60, m, 1.0f);
    }
}
