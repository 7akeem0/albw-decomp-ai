#include "ladder_types.h"
struct Object4B26 {char p0[0xc];u32 mc;char p10[0x28];s8 m38;};
extern void func_004B262C(void*,u32*,s32);
void func_004B2618(Object4B26* p,void* a) {func_004B262C(a,&p->mc,p->m38);}
