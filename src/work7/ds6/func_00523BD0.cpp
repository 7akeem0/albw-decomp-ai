#include "ds6.h"

u32 func_00523BD0(char* self) {
    u32 frames = *(u32*)(self + 0x2d8);
    u32 sec = (u32)((f32)frames / 60.0f);
    return sec % 60;
}
