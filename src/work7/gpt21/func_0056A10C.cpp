#include "range.h"
struct Pair { s32 max,cur; };
struct S { char pad[0x7c]; Pair pair; };
s32 calc(const Pair& c){return c.cur>=c.max?0:c.max-c.cur;}
s32 f_56A10C(const S* p){return calc(p->pair);}
