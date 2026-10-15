#include "../../range.h"
struct T{void* p;};struct E{T* p;u32 a,b,c;};struct S{u32 a,b,c;E* data;char pad[4];int idx;};extern "C" void* func_0011E824(S*p){return p->idx==-1?0:p->data[p->idx].p->p;}
