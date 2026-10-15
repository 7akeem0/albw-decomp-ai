#include "range.h"
extern void func_004FAD90(Object4FB2*);
void Object4FB2::mark() {
    if ((s32)(flags.value << 14) >= 0) {
        flags.set(0x20000);
        func_004FAD90(this);
    }
}
