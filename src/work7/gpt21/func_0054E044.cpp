#include "range.h"
struct S{char pad[0x2cc];u32 value;};extern void*data_0070FB60;extern u32 func_0053F294(void*);bool eq(const u32&a,u32 b){return a==b;}bool f(S*p){u32 a=p->value;return eq(a,func_0053F294(data_0070FB60));}
