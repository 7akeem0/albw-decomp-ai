#include "ds3.h"
extern "C" void func_001E6AB4(void*);
extern "C" void func_001E6A6C(void*, void*);
extern "C" void func_004AD7A0(f32, f32);
extern "C" int func_004AC854();
extern void* data_0070C8E0;
extern char data_0070EBD0[];
extern char data_0070EBD8[];
void func_00285B34(char* self) {
    if (!*(u8*)(self + 0x99c)) { func_001E6AB4(self); return; }
    *(u8*)(self + 0x99c) = 0;
    if (data_0070C8E0 == 0) return;
    func_004AD7A0(*(f32*)(self + 0x3d0), *(f32*)(self + 0x3d8));
    int r = func_004AC854();
    func_001E6A6C(self, (r == 0x17) ? data_0070EBD0 : data_0070EBD8);
}
