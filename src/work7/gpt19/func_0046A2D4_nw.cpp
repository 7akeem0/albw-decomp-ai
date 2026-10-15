#include "range.h"
struct C {u8 pad[0x16];u16 flags;};
struct S {u8 pad[0x14];C* child;u8 gap[0x20];u8 ctl[0x18];u32 state;};
extern "C" void func_00231340(void*);
extern "C"  void func_0066DDF4(void*,s32);
extern "C" void f_0046A2D4(S* s){if(!(s->child->flags&8)){func_00231340(s->ctl);func_0066DDF4(&s->state,2);}}
