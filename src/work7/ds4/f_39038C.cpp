#include "ds4.h"
extern u32 data_00708998;
extern "C" u32 func_004D838C(void*, void*, float, float, float);
extern "C" void func_001E8268(u32, void*, void*, void*);

extern "C" void func_0039038C(char* self) {
    if (*(u8*)(self + 0x41d) != 0) return;
    char* g = (char*)data_00708998;
    u32 h = *(u32*)(g + 0x18);
    *(u8*)(self + 0x41d) = (u8)func_004D838C(self + 0x450, self + 0x444, 0.04f, 0.012f, 3.4028235e38f);
    func_001E8268(h, self + 0x40c, self + 0x450, self + 0x45c);
}
