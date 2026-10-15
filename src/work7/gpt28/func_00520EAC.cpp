#include "range.h"
struct Object520EAC { char pad0[0x44]; FlagsDE* child; };
bool f_00520EAC(Object520EAC* owner) {
    FlagsDE* child=owner->child;
    if(child) { if(child->first || child->second) return false; }
    return true;
}
