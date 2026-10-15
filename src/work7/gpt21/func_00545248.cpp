#include "range.h"
struct T{char pad[44];s8 v;};struct S{char pad[20];T* v;};
s8 f_545248(S* p){return p->v ? p->v->v : 0;}
