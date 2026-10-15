#include "ladder_types.h"
struct Input4A70 {u32 pad0;void* value;};
struct O4A70 {char pad0[0xc];void* value;char pad10[0x14];u8 flag;char pad25[0x1f];char sub44[4];};
extern "C" void func_00110DDC(void*,u32);
void finish4A70(O4A70*p){func_00110DDC(p->sub44,0);p->flag=4;}
void apply4A70(O4A70*p,const Input4A70*q){if(p->value==q->value)finish4A70(p);}
extern "C" void func_004A7020(O4A70*p,const Input4A70*q){if(!p->value)return;apply4A70(p,q);}
