#include "range.h"
struct Object19FB {char pad[0x3e0];f32 vy;char pad3e4[0x11c8-0x3e4];u32 mode;};
extern void func_001A1040(Object19FB*,s32);
void target(Object19FB*p){p->vy=0.0f;if(p->mode)func_001A1040(p,1);else func_001A1040(p,0);}
