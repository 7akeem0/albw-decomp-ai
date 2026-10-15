#include "range.h"
struct T{char pad[12];u16 v;};struct S{char pad[12];T* v;};
u16 f_5689D8(S* p){return p->v ? p->v->v : 0;}
