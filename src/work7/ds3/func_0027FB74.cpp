#include "ds3.h"
extern "C" Vec3* func_00520FC0();
int func_0027FB74(char* self) {
    f32 dx = func_00520FC0()->x - *(f32*)(self + 0x3d0);
    dx = dx > 0.0f ? dx : -dx;
    if (dx < 0.5f) return 0;
    char* p = self + 0x400;
    if (*(f32*)(p + 0x80) != *(f32*)(p + 0x98)) return 0;
    if (*(f32*)(p + 0x78) == *(f32*)(p + 0x90)) return 1;
    return 0;
}
