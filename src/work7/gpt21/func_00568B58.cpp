#include "range.h"
struct T{char pad[12];u32 v;};struct S{char pad[124];T* v;};
u32* f_568B58(S* p){return p->v ? &p->v->v : 0;}
