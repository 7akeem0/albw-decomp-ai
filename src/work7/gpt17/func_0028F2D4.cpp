#include "range.h"
struct Owner {u8 pad[0x614];void* child;};
struct Obj {u8 pad[0x1c];Owner* owner;};
extern void func_0035D688(Obj*);
extern void func_0028F2F0(void*);
void f_0028F2D4(Obj* p){func_0035D688(p);func_0028F2F0(p->owner->child);}
