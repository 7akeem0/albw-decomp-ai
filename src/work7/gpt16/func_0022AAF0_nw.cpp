#include "range.h"
extern  void func_0065E8B8(void*,int);inline bool step229(CounterPair*t){CounterPair c=*t;if(c.cur<c.max){t->cur=c.cur+1;return true;}return false;}void f22AAF0(Obj229D*p){if(step229(&p->timer))return;func_0065E8B8(&p->state,2);}
