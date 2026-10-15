#include "range.h"
struct M{f32 m[9];};struct O{u8 p[8];M a,b;u8 q[0x24];u8 flag;};extern "C" void func_001151CC(M*,const M*); M*target(O*p){return &p->a;}extern "C" void func_0036D4FC(O*p){func_001151CC(target(p),&p->b);p->flag=1;}
