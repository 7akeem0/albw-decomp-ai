#include "range.h"
struct Sub {u32 opaque;};
struct Obj {u8 pad[0x410];void* child;u8 p414[0x58];Sub sub;};
extern void func_00151148(void*,u32);
extern void func_00393164(Sub*);
void f_00288140(Obj* p){func_00151148(p->child,0);func_00393164(&p->sub);}
