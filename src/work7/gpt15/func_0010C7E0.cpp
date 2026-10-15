#include "range.h"
struct S{char pad[0x178];u32 count,cap;void**data;};extern "C" void func_0010C7F8(void*,void*);extern "C" void func_0010C7E0(S*p,void*q){func_0010C7F8(p->count>1?p->data[1]:0,q);}
