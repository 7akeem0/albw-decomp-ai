#include "ds2.h"

extern s32 func_0036BE48(void*);
extern s32 func_00588BF0(void*, int);
extern void func_00588C14(void*, int, int);
extern void func_0065A330(void*, int);

void func_0019FB00(void* self) {
    if (func_0036BE48((char*)self + 0x8c8) == 0) return;
    if (*(u8*)((char*)self + 0x1223) != 0 && !func_00588BF0(self, 0))
        func_00588C14(self, 0, 1);
    func_0065A330((char*)self + 0x9d0, 2);
}
