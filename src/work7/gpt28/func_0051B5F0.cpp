#include "range.h"
struct Object51B5 { char pad0[0xb0]; void* child; };
extern bool func_00575EB4(void*);
extern void func_00455054(void*);
void f_0051B5F0(Object51B5* owner) {
    if(owner->child && func_00575EB4(owner->child)) func_00455054(owner->child);
}
