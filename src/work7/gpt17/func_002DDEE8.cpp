#include "range.h"
struct O2DDE {u8 pad[0x8c];s16 a,b;u8 gap[0xc];u32 n;};
void f_2DDEE8(O2DDE* p,s16 a,s16 b){p->a=a;p->n=0;p->b=b;}
