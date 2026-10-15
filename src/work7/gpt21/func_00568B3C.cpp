#include "range.h"
struct T{char pad[8];u16 v;};struct S{char pad[124];T* v;};
u16 f_568B3C(S* p){return p->v ? p->v->v : 0;}
