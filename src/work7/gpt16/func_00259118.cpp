#include "range.h"
extern void func_0040D864(void*,u8);extern void func_0040D8C0(void*,f32);
void enable(void*c,u8 n){if(c)func_0040D864(c,n);}
void speed(void*c,f32 v){if(c)func_0040D8C0(c,v);}
void f_00259118(Obj2591*p){if(!p->flag){enable(p->child,1);speed(p->child,0);}}
