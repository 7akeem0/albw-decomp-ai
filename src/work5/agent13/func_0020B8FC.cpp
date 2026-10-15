#define EN_EXTRA void f();
#include "en20a.h"
// s0 stored after the bl without vpush = func_004F944C RETURNS the f32 (KB #135)
void En::f() {
    m3dc.z = 0.0f;
    m3dc.x = 0.0f;
    m3dc.y = func_004F944C();
    m4f0 = 1.0f;
}
