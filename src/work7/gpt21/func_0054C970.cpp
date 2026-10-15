#include "range.h"
struct T{char pad[268];u32 v;};struct S{char pad[20];T* v;};
u32 f_54C970(S* p){return (p->v->v & 8192) >> 13;}
