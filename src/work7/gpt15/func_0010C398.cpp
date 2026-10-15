#include "range.h"
struct M{char pad[0x10];u16 a;u16 swap(u16 v){u16 old=a;a=v;return old;}};struct S{char pad[0x24];M m;};extern "C" u16 func_0010C398(S*p,u16 v){return p->m.swap(v);}
