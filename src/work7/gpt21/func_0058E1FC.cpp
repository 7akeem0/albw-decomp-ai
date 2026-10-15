#include "range.h"
struct S{char pad[284];void* v;};extern u32 func_0057B93C(void*);
u32 f_58E1FC(S* p){if (!p->v) return 1;return func_0057B93C(p->v);}
