#include "range.h"
struct Counter34 { char pad0[0x34]; u32 value; };
struct Object4C69 { char pad0[0x5b0]; Counter34* child; void add(u32); };
extern void func_002E2074(Counter34*,u32);
void Object4C69::add(u32 delta) {
    Counter34* target=child;
    if(target) { target->value+=delta; if(delta) func_002E2074(target,45); }
}
