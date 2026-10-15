#include "range.h"
struct S{char pad[0x80];Ctrl231 ctrl;char gap[8];u8 invalid,flag;};extern void func_00231448(Ctrl231*);extern void func_001B6DE0(S*);
void f_00444590(S*p){func_00231448(&p->ctrl);p->flag=0;p->invalid=255;func_001B6DE0(p);}
