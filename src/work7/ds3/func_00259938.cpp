#include "ds3.h"
extern void* data_00711F50;
extern "C" void func_005380E0();
extern "C" void func_00297448(void*, int);
extern "C" void func_005381B4(void*);
extern "C" void func_004EC074(void*, int);
extern "C" void func_00297474(void*, f32, s32);
struct S259938 { char pad[0x3c]; u32 m3c; };
void func_00259938(S259938* self) {
    func_005380E0();
    func_00297448(data_00711F50, 0x1e);
    func_005381B4(self);
    func_004EC074(data_00711F50, 0x1e);
    if (self->m3c == 0x11) func_00297474(data_00711F50, 0.8f, 0x1e);
    else func_00297474(data_00711F50, 0.0f, 0x1e);
}
