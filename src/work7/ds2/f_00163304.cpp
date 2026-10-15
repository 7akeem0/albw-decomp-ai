#include "ds2.h"

extern bool func_0058A8F0(void*);
extern void func_004FABDC(void*, int, int, int);
extern void func_00658604(void*, int);
extern void func_004FC218(void*, int, int, int);

void func_00163304(void* self) {
    if (func_0058A8F0(self)) func_004FABDC(self, 6, -1, 0);
    u32 a = *(u32*)((char*)self + 0x908);
    u32 b = *(u32*)((char*)self + 0x90c);
    if (a < b) {
        *(u32*)((char*)self + 0x908) = a + 1;
        return;
    }
    func_00658604((char*)self + 0x8bc, 3);
    func_004FC218(self, 5, 0, 0x7fff);
}
