#include "range.h"
extern  void func_0065E9FC(void*,s32);
inline bool step(u32&c,u32 m){if(c<m)++c;return c>=m;}
void f_0022F15C(Obj22F1*p){if(!step(p->timer.cur,p->timer.max))return;p->flag=0;func_0065E9FC(&p->state,2);}
