#include "../range_types.h"
struct Block30EA2C{char pad[0xbb];s8 mode;};
struct Obj30EA2C{char pad[0x900];Block30EA2C block;};
extern "C" void func_0030E724(Obj30EA2C*,s8);
extern "C" void func_0030EA5C(Obj30EA2C*);
extern "C" void f_0030EA2C(Obj30EA2C*p,s32 mode){Block30EA2C&b=p->block;if(b.mode!=mode)func_0030E724(p,(s8)mode);func_0030EA5C(p);}
