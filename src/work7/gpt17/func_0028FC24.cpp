#include "range.h"
struct Owner{u8 pad0[0x614];void* child;};
struct Obj{u8 pad0[0x1C];Owner* owner;};
extern void func_0035D65C(Obj*);
extern void func_0028FC40(void*);
void f_0028FC24(Obj*p){func_0035D65C(p);func_0028FC40(p->owner->child);}
