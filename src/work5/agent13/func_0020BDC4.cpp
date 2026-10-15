#define EN_EXTRA void f();
#include "en20a.h"
// dead 'ldrb r1,[r0,#0xc78]' = if/else on mc78 whose two arms are identical (ARMCC merges the arms, keeps the load)
void En::f() {
    if (mc78) func_004FABDC(this, 0xf, 1, 0);
    else func_004FABDC(this, 0xf, 1, 0);
    func_004ED46C(data_00708998, 1);
}
