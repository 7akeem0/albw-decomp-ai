#include "../../work7/ds3/ds3.h"
struct S37AF34 { char pad[0xc0]; char mC0[0x10]; };
extern "C" void* data_00714248;
extern "C" int func_005473E0(void*);
extern "C" int func_005473F8(void*);
extern "C" void func_0066777C(void*, int) __attribute__((weak));
void func_0037AF34(S37AF34* self) {
    if (func_005473E0(data_00714248) == 0) return;
    if (func_005473F8(data_00714248) != 0) {
        if (func_005473F8(data_00714248) == 1) func_0066777C(&self->mC0, 5);
        return;
    }
    func_0066777C(&self->mC0, 3);
}
