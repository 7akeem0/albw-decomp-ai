#include "range.h"
struct T{u32 v;};struct S{char pad[60];void* v;};extern T* func_0056B47C(void*);
u32 f_56CD10(S* p){return func_0056B47C(p->v)->v;}
