#include "../range.h"
struct S{u32 a,b;u16 c,d;};extern "C" u32 func_0010C380(S*p,char*q){if(!q)return p->a;return *(u32*)(q+4+p->d);}