#include "range.h"
extern "C" bool func_00547538(u32*);
extern "C" void func_004C07D8(NpcControl22*);
extern "C"  void func_0062440C(NpcControl22*,s32,u8);
void target(NpcControl22*p){if(func_00547B20(&p->sub)&&!func_00547538(&p->sub)&&!p->flag85d){p->value3ac=-1.f;func_004C07D8(p);p->flag861=1;func_0062440C(p,2,2);}}
