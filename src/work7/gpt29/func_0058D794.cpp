#include "range.h"
struct Owner58D7 { char pad0[0x124]; void* child; };
extern void func_0057559C(void*,u8*,u8*,u8*);
void f_0058D794(Owner58D7* p,u8* a,u8* b,u8* c) { if(p->child)func_0057559C(p->child,a,b,c);else *a=*b=*c=0; }
