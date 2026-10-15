#include "ladder_types.h"
struct O4C4F {char pad0[0x3dbbc];char sub[0x30];s32 index;};
extern "C" void func_004C505C(void*,u32);
extern "C" void func_0052FD7C(void*,void(*)(void*,u32),u32);
extern "C" void func_004C4FF8(O4C4F*p,u32 arg){func_0052FD7C(p->sub,func_004C505C,arg);p->index=1-p->index;}
