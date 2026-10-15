#include "range.h"
struct Object519D { char pad0[0x80]; void* child; };
extern void func_001B6C2C(void*);
extern void func_001B6A48(void*);
void f_00519D4C(Object519D* owner) {
    if(owner->child) { func_001B6C2C(owner->child); func_001B6A48(owner->child); }
}
