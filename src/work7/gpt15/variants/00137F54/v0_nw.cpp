#include "../../range.h"
struct Counter{u32 count,max;};struct Member{u8 pad[0x30];};struct S{u8 pad[0x40c];Member state[1];Counter timer[1];};extern  void func_00657070(Member*,u32);
void func_00137F54(S*p){Counter c=p->timer[0];if(c.count<c.max){p->timer[0].count=c.count+1;return;}func_00657070(p->state,2);}
