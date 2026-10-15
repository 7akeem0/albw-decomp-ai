#define EN_EXTRA void f(); 
#include "en20c.h"

void En::f() { if (mc20 == 0) { mc20 = 1; Vec3 d = mc24 - m9b4; s32 a = func_0068C690(d); Hit20 h; if (func_0053114C(this, a, &h, 8.2f) && h.m18 <= 0.45f) { func_0020E30C(this); return; } } En* self = this; s32 r = mc30; m3e8 += r; if (func_0058A8F0(self)) mState.changeState(0x19); }
