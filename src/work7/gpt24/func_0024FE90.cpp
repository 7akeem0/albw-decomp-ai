#include "range.h"
struct Obj24FE24{char pad[0x2d7];u8 active;char pad2d8[0x41c-0x2d8];u32 state;s8 kind;};
extern __weak void func_0065FBB4(u32*,s32);
extern void func_0024FED0(Obj24FE24*);
extern "C" void target(Obj24FE24*p){if(p->kind==0){p->active=1;func_0024FED0(p);}else if(p->kind==1)func_0065FBB4(&p->state,2);}
