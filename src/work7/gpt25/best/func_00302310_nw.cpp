#include "../range_types.h"
struct Gate{char pad[4];u8 busy;};struct Count{u32 pad[2];s16 value;};
struct Obj{char pad[0x500];Count count;char gap[4];Gate*gate;char gap514[0x8bc-0x514];u32 state;};
extern "C"  void func_006645FC(u32*,s32);
void phase(u32*s,Count*c){func_006645FC(s,c->value<=0?2:0);}
void target(Obj*p){if(!p->gate->busy)phase(&p->state,&p->count);}
