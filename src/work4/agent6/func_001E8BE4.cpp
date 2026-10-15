#include "a6_1e8.h"
// 0x1E8BE4: for all items, last to first: item->vf34(a) (explicit null test on the element pointer)
void Sys1C8::func_001E8BE4(s32 a) {
    for (s32 i = mNum - 1; i >= 0; i--) {
        Item2D0* it = &mItems[i];
        if (it)
            it->vf34(a);
    }
}
