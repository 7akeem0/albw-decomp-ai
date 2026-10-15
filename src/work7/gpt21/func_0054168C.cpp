#include "range.h"
struct T{char pad[172];s8 v;};struct S{char pad[32];T* v;};
s8 f_54168C(S* p){return p->v ? p->v->v : 1;}
