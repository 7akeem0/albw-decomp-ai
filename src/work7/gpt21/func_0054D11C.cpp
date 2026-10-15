#include "range.h"
struct T{u32 v;};struct S{char pad[20];T* v;};
u32 f_54D11C(S* p){return (p->v->v & 16) >> 4;}
