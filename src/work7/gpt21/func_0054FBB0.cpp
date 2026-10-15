#include "range.h"
struct S { char pad[0xc]; u32 count; };
u32 f_54FBB0(const S* p,u32 i) { u32 n=i-1; if(p->count<=n) n=p->count-1; return n; }
