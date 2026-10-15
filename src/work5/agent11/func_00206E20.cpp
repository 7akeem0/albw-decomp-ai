#define EN_EXTRA void f();
#include "en206.h"
void En::f() { if (mState.mCounter >= 120) mState.changeState(1); }
