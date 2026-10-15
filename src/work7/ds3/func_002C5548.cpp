#include "ds3.h"
struct S2C55 { char pad[0x40c]; void* m40C; void* m410; };
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, s32);
extern "C" void func_004CEAF0(void*);
void func_002C5548(S2C55* p) {
    if (!p->m40C) return;
    if (p->m410) {
        func_00169A80(p->m410);
        func_00168E9C(p->m410, p->m40C, 0);
    }
    func_004CEAF0(p->m40C);
}
