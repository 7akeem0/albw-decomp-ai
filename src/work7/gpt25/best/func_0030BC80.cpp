#include "../range_types.h"
struct Obj30BC {char pad[0x145];s8 kind;};
extern "C" bool func_0051BF18(s32);
extern "C" void func_0030BCAC(Obj30BC*);
extern "C" void f_0030BC80(Obj30BC*p){if(!func_0051BF18(p->kind))p->kind=-1;func_0030BCAC(p);}
