#include "range.h"
struct S{u32 pad;void*resource;};extern u32 func_0056D3E4(void*,const char*);extern bool func_0056BD50(S*,u32,u32);bool f(S*p,const char*name,u32 value){return func_0056BD50(p,func_0056D3E4(p->resource,name),value);}
