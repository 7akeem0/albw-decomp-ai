#include "ds2.h"
extern s32 func_00588BF0(void*, s32);
extern void func_0065C088(void*, s32) ;
void func_001C7B48(void* self) {
    if (*(u16*)((char*)self + 0x36) != 0) {
        char* r5 = (char*)self + 0x400;
        if (*(u8*)((char*)self + 0x460) == 0) {
            if (func_00588BF0(self, 0) != 0) { func_0065C088((char*)self + 0x430, 1); return; }
        }
        if (*(u8*)(r5 + 0x60) == 1) {
            if (func_00588BF0(self, 0) == 0) { func_0065C088((char*)self + 0x430, 1); return; }
        }
        return;
    }
    func_0065C088((char*)self + 0x430, 1);
}
