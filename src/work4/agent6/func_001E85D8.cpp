#include "a6_1e8.h"
// 0x1E85D8: for all items, last to first: item->vf18() (explicit null test on the element pointer)
void Sys1C8::func_001E85D8() {
    for (s32 i = mNum - 1; i >= 0; i--) {
        Item2D0* it = &mItems[i];
        if (it)
            it->vf18();
    }
}
