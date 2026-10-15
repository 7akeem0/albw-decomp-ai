#include "range.h"
struct Obj199224{char pad[0x20];u32 state;char pad24[0x79-0x24];u8 flags;};
extern void*data_0070FB60;
extern bool func_00556A74(void*);
extern __weak void func_00659E20(u32*,s32);
extern "C" void target(Obj199224*p){if(func_00556A74(data_0070FB60)&&!(p->flags&4))func_00659E20(&p->state,1);}
