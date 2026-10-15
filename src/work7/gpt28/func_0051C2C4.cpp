#include "range.h"
struct Child51C2 { char pad0[0xd]; s8 first, second; };
struct Object51C2 { char pad0[0x10c]; Child51C2* child; };
extern void func_00480484(Child51C2*);
void f_0051C2C4(Object51C2* owner) {
    Child51C2* child=owner->child;
    if(child && child->first==3 && child->second==3) func_00480484(child);
}
