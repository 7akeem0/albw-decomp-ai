#include "range.h"
struct S {char pad[0xc];u32 count;};
u32 f_54FB50(S*p,u32 from,u32 to){u32 result=0;while(from!=to){--from;if(from>=p->count)from=p->count-1;++result;}return result;}
