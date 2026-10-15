#include "range.h"
struct S580E { char pad[0x1c]; u32 a,b; };
u32 f_580EAC(const S580E* p) { return (u32)((unsigned long long)p->a+p->b); }
