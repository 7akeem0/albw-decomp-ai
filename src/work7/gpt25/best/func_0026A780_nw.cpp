#include "../range_types.h"
struct Obj26A7{char pad[0x8c8];u32 state;char gap[0x9ac-0x8cc];u32 control;};
extern "C" bool func_0058A8F0(Obj26A7*);
extern "C" bool func_0036BE48(u32*);
extern "C"  void func_00660718(u32*,s32);
void func_0026A780(Obj26A7*p){if(func_0058A8F0(p)&&func_0036BE48(&p->control))func_00660718(&p->state,0);}
