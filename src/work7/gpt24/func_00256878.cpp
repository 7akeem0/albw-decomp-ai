#include "range.h"
struct Object2568 {char pad[0x28];char interp[0x40-0x28];f32 target,current;};
extern void func_0010C7F8(void*,s32,f32);
void target(Object2568*p,s32 n,f32 v){func_0010C7F8(p->interp,n,v);p->target=v;if(n==0)p->current=v;}
