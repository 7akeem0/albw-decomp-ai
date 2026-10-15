#include "../../range.h"
struct T{int value;};struct E{T*p;u32 a,b,c;};struct S{u32 a,b,c;E* data;char pad[0x2c];int idx;};extern "C" int func_0011E87C(S*p){return p->idx==-1?-1:p->data[p->idx].p->value;}
