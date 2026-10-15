#include "range.h"
struct T{char pad[66];s16 v;};struct S{char pad[20];T* v;};
u32 f_556B54(S* p){return (p->v->v==44||p->v->v==43)?1:0;}
