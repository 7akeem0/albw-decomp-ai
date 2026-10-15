#include "range.h"
struct T{char pad[64];u32 v;};struct S{char pad[80];T* v;};
u32 f_588398(S* p,u32 i){return p->v->v==i?1:0;}
