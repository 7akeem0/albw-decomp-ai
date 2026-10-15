#include "range.h"
extern "C" void func_00633A90(NpcControl22*);extern "C" void func_006339A0(NpcControl22*,s32,s32);void target(NpcControl22*p){func_00633A90(p);if(p->flag852==1||p->flag852==5)p->request(0,-1);func_006339A0(p,p->id984,0);}
