#include "range.h"
struct Sub {u8 pad[0x44];u8 flag;void set(u8 n){flag=n;}};
struct Obj {u8 p0[0x40c];u32 a;u8 p410[0x34];Sub* child;u8 p448[0x6c];u32 b;};
void f_00306148(Obj* p){p->child->set(0);p->a=0;p->b=0;}
