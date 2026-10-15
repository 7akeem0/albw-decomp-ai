#include "range.h"
struct T{char pad[348];u32 v;};struct S{char pad[264];T* v;};
u32 f_58DFDC(S* p){return p->v ? p->v->v : 45;}
