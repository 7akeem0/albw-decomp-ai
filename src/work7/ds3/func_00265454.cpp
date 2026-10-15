#include "ds3.h"
struct S265454 { char pad[0x90c]; u8 m90C; char pad2[0x918-0x90d]; u32 m918; };
extern "C" void* func_0058A8F0(void*);
extern "C" void func_006605D4(void*, int) __attribute__((weak));
extern "C" void func_002654A4(void*);
void func_00265454(S265454* self) {
    if (func_0058A8F0(self) == 0) return func_002654A4(self);
    if (self->m90C < 0x1e) {
        self->m90C = self->m90C + 1;
    } else {
        func_006605D4(&self->m918, 3);
    }
}
