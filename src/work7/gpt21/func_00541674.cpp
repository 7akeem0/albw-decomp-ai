#include "range.h"
struct S{char pad[20];void* v;};extern u32 func_00574678(void*);
u32 f_541674(S* p){if (!p->v) return 1;return func_00574678(p->v);}
