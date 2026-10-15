#include "range.h"
struct T{u32 v;};struct S{char pad[20];T* v;};
u32 f_54D108(S* p){return (p->v->v & 8) >> 3;}
