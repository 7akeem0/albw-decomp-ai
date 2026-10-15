#include "range.h"
struct O{char pad[0x20];u8 flag;char p21[0x29e-0x21];s16 state;};
extern void func_002E11A0(void*,u32,u32);
void f(O*p,u32 a,u32 b){if(p->state<0)return func_002E11A0((char*)p+0xb8,a,b);if(p->state>=1)return func_002E11A0((char*)p+0xb8,a,b);if(!p->flag)return func_002E11A0((char*)p+0xb8,a,b);}
