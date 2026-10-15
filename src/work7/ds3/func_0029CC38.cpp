#include "ds3.h"
struct S29CC38 { char pad[0xbc]; char mBC[0x30]; void* mEC; };
extern "C" void* data_007142B0;
extern "C" void func_002DFB68(void*);
extern "C" void* func_0054743C(void*);
extern "C" void func_0025F9FC(void*, int);
extern "C" void func_00661C18(void*, int) __attribute__((weak));
void func_0029CC38(S29CC38* self) {
    if (((u8*)self->mEC)[0x195] != 0) func_002DFB68(data_007142B0);
    if (func_0054743C(data_007142B0) != 0) {
        func_0025F9FC(self->mEC, 0);
        func_00661C18(&self->mBC, 2);
    }
}
