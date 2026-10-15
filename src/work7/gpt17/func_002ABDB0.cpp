#include "range.h"
struct Obj {u8 pad[0x34];void*child;u8 pad38[0x268-0x38];u32 a,b;f32 c,d;u32 e,g;};extern void func_004FBCC0(void*);
void f_002ABDB0(Obj*p,bool reset){p->b=0;p->c=0.f;p->a=0;p->d=0.f;p->e=0;p->g=0;if(reset)func_004FBCC0(p->child);}
