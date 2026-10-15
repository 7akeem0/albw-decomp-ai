#define EN7_EXTRA void f();
#include "en207.h"
void En7::f() { if ((s32)mState.mCounter > 90) mState.changeState(38); }
