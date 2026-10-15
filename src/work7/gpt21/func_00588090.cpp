#include "range.h"
struct T{char pad[60];u32 v;};struct S{char pad[80];T* v;};
u32 f_588090(S* p,u32 i){return p->v->v==i?1:0;}
