#include "range.h"
struct S{char pad[4];u32 v;};extern void func_0010AC24(u32,u32);inline void diagnose(u32 r,u32 pc){if(r>>31)func_0010AC24(r,pc);}
u32 f_561354(S* p){if(!p->v)diagnose(0xe0a046dau,__current_pc());return p->v;}
