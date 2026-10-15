#include "range.h"
struct O{char pad[0x59c];Flag32 flags;char p5a0[0xb2c-0x5a0];u8 a,b,c,d;};extern void func_004FAD90(O*);void f(O*p){p->flags.reset(8);func_004FAD90(p);p->a=0;p->b=0;p->d=0;}

