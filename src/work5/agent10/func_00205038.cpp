#define EN_EXTRA void f();
#include "en204.h"
struct TimerX { u32 cur, max; f32 rate; bool update() { TimerX c = *this; if (c.cur < c.max) { cur = c.cur + 1; return false; } return true; } bool update2() { if (cur < max) { cur++; return false; } return true; } };
 void En::f() { bool end; if (m8d4.stepC()) end = false; else end = true; if (func_00521100(this, 0.0f) && func_00521298(this) < 9.0f) { mState.changeState(6); return; } if (end) mState.changeState(4); }
