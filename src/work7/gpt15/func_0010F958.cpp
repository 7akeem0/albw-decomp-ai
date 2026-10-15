#include "range.h"
struct E{u32 a,b,c;};struct S{char pad[0x38];E*arr;};extern "C" void func_0010F970(E*,void*,void*,S*);extern "C" void func_0010F958(S*p,void*a,void*b,u32 i){func_0010F970(p->arr+i,a,b,p);}
