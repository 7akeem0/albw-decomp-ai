#include "range.h"
struct Child{u32 pad,value;};struct S{char pad[0xf0];Child*child;};
u32 f(S*p,u32 i){u32 v=p->child->value;if(!i)return (u16)v;u32 n=i*8;n+=8;return(u8)(v>>n);}
