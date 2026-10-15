#include "range.h"
struct Child;struct Obj {u8 pad[0x14];Child*child;u8 pad18[0x38-0x18];u32 state;u8 pad3c[0x5c-0x3c];u8 active,flag;};extern void func_002C00A8(Child*);extern void func_00662C9C(u32*,s32) ;
void f_002BF950(Obj*p,bool on){func_002C00A8(p->child);if(on)p->active=1;p->flag=0;func_00662C9C(&p->state,0);}
