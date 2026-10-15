#include "range.h"
extern void func_00588C14(Object4E4E*, u32, u32);
void Object4E4E::reset() {
    if (enabled) func_00588C14(this, 0, 0);
}
