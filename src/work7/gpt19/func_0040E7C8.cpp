#include "range.h"
struct S{char pad[0x10];u32 max,cur;};
u32 f_0040E7C8(S*p,u32 n){u32 old=p->cur;u32 end=n+old;if(p->max<end)return 0;p->cur=(end+31)&~31u;return old;}
