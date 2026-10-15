#include "range.h"
struct R22{s16 a[6];void clear(s16 n);};
void R22::clear(s16 n){a[0]=n;a[1]=n;a[2]=n;a[3]=n;a[4]=n;a[5]=n;}
extern "C" __declspec(noinline) void func_004C07D8(NpcControl22*p){p->state858=0;p->gate85f=0;((R22*)p->reset904)->clear(-1);}
extern "C" __weak void func_00611198(NpcControl22*,s32,u8);
void activate(NpcControl22*p,u8 v){p->flag861=v;}
void mark(NpcControl22*p,u8 v){p->state988=v;}
void target(NpcControl22*p){if(p->state964!=2){p->value3ac=-1.f;func_004C07D8(p);activate(p,1);func_00611198(p,2,0);}else{mark(p,1);if(!p->gate85f)p->request(p->id855,-1);}}
