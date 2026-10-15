#include "range.h"
struct Obj1A4424{char pad[0x59c];Flag32_24 flags;char pad5a0[8];u32 motion;};
extern void func_004FCD5C(u32*,s32);
extern void func_004FCDF4(u32*,s32);
extern "C" void target(Obj1A4424*p){p->flags.clear(1);func_004FCD5C(&p->motion,0);p->flags.clear(2);func_004FCDF4(&p->motion,0);}
