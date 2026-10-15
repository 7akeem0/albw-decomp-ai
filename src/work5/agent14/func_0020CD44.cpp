#define EN_EXTRA void f();
#include "en20c.h"
void En::f() { mc88 = *func_00520FC0(this); Vec3 d = (const Vec3&)mc88 - m3d0; s32 a = func_0068C690(d); md18 = func_0058E2B8(AngleT(m3e8 - a)) < 0x2aaaaa80; if (!md18) func_004FABDC(this, 0xd, 6, 0); m9d8 = 1; }
