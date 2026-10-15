#include "../../work7/gpt17/range.h"
struct Counter {u32 cur,max;bool step(){Counter c=*this;if(c.cur>=c.max)return false;cur=c.cur+1;return true;}};
struct Part {u32 opaque;};struct Obj {u32 reserved;Part part;u8 pad8[0x2d7-8];u8 flag;u8 pad2d8[0x47c-0x2d8];void* m47c;u8 pad480[0x4e4-0x480];Counter timer;void setFlag(u8 v){flag=v;}};extern void func_00547514(Part*);
extern void func_001E410C(Obj*);
extern void func_004CEAF0(void*);
void f_003A4820(Obj*p){func_001E410C(p);func_004CEAF0(p->m47c);Counter t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}func_00547514(&p->part);p->flag=1;}
