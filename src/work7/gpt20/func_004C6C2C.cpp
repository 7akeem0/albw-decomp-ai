#include "ladder_types.h"
extern void* data_00709DF8;
struct O4C6C{char pad[0x520];u32 sub;};
extern void func_004EF418(void*,void*,u32,u32);
void f_004C6C2C(O4C6C* p,bool on){func_004EF418(data_00709DF8,&p->sub,on?13:2,0);}
