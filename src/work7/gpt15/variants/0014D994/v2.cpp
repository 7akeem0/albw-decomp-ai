#include "../../range.h"
struct S{float pos,vel;};extern "C" void func_0014D994(S*p,float target,float rate,float drag){S q=*p;float d=(target-q.pos)*rate;d=q.vel+d;p->pos=q.pos+d;p->vel=d*drag;}
