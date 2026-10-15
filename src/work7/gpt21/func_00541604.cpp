#include "range.h"
struct S{char pad[20];void* v;};extern u32 func_0057464C(void*);
u32 f_541604(S* p){if (!p->v) return 1;return func_0057464C(p->v);}
