#include "../range_types.h"
struct Obj2881 {char pad[0x5a];s16 count;};
extern "C" void func_0037CBE0(Obj2881*);
extern "C" void func_0037C574(Obj2881*,s32);
extern "C" void f_002881F8(Obj2881*p){func_0037CBE0(p);if(p->count<0)func_0037C574(p,800);}
