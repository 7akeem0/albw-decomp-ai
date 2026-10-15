#include "range.h"
extern  void func_0065E398(void*,int);inline bool step21F(CounterPair*t){CounterPair c=*t;if(c.cur<c.max){t->cur=c.cur+1;return true;}return false;}void f21F778(Obj21F7*p){if(step21F(&p->timer))return;func_0065E398(&p->state,5);}
