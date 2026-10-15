#include "ds3.h"
extern "C" u32 func_0049F688(void*);
extern "C" void func_0010F1DC(void*, u32);
extern "C" void func_0019A2DC(void*);
void* func_0029767C(char* a0, char* a1) {
    if (*(void**)(a0 + 0x1c) == 0) return 0;
    char* p = a0 + 0x14;
    u32 x = func_0049F688(p);
    char* d = a0 + 0x24;
    char* v = x ? (char*)(x - *(u32*)(p + 0xc)) : 0;
    func_0010F1DC(d, *(u32*)(d + 0xc) + (u32)v);
    *(u32*)(d + 8) += 1;
    func_0019A2DC(v);
    if (a1) *(u32*)(v + 0x38) = *(u32*)(a1 + 0x2cc);
    return v;
}
