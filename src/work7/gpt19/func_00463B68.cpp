#include "range.h"
struct C {u8 pad[0x10C];u8 flag;};
struct S {u8 pad[0x134];C* child;u8 gap[0x14];u32 mode;};
extern "C" void func_0012C85C(S*);
extern "C" void func_004639BC(S*);
extern "C" void f_00463B68(S* s){if(s->mode==1){if(!s->child->flag)func_004639BC(s);}else if(s->mode==2)func_0012C85C(s);}
