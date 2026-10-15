#include "range.h"
struct Obj{u8 pad[0x477];u8 flag;};
extern void func_00273B3C(Obj*);
extern void func_001B9AAC(Obj*,void*);
void f_00273B10(Obj*p,void*a){if(p->flag)func_00273B3C(p);func_001B9AAC(p,a);}
