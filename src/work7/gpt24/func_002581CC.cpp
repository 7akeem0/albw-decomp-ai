#include "range.h"
struct Obj258124{char pad[0xc];char sub[0x65-0xc];u8 a,b,c;};
extern void func_0048BCF4(void*,s32);
extern "C" void target(Obj258124*p,s32 frames){if(p->b){u8 z=0;u8 a=p->a;p->b=z;if(!a&&!p->c)func_0048BCF4(p->sub,frames);}}
