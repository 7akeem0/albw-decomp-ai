#include "ladder_types.h"
struct O4A4B {char pad0[0x38];u32 state;char pad3c[0x38];char controller[0x28];u8 count;};
extern bool func_00532BA0(void*);
extern void func_0066F7C8(void*,s32);
void target(O4A4B*p){if(func_00532BA0(p->controller)){--p->count;func_0066F7C8(&p->state,0);}}
