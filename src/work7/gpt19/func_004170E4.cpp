#include "range.h"
struct C {u8 pad[0x1A4];C* next;};
struct S {u8 pad[0x130];C* head;};
extern "C" void func_0041CA0C(C*);
extern "C" void f_004170E4(S* s){for(C* c=s->head;c;c=c->next)func_0041CA0C(c);s->head=0;}
