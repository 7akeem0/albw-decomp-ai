#include "range.h"
inline u32 mn(u32 a,u32 b){return a>b?b:a;}struct C{u8 pad[0x510];u32 count;void step(u32 max){++count;count=mn(count,max);}};struct O{u8 pad[0x10];C*child;};extern "C" void func_00361494(O*p){p->child->step(99999);}
