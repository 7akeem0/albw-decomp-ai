#include "range.h"
struct S477 {u8 pad[0x2d3];};struct O477 {u32 a;S477 sub;u8 flag;};
extern "C" void func_00588C14(O477*,bool,bool);
extern "C" void func_00547514(S477*);
extern "C" void func_00334774(O477*p){func_00588C14(p,true,true);func_00547514(&p->sub);p->flag=1;}
