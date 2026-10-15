#include "range.h"
extern  void func_0065BA34(void*,int);inline bool step1C(CounterPair*t){CounterPair c=*t;if(c.cur<c.max){t->cur=c.cur+1;return true;}return false;}void f1C1F8C(Obj1C1F*p){if(step1C(&p->timer))return;func_0065BA34(&p->state,2);}
