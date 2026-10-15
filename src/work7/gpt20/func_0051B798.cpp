#include "ladder_types.h"
extern void func_00481810(Child51A3*,s32);
void target(O51B7*p,s32 n){Child51A3*c=p->child;if(c&&!c->gate&&!c->flag)func_00481810(c,n);}
