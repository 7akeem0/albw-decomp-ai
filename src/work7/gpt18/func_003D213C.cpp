#include "range.h"
struct Obj3D21 {char pad[0x134];u32 a,b;};
u32 func_003D213C(Obj3D21* p,u32* optional,u32* required){*required=p->a;if(optional)*optional=p->b;return p->b;}
