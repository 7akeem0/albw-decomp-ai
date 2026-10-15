#include "range.h"
u32 clamp1724(u32 n){return n>=1000?999:n;}void f17244C(Obj171*p,u32 n){if(n>=1000)p->timer.cur=999;else{p->timer.cur+=n;p->timer.cur=clamp1724(p->timer.cur);}}
