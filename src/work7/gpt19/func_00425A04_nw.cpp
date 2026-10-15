#include "range.h"
struct C {u8 pad[0x16];u16 flags;};
struct S {u8 pad[0x14];C* child;u8 gap[0x20];u32 state;u8 gap2[0x3D];u8 flag;};
extern "C"  void func_0066C19C(void*,s32);
extern "C" void f_00425A04(S* s){if(!s->flag)return;if(!(s->child->flags&4))return;func_0066C19C(&s->state,4);}
