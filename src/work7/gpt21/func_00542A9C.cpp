#include "range.h"
struct S { char pad[0x268]; u32 a,b; };
bool f_542A9C(const S* p) { return p->a<p->b; }
