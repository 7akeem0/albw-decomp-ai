#include "ds2.h"
extern s32 func_00588BF0(void*, s32);
extern void func_0065C088(void*, s32) ;
void func_001C80A4(void* self) {
    if (*(u16*)((char*)self + 0x32) != 0) return;
    if (*(u16*)((char*)self + 0x36) == 0) return;
    char* r5 = (char*)self + 0x400;
    if (*(u8*)((char*)self + 0x460) == 0) {
        if (func_00588BF0(self, 0) != 0) return;
    }
    if (*(u8*)(r5 + 0x60) == 1) {
        if (func_00588BF0(self, 0) == 0) return;
    }
    func_0065C088((char*)self + 0x430, 4);
}
