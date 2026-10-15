#include "ds4.h"
extern "C" float func_0054DE3C(void*, u32, u32);
extern "C" u32 func_0014EEB8(void*, void*, u32);
extern "C" void func_00666C04(void*, u32);

extern "C" void func_0035E40C(char* self) {
    float r = func_0054DE3C(self, 0, 1);
    float a[4];
    a[0] = 0.0f;
    a[1] = r;
    a[2] = 0.0f;
    u32 ok = func_0014EEB8(self, a, 0xddf);
    if (ok != 0 || *(float*)(self + 0x3d4) < *(float*)(self + 0x444)) {
        func_00666C04(self + 0x40c, 1);
    }
}
