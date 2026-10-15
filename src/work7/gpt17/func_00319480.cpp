#include "range.h"
struct Sub {u8 pad[0x2dc];u32 value;void set(u32 n){value=n;}};
struct Obj {u8 p0[0x2cc];u32 value;u8 p2d0[0x14c];Sub* child;u8 p420[0x79];u8 flag;};
void f_00319480(Obj* p){p->flag=1;Sub* s=p->child;s->set(p->value);}
