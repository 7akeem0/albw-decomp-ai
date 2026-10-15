#include "range.h"
struct S{char pad[0xc];void* a;u32 gap;void* b;};extern void func_00409008(void*);extern void func_0058FA08(void*);
void f_0048C7A0(S*p){func_00409008(p->a);if(p->b){func_0058FA08(p->b);p->b=0;}}
