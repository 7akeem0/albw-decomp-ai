#include "../../../../work7/gpt25/range_types.h"
struct Gate{char pad[4];u8 busy;};struct Count{u32 pad[2];s16 value;};
struct Obj{char pad[0x500];Count count;char gap[4];Gate*gate;char gap514[0x8bc-0x514];u32 state;};
extern "C"  void func_0066AF2C(u32*,s32);
void phase(u32*s,Count*c){func_0066AF2C(s,c->value<=0?6:4);}
void target(Obj*p){if(!p->gate->busy)phase(&p->state,&p->count);}
