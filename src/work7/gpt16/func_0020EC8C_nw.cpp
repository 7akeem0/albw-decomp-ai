#include "range.h"
extern  void func_0065D630(void*,s32);
inline bool step(u32&c,u32 m){if(c<m)++c;return c>=m;}
void f_0020EC8C(Obj20EC*p){p->rate=0;if(!step(p->timer.cur,p->timer.max))return;func_0065D630(&p->state,17);}
