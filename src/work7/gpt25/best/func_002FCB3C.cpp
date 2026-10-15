#include "../range_types.h"
struct Obj2FCB3C{char pad[0x119];u8 flag;};
extern void*data_0070FB60;
extern "C" void func_003615F0(void*);
extern "C" void func_00166188(Obj2FCB3C*);
extern "C" void f_002FCB3C(Obj2FCB3C*p){if(p->flag)func_003615F0(data_0070FB60);func_00166188(p);}
