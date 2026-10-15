#include "range.h"
u32 f_004EFFF8(s32 value) {
    if(value>=999) return 3;
    if(value>=700) return 2;
    if(value>=400) return 1;
    return 0;
}
