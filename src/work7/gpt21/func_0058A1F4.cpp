#include "range.h"
struct S{char pad[1440];u32 v;};
u32 f_58A1F4(S* p){return (p->v & 2097152) >> 21;}
