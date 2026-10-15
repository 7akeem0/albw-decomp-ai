#include "range.h"
struct S{char pad[0x20];void*owner;u32 key;};extern void*func_0010E294(u32*);
bool f(S*p){void*v=func_0010E294(&p->key);return p->owner==v;}
