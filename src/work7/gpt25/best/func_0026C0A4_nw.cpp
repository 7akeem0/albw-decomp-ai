#include "../range_types.h"
struct Child26C{char pad[4];u8 busy;};struct Life26C{char pad[8];s16 life;};
struct Obj26C{char pad[0x500];Life26C status;char pad50c[4];Child26C*child;char pad514[0x8bc-0x514];u32 state;};
extern "C"  void func_0066085C(u32*,s32);
void act26C(u32*state,Life26C*life){func_0066085C(state,life->life<=0?2:0);}
void func_0026C0A4(Obj26C*p){if(!p->child->busy)act26C(&p->state,&p->status);}
