#include "ds3.h"
struct S29DB6C { char pad[0xbc]; char mBC[0x10]; };
extern "C" void* data_007143B8;
extern "C" int func_0054168C(void*);
extern "C" int func_005415F4(void*);
extern "C" void func_00661D5C(void*, int) __attribute__((weak));
void func_0029DB6C(S29DB6C* self) {
    if (func_0054168C(data_007143B8) == 0) return;
    if (func_005415F4(data_007143B8) != 0) { func_00661D5C(&self->mBC, 3); return; }
    func_00661D5C(&self->mBC, 2);
}
