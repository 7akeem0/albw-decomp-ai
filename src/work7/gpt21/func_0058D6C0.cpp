#include "range.h"
struct T{char pad[232];u8 v;};struct S{char pad[160];T* v;};
u8 f_58D6C0(S* p){return p->v ? p->v->v : 0;}
