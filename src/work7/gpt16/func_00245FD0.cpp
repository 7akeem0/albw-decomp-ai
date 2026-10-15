#include "range.h"
struct O{u8 pad[0x7a0];void*res;u8 gap[0x9c];u32 a,b;};extern u8 data_0070EB70[],data_0070EB78[];extern u32 func_00564A78(void*,const void*);void f245FD0(O*p){void*const&r=p->res;p->a=func_00564A78(r,data_0070EB70);p->b=func_00564A78(r,data_0070EB78);}
