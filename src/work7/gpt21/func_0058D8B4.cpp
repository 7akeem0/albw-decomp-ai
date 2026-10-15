#include "range.h"
struct T{char pad[138];s8 v;};struct S{char pad[32];T* v;};
s8 f_58D8B4(S* p){return p->v ? p->v->v : -1;}
