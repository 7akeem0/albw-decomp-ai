#include "../range_types.h"
struct Obj2FBE10{char pad[0x8f8];Timer25 timer;};
extern "C" void func_004FABDC(Obj2FBE10*,s32,s32,s32);
extern "C" void f_002FBE10(Obj2FBE10*p){p->timer.start(2);func_004FABDC(p,7,-1,0);}
