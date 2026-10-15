#include "range.h"
struct Obj437D{u8 pad[0x74];void*a,*b;};
extern "C" void func_001B6D40(Obj437D*);extern "C" void func_00166C00(void*,s32);extern "C" void func_0012C790(void*);extern void*data_0070B850;
void func_00437D1C(Obj437D*p){func_001B6D40(p);func_00166C00(data_0070B850,0);func_0012C790(p->a);func_0012C790(p->b);}
