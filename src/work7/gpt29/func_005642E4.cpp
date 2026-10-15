#include "range.h"
struct Range5642{const u16*begin,*end;};struct Output5642{u32 count;const u16*data;};
u32 f(Range5642*p,Output5642*out){u32 n=p->end-p->begin;if(n>256)return 0xe0e046c7u;out->count=n;out->data=p->begin;return 0;}
