#include "range.h"
struct C{char pad[0x44];u8 flag;};struct O{char pad[0x40c];void*ctl;u32 unk;C*child;};extern bool func_0014F794(O*);extern void func_004CF478(void*,bool,u32);bool f(O*p){bool b=func_0014F794(p);func_004CF478(p->ctl,b,0);p->child->flag=b;return b;}
