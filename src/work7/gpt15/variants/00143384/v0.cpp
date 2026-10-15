#include "../../range.h"
struct S{u8 pad[0x411];u8 flag;u8 q[0x46c-0x412];void*other;u8 r[0x48c-0x470];void*child;};extern void func_00151148(void*,s32);extern void func_004CF478(void*,u32,u32);
void func_00143384(S*p){if(p->child)func_00151148(p->child,1);func_004CF478(p->other,1,0);p->flag=1;}
