#include "range.h"
struct Obj33A2 {char pad[0x98a];u8 value;};
extern void func_001E6AB4(Obj33A2*,void*);
extern void func_004C0508(Obj33A2*,void*);
void func_0033A2F8(Obj33A2* p,void* a){if(p->value==10)func_004C0508(p,a);else func_001E6AB4(p,a);}
