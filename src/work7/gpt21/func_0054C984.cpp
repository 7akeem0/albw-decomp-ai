#include "range.h"
struct T{u32 v;};struct S{char pad[20];T* v;};
u32 f_54C984(S* p){return (p->v->v & 8192) >> 13;}
