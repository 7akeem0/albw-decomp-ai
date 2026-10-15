#include "../include/swap_insert.h"

void Cls2664::func_001E2664(Item* item) {
    {
        ScopedLock<CriticalSection> lock(&mCS);
        item->ma0.func_0010A8D4();
        mList.pushBack(item);
    }
    if (!item->ma0.func_0010A884())
        item->ma0.func_0010A7BC();
}
