#include "range.h"
struct T{char pad[127];u8 v;};struct S{char pad[20];T* v;};
bool f_556990(S* p){return p->v->v != 0;}
