#include "range.h"
struct T{char pad[48];s8 v;};struct S{char pad[1036];T* v;};
s8 f_58A44C(S* p){return p->v ? p->v->v : 0;}
