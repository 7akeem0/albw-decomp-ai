#include "ladder_types.h"
struct G5390 {char pad0[0x18];u32 sub;};
extern G5390* data_00709DF8;
extern void func_005382AC(void*,void*,void*,u32);
void f_0053900C(void* p,void* a,u32 b){func_005382AC(p,a,&data_00709DF8->sub,b);}
