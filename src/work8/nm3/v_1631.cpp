#include "ds2.h"

extern bool func_0058A8F0(void*);
extern s32 func_00163DD4(void*, int);
extern __attribute__((weak)) void func_00658604(void*, int);
extern void func_004FABDC(void*, int, int, int);

void func_00163130(void* self) {
    if (!func_0058A8F0(self)) return;
    if (func_00163DD4(self, 1) != 0) {
        func_00658604((char*)self + 0x8bc, 4);
        return;
    }
    func_00658604((char*)self + 0x8bc, 8);
    func_004FABDC(self, 2, 0, 0);
}
