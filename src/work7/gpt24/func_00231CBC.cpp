#include "range.h"
struct Pair231C { u32 a,b; };
struct Object231C { char pad[0x70]; u32 a; u32 unused; u32 b; };
extern void func_00231C00(Object231C*, const Pair231C&);
void target(Object231C* p){ Pair231C q; q.a=p->a; q.b=p->b; func_00231C00(p,q); }
