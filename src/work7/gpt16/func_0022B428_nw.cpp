#include "range.h"
extern  void func_0065E8B8(void*,s32);
extern void func_00229E24(void*);
inline bool step(u32&c,u32 m){if(c<m)++c;return c>=m;}
void f_0022B428(Obj22B4*p){func_00229E24(p);if(!step(p->timer.cur,p->timer.max))return;func_0065E8B8(&p->state,9);}
