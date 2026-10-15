#include "ds2.h"

extern void func_004FABDC(void*, int, int, int);
extern void func_00163DD4(void*, int);
extern void func_004F87F8(void*, int);
extern s32 func_004FB208(void*, int, int, int, int);
extern void func_00658604(void*, int) ;

void func_00163524(void* self) {
    func_004FABDC(self, 1, -1, 0);
    func_00163DD4(self, 0);
    func_004F87F8(self, 0);
    if (func_004FB208(self, 0, 0, 0, 0)) func_00658604((char*)self + 0x8bc, 0xb);
}

