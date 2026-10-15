#include "range.h"
extern "C" void func_004BC7BC(NpcControl22*);
void target(NpcControl22*p){p->state85e=1;func_004BC7BC(p);p->request(p->id853,-1);p->visible361=0;p->v38();}
