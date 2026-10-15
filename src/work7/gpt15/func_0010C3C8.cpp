#include "range.h"
struct M{char pad[0x14];s8 a;s8 swap(s8 v){s8 old=a;a=v;return old;}};struct S{char pad[0x24];M m;};extern "C" s8 func_0010C3C8(S*p,s8 v){return p->m.swap(v);}
