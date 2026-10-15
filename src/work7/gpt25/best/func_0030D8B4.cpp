#include "../range_types.h"
struct Obj30D8B4{char pad[0x158];u8 flag;};
struct Child30D8B4{char pad[0x10];u8 flag;};
extern void*data_0070FB60;
extern "C" Child30D8B4*func_00361640(void*);
extern "C" void func_003A52EC(Obj30D8B4*);
void clear30D8B4(Obj30D8B4*p,u32 zero){Obj30D8B4*owner=p;owner->flag=zero;func_00361640(data_0070FB60)->flag=zero;func_003A52EC(owner);}
extern "C" void f_0030D8B4(Obj30D8B4*p){clear30D8B4(p,0);}
