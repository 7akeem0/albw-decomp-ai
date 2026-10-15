#include "range.h"
struct S{u8 pad[0x361];u8 flag;u8 pad2[0x85e-0x362];u8 status;};
extern "C" void func_004BCAE0(S*,bool);
void target(S* p){p->flag=1;func_004BCAE0(p,true);p->status=0;}
