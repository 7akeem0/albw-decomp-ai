#include "range.h"
extern  void func_00659B98(void*,int);inline bool step197(CounterPair*t){CounterPair c=*t;if(c.cur<c.max){t->cur=c.cur+1;return true;}return false;}void f197C70(Obj197C18*p){if(step197(&p->timer))return;func_00659B98(&p->state,3);}
