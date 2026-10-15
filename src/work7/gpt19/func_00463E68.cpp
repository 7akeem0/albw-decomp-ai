#include "range.h"
struct C {u8 pad[0x16];Flag16 flags;};
struct S {u8 pad[0x14];C* child;u8 gap[0x3D];u8 flag;};
extern "C" void func_00232468(S*);
extern "C" void func_002C00A8(C*);
extern "C" void f_00463E68(S* s){func_00232468(s);C* c=s->child;Flag16* flags=&c->flags;flags->set(0x40);func_002C00A8(s->child);s->flag=0;}
