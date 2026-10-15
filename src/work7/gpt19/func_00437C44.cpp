#include "range.h"
struct C {u8 pad[13];u8 d,e;};
struct S {u8 pad[0x74];C* c;};
extern "C" void func_00232468(S*);
extern "C" void f_00437C44(S* s){func_00232468(s);C* c=s->c;if(!c->d&&!c->e)c->e=1;}
