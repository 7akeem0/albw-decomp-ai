#include "../../range.h"
struct Handle{void*p;u32 id;};struct S{char pad[0xbc];Handle h;};extern "C" bool func_00518B3C(void*,Handle*,u32);extern "C" bool func_0014AFE8(S*p,u32 a){if(!p->h.p)return false;return func_00518B3C(p->h.p,&p->h,a);}
