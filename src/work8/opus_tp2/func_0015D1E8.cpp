#include "../../work7/gpt16/range.h"
extern void func_0015EE98(void*);
s32 index(u16 id){u32 n=id&255;if(n<4){if(n>=2)return n-2;}return -1;}
bool valid(s32 n){return n>=0;}
void phase(Obj15BA5*p,bool valid){if(!valid)p->flags.set(7);else p->flags.set(5);}
void f_0015E278(Obj15BA5*p){func_0015EE98(p);phase(p,valid(index(p->id)));*((u8*)p+0xdf0)=0;}
