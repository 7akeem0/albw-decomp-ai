#include "ds2.h"

extern s32 func_00588BF0(void*, int);
extern void func_00163DD4(void*, int);
extern void func_00658604(void*, int);
extern void func_004FABDC(void*, int, int, int);

void func_00163004(void* self) {
    if (!func_00588BF0(self, 0)) return;
    func_00163DD4(self, 0);
    func_00658604((char*)self + 0x8bc, 8);
    func_004FABDC(self, 2, -1, 0);
}
