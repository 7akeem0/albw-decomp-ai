#include "range.h"
struct ChildA476 { char pad0[0x114]; u32 state; };
struct ObjectA476 { char pad0[0x50]; u32 state; char pad54[0x2c]; ChildA476* child; };
extern void func_00231448(u32*);
extern void func_005452D4(u32*);
void f_004A4764(ObjectA476* owner) {
    func_00231448(&owner->state);
    if(owner->child) func_005452D4(&owner->child->state);
}
