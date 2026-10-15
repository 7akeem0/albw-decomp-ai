#include "ds3.h"
struct S288168 { char pad[0x40c]; void* m40C; void* m410; char pad2[0x4dc-0x414]; u32 m4dc; };
extern "C" void* data_0070B728;
extern "C" void func_004CDF40(void*, int, int);
extern "C" void func_004CF478(void*, int, int);
extern "C" void func_00151148(void*, int);
extern "C" void func_00661480(void*, int) __attribute__((weak));
void func_00288168(S288168* self) {
    func_004CDF40(data_0070B728, 0x3c5, 1);
    func_004CF478(self->m40C, 0, 0);
    func_00151148(self->m410, 0);
    func_00661480(&self->m4dc, 7);
}
