#include "range.h"
extern void func_0014A0C0(void*);
void Object4EAE::update() {
    func_0014A0C0(child);
    u32 flags_ = flags.value; flags_ &= ~1; flags_ |= 4; flags.value = flags_;
}
