#include "ds2.h"

extern s32 func_00588BF0(void*, int);
extern void func_0036BFD0(void*, int, int);
extern void func_0065E398(void*, int) ;

void func_00221318(void* self) {
    if (*(u16*)((char*)self + 0x36) == 0) return;
    if (!func_00588BF0(self, 0)) return;
    *(u8*)((char*)self + 0x9dc) = 2;
    *(void**)((char*)self + 0x910) = (char*)self + 0xa5c;
    func_0036BFD0((char*)self + 0x8e8, -1, -1);
    func_0065E398((char*)self + 0x8c0, 1);
}

