#include "range.h"
struct T{char pad[10];u16 v;};struct S{char pad[8];T* v;};
u16 f_5689B4(S* p){return p->v ? p->v->v : 0;}
