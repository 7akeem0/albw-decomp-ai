#include "range.h"
struct Obj421 {u8 pad[0x2c];s32 limit;u32 a,b;s32 selected;};
void func_0042198C(Obj421* p,s32 n,s32 m){p->limit=n;if(n>=m)p->selected=m;else p->selected=-1;p->b=0;p->a=0;}
