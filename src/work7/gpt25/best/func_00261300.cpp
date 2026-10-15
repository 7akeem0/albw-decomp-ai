#include "../range_types.h"
struct Obj2613 {char pad[0x36];u16 flag;};
extern "C" void func_00588C14(Obj2613*,s32,s32);
extern "C" void func_001E6CE8(Obj2613*);
extern "C" void f_00261300(Obj2613*p){if(p->flag)func_00588C14(p,0,1);func_001E6CE8(p);}
