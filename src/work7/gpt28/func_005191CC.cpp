#include "range.h"
struct Object5191 { char pad0[0xa0]; void* child; };
extern void func_00471760(void*);
extern void func_001B6C2C(void*);
void f_005191CC(Object5191* owner) {
    if(owner->child) { func_00471760(owner->child); func_001B6C2C(owner->child); }
}
