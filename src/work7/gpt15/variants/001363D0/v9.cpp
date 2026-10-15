#include "../../range.h"
struct Member{u32 data;};struct S{u8 pad[0x47c];void*ptr;u8 q[12];Member m;};struct Extra{float delay;void*resource;};extern u32 func_0014E2A0(S*,void*,Member*,u32,Extra);
u32 func_001363D0(S*p){Extra e={0.0f,0};return func_0014E2A0(p,p->ptr,&p->m,0x1200,e);}
