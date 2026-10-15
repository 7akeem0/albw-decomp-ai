#define EN_EXTRA void target();
#include "include/en214.h"
void En::target(){mState.changeState(mState.mNext);}
