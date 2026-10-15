#include "range.h"
struct Child422 {u8 pad[0x16];u16 flags;};
struct Obj4222 {u8 pad[0x14];Child422* child;u8 pad18[0x38-0x18];u32 state;};
extern  void func_0066BE5C(void*,s32);
void func_00422274(Obj4222* p){if((p->child->flags&8)==0)func_0066BE5C(&p->state,0);}
