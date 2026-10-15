#include "range.h"
u32 Object537C::get(s32 index) const {
    if((u32)(index-18)>4 || !enabled[index]) return 14;
    return values[index];
}
