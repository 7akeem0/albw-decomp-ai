#include "range.h"
struct Sub54CB{char pad0[0x11];s8 a;char pad12[0xb];s8 b;};
struct Child54CB{char pad0[0x694];Sub54CB sub;};
struct Owner54CB{char pad0[0x10];Child54CB*child;u32*flags;};
__declspec(noinline) u32 func_0054CE64(Owner54CB*p,s32 type){Sub54CB*s=&p->child->sub;if(s->a==type)return 16;if(s->b==type)return 8;return 0;}
bool f_0054CB5C(Owner54CB*p){u32 v=func_0054CE64(p,16);if(!v)return false;return(v&*p->flags)!=0;}
