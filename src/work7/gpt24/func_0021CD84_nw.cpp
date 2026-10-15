#include "range.h"
struct Gate{char p[4];u8 active;};struct Count{u32 pad[2];s16 value;};
struct Obj{char pad[0x500];Count count;char pad50c[4];Gate*gate;char pad514[0x8bc-0x514];u32 state;};
extern  void func_0065E110(u32*,s32);
void phase(u32*s,Count*c){func_0065E110(s,c->value<=0?4:1);}
extern "C" void target(Obj*p){if(p->gate->active)return;phase(&p->state,&p->count);}
