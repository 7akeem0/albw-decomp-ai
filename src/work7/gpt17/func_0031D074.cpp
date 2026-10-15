#include "range.h"
struct Obj {u8 pad[0x10];u32 state;u8 p14[0x20];u32 value;u8 p38[4];void* child;};
extern void func_00168E9C(void*,u32,u32);
void f_0031D074(Obj* p){if(p->state==2)func_00168E9C(p->child,p->value,0);}
