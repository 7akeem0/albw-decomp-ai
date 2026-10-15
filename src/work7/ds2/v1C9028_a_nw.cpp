#include "ds2.h"
extern s32 func_00588BF0(void*, s32);
extern void func_0065C1CC(void*, s32) ;
void func_001C9028(void* self) {
    if (*(u16*)((char*)self + 0x36) == 0) return;
    char* r5 = (char*)self + 0x400;
    if (*(u8*)((char*)self + 0x4b0) == 0) {
        if (func_00588BF0(self, 0) != 0) return;
    }
    if (*(u8*)(r5 + 0xb0) == 1) {
        if (func_00588BF0(self, 0) == 0) return;
    }
    func_0065C1CC((char*)self + 0x40c, 3);
}
