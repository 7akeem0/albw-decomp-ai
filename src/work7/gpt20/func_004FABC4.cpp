#include "ladder_types.h"
struct O4FAB {char pad0[0x979];u8 flag;};
extern void func_004FABDC(O4FAB*,s32,s32,s32);
void f_004FABC4(O4FAB* p){p->flag=0;func_004FABDC(p,4,-1,0);}
