#include "ds2.h"
extern void func_001E6AB4(void*);
extern void* data_0070D858;
extern char data_0070DE38;
extern s32 func_001E6A6C(void*, void*);
void func_001CA7D8(void* self) {
    func_001E6AB4(self);
    if (*(u8*)((char*)self + 0x98b) != 0) return;
    char* b = (char*)data_0070D858;
    if (*(s8*)(b + 0x2f5) == -1) { *(u8*)((char*)self + 0x98b) = 1; return; }
    if (func_001E6A6C(self, &data_0070DE38) != 0) { *(u8*)((char*)self + 0x98b) = 1; return; }
}
