#include "range.h"
struct T{char pad[7];s8 v;};struct S{char pad[1308];T* v;};
s8 f_5847DC(S* p){return p->v ? p->v->v : 0;}
