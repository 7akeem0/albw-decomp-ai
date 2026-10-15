#include "range.h"
struct S { char pad[0xc]; u32 count; };
u32 f_54FC84(const S* p,u32 i) { u32 n=i+1; if(p->count<=n) n=0; return n; }
