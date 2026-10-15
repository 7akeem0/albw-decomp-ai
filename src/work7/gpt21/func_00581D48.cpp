#include "range.h"
struct S{char pad[56];void* v;};extern u32 func_0053B588(void*);
u32 f_581D48(S* p){if (!p->v) return -1;return func_0053B588(p->v);}
