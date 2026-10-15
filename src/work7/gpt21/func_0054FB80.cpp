#include "range.h"
struct S {char pad[0xc];u32 count;};
u32 f_54FB80(S*p,u32 from,u32 to){u32 result=0;while(from!=to){++from;if(from>=p->count)from=0;++result;}return result;}
