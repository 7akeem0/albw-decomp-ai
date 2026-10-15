#include "ds2.h"
extern void* data_007142C8;
extern s32 func_0058DB14(void*);
extern s32 func_0058D954(void*);
extern void func_00519B8C(void*);
extern void func_0065EB40(void*, s32) __attribute__((weak));
void func_0022FFE0(void* self) {
    if (func_0058DB14(data_007142C8) != 0) {
        *(u8*)((char*)self + 0x274) = 0;
        func_0065EB40((char*)self + 0x250, 2);
        return;
    }
    if (func_0058D954(data_007142C8) != 0) {
        func_00519B8C(data_007142C8);
        func_0065EB40((char*)self + 0x250, 5);
    }
}

