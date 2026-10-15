#include "range.h"
struct T{char pad[8];s32 v;};struct S{char pad[12];T* v;};
void* f_5689E8(S* p){T* c=p->v; return c ? (char*)c+c->v : 0;}
