#include "ladder_types.h"
struct O4FAB {char pad0[0x87c];u8 a,b,c;};
void target(O4FAB*p,u32 a,u32 b,u32 c){p->a=a?a:10;if(b)p->b=b;else p->b=20;if(c)p->c=c;else p->c=40;}
