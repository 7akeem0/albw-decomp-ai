#include "../include/swap_remove.h"

void Mgr26CC::remove(Item* o) {
    sead::ScopedLock<sead::CriticalSection> lock(&mCS);
    if (mList.indexOf(o) >= 0)
        mList.erase(o);
}
