#define EN_EXTRA void f();
#include "en206.h"
void En::f() { if ((s32)mState.mCounter >= 100) mState.changeState(10); }
