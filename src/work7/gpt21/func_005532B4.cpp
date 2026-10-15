#include "range.h"
struct C{char pad[0xc8];u32 count;u32 padCC;void**data;};extern C*func_005532D8(void*,u32,u32);void*f(void*p,u32 a,u32 b,u32 i){C*c=func_005532D8(p,a,b);return c->count>i?c->data[i]:0;}
