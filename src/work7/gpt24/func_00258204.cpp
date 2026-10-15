#include "range.h"
struct Obj258224{char pad[0xc];char sub[12];s8 mode;char pad19[0x5c-0x19];u32 count;char pad60[7];u8 flag;};
extern void func_0048BCBC(void*,s32);
extern "C" bool target(Obj258224*p){if(p->mode==2||p->mode==3){func_0048BCBC(p->sub,0);p->flag=1;p->count=0;return true;}return false;}
