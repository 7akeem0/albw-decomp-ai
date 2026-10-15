#include "range.h"
struct Inner56D3{char pad0[0x38];void*resource;};
extern s32 func_0056B544(void*,s32,const char*);
s32 f_0056D3EC(Inner56D3*c,const char* name){if(!c->resource)return -1;return func_0056B544(c->resource,1,name);}
