#include "range.h"
struct Big52E {char pad[0x3b40];u32 m3b40;};struct Inner52E {char pad[0x5f4];Big52E* m5f4;};
u32* f_0052E448(Inner52E* p){return &p->m5f4->m3b40;}
