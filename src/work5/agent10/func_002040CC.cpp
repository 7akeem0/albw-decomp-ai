#define EN_EXTRA void f(); void setCC(const u16& v){ m8cc = v; }
#include "en204.h"
 void En::f() { if (m8cc != 0) { if (m8d4.stepC2()) return; func_004FC5EC(this, 10); mState.changeState(3); func_004FC5EC(this, 8); } else if (func_0058A8F0(this)) { u16 one = 1; m8cc = one; func_004FABDC(this, 5, 5, 0); } }
