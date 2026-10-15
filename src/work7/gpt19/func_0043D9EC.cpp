#include "range.h"
struct S{char pad[0x130];void* a;char gap[0x24];void* b;};extern void* data_007142C8;extern void func_00478A00(void*);extern void func_0051C034(void*);extern void func_002BED00(void*);
void f_0043D9EC(S*p){func_00478A00(p->b);func_0051C034(data_007142C8);func_002BED00(p->a);}
