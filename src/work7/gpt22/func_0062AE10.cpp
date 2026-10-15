#include "range.h"
extern "C" void func_0062AF44(NpcControl22*);
extern "C" void func_0062AE54(NpcControl22*,s32,s32);
void target(NpcControl22* p) {
 func_0062AF44(p);
 if(p->flag852==1)p->request(0,-1);
 func_0062AE54(p,p->id984,0);
}
