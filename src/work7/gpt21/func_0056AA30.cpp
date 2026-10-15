#include "range.h"
struct T{u32 v;};struct S{char pad[8];T* v;};
u32 f_56AA30(S* p){return p->v ? p->v->v : 0;}
