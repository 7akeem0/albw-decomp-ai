#include "range.h"
struct T{char pad[56];u32 v;};struct S{char pad[1456];T* v;};
u32 f_584788(S* p){return p->v ? p->v->v : 0;}
