#include "range.h"
struct Child {u8 pad[0xd];s8 mode;u8 phase;};struct Obj {u8 pad[0x28];Child*child;};
extern void func_0012C718(Child*);
void f_002DFB38(Obj*p){Child*q=p->child;if(q->mode==1||(q->mode==3&&q->phase==3))func_0012C718(q);}
