#include "range.h"
struct Obj {u8 pad[0x10];void*first,*second;u8 pad18[0xc9-0x18];u8 flag;};extern void func_004CF478(void*,bool,s32);
void f_0028C02C(Obj*p,bool on){func_004CF478(p->first,on,0);func_004CF478(p->second,on&&p->flag,0);}
