#include "range.h"
struct S{u32 pad[2];u32 flags;union{u32 id;f32 value;};};extern "C" f32 func_005670A0(u32);
u32 target(S*p,f32*out){if(!(p->flags&0x100))*out=(p->flags&1)?p->value:func_005670A0(p->id);return ~(p->flags&0xf00)<<8;}
