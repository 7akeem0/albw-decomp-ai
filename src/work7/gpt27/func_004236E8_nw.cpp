#include "range.h"
struct Child{u8 pad[22];u16 flags;};struct Obj{u8 pad[20];Child* child;u8 pad2[32];u32 state;};
extern  void func_0066BFFC(void*,s32);
void func_004236E8(Obj*p){if((p->child->flags&8)==0)func_0066BFFC(&p->state,8);}
