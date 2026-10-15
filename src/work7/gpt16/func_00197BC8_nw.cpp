#include "range.h"
extern  void func_00659B98(void*,s32);
struct Flags197{u8 pad[0x98];s8 kind;};struct Own197{u8 pad[0x400];Flags197 flags;};
void phase(u32*state,Flags197*f){func_00659B98(state,f->kind?3:1);}
void f_00197BC8(Obj197B*p){CounterPair t=p->timer;if(t.cur<t.max){p->timer.cur=t.cur+1;return;}phase(&p->state,&((Own197*)p)->flags);}
