#include "ds2.h"
extern void func_0051D2F4(s32*, s32, f32, s32, s32);
extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);
extern s32 func_0028B148(void*);
extern s32 func_00163DD4(void*, int);
extern void func_00658604(void*, s32) __attribute__((weak));
extern void func_004FABDC(void*, int, int, int);
void func_001641E4(void* self) {
    func_0051D2F4((s32*)((char*)self + 0x3e8), *(s32*)((char*)self + 0x904), 0.1f, 0x2d82d82, 0x7fffffff);
    void* f = func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)((char*)self + 0x8f8));
    if (f != 0) { if (func_0028B148(f) == 0) return; }
    if (func_00163DD4(self, 1) != 0) {
        func_00658604((char*)self + 0x8bc, 4);
        return;
    }
    func_00658604((char*)self + 0x8bc, 8);
    func_004FABDC(self, 2, -1, 0);
}
