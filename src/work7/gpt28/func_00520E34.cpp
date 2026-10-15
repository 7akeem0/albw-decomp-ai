#include "range.h"
struct Object520E { char pad0[0x30]; FlagsDE* child; };
bool f_00520E34(Object520E* owner) {
    FlagsDE* child=owner->child;
    if(child) { if(child->first || child->second) return false; }
    return true;
}
