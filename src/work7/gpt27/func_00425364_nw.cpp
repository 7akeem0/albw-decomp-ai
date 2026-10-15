#include "range.h"
struct Child{u8 pad[22];u16 flags;};struct Obj{u8 pad[20];Child* child;u8 pad2[8];u32 state;};
extern  void func_0066C0CC(void*,s32);
void func_00425364(Obj*p){if((p->child->flags&8)==0)func_0066C0CC(&p->state,2);}
