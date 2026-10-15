#include "range.h"
struct S{char pad[0x3c];void*resource;};extern u32*func_0056AEF8(void*,u32);bool f(S*p,u32 code,u32*out){u32*v=func_0056AEF8(p->resource,code);if(!v)return false;*out=*v;return true;}
