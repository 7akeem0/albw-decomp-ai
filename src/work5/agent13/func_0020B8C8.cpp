#define EN_EXTRA void f();
#include "en20a.h"
// flag RMW through an inline setter with a mask PARAM gives r1 (plain |= gives r2)
void En::f() {
    onF59c(0x10);
    m3dc.x = 0.0f;
    m3dc.y = 0.0f;
    m3dc.z = 0.0f;
}
