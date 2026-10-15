#include "range.h"
struct Child15C { char pad0[0x15c]; s32 kind; };
struct Object4FC2 { char pad0[0x510]; Child15C* child; };
extern void func_002B1FBC(Child15C*,u32,u32);
void forwardChild(Child15C*& child, u32 a, u32 b) { func_002B1FBC(child,a,b); }
void f_004FC218(Object4FC2* owner, u32 kind, u32 a, u32 b) {
    u32 saved=kind;
    u32 first=a;
    Child15C*& child=owner->child;
    forwardChild(child,first,b);
    child->kind=(s8)saved;
}
