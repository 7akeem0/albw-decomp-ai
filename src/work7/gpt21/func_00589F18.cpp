#include "range.h"
struct T{char pad[176];u32 v;};struct S{char pad[212];T* v;};
u32* f_589F18(S* p){return p->v ? &p->v->v : 0;}
