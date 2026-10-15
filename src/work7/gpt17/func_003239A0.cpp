#include "range.h"
struct Sub {u8 pad[0x50];u8 state;void func_00231CBC();};
struct Obj {u8 pad[0x1ec];Sub* child;};
void f_003239A0(Obj* p){Sub* s=p->child;if(s->state==2)s->func_00231CBC();}
