#include "range.h"
struct S {s16*begin; s16*end;};
struct Out {u32 count;s16*data;};
u32 f_564368(S*p,Out*out){u32 count=p->end-p->begin;if(count>0x100)return 0xe0e046c8u;out->count=count;out->data=p->begin;return 0;}
