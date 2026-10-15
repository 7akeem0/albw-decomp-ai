#include "ds3.h"
extern "C" u32 func_00392E48(void*, int, f32*, int);
u32 func_002AB248(char* a0, f32* a1, int a2) {
    f32 v = 0.0f;
    u32 r = func_00392E48(a0, 0, &v, a2);
    if (r < 5) {
        if (a1) *a1 = v - *(f32*)(a0 + 4);
        return r;
    }
    if (a1) *a1 = v - *(f32*)(a0 + 4);
    return 4;
}
