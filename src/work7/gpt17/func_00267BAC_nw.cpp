#include "range.h"
struct Sub{u32 opaque;u8 flag;};
struct Obj{u8 pad[0x510];Sub*child;u8 pad514[0x3b4];u32 state;};
extern  void func_00660718(u32*,s32);
void f_00267BAC(Obj*p){if(p->child->flag)return;func_00660718(&p->state,0);}
