#include "range.h"
struct S{char pad[0x4c8];u16 n;};extern "C" void func_0014DDEC(S*);extern "C" void func_0014DDD4(S*p){if(p->n)p->n--;func_0014DDEC(p);}
