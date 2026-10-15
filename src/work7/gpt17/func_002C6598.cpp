#include "range.h"
struct Counter {u32 cur,max;bool step(){Counter c=*this;if(c.cur>=c.max)return false;cur=c.cur+1;return true;}};
struct Part {u32 opaque;};struct Obj {u32 reserved;Part part;u8 pad8[0x2d7-8];u8 flag;u8 pad2d8[0x4e4-0x2d8];Counter timer;void setFlag(u8 v){flag=v;}};extern void func_00547514(Part*);
void f_002C6598(Obj*p){Counter t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_00547514(&p->part);p->flag=1;}
