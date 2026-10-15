#include "range.h"
struct O{char pad[0x40c];void*ctl;};extern bool func_0014F794(O*);extern void func_004CF478(void*,bool,u32);bool f(O*p){bool b=func_0014F794(p);if(p->ctl)func_004CF478(p->ctl,b,0);return b;}
