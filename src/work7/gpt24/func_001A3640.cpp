#include "range.h"
struct Obj1A3624{char pad[0x3e8];s32 angle;char pad3ec[0x8bc-0x3ec];u32 state;};
extern s32 data_0070A808;
extern bool func_0051D27C(s32*,s32,s32);
extern __weak void func_0065A474(u32*,s32);
extern "C" void target(Obj1A3624*p){if(func_0051D27C(&p->angle,0,data_0070A808))func_0065A474(&p->state,4);}
