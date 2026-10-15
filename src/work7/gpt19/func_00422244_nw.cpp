#include "range.h"
struct C {u8 pad[8];void* p8;u8 gap[10];u16 flags;};
struct S {u8 pad[0x14];C* child;u8 gap[0x20];u32 state;};
extern "C"  void func_0066BE5C(void*,s32);
extern "C" void f_00422244(S* s){C* c=s->child;if(!(c->flags&8))return;if(c->p8)return;func_0066BE5C(&s->state,1);}
