#include "range.h"
struct G{u32 a,b;void*child;};extern G data_007158E8;extern u32 func_003D2DC0(void*,u32*);u32 dispatch(const G*g,u32*out,u32 error){void*m=g->child;u32 r=error;if(m)r=func_003D2DC0(m,out);return r;}u32 f(u32*out){return dispatch(&data_007158E8,out,0xc8a0a7f8);}
