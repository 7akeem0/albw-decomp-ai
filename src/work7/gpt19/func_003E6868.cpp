#include "range.h"
struct S{char pad[0x24];u32 flags;};struct G{u32 a,b,len;};extern G data_007257AC;extern void* func_001164C4(void*,const void*,u32);
void f_003E6868(S*p,void*d,const void*s){if(p->flags&2)func_001164C4(d,s,data_007257AC.len);}
