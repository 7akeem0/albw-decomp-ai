#define ACT_EXTRA void func_001D063C();
#include "a1_1d0.h"
// Vec3 zeroing with vldr AFTER the previous float store = 3-iteration float loop (KB #8)
void Act1D0::func_001D063C() {
    m391 = 1;
    m3ac = -1.0f;
    for (int i = 0; i < 3; i++)
        (&m3dc.x)[i] = 0.0f;
}
