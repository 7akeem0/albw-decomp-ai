#include "npc116.h"
struct R22{u32 reserved;s16 a[6];void clear(s16 n);};
void R22::clear(s16 n){a[0]=n;a[1]=n;a[2]=n;a[3]=n;a[4]=n;a[5]=n;}
extern "C" __declspec(noinline) void func_004C07D8(NpcReset30*p){p->flag858=0;p->gate85f=0;((R22*)((u8*)p+0x900))->clear(-1);}
extern "C" __weak void func_0060B6E8(NpcReset30*,s32,u8);
void activate(NpcReset30*p,u8 v){p->flag861=v;}
void mark(NpcReset30*p,u8 v){p->flag988=v;}
void target(NpcReset30*p){if(p->current964!=2){p->value=-1.f;func_004C07D8(p);activate(p,1);func_0060B6E8(p,2,0);}else{mark(p,1);if(!p->gate85f)p->request(p->id855,-1);}}

