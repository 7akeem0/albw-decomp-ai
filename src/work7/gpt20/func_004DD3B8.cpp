#include "ladder_types.h"
struct O4DD3 {char pad0[0x8ac];Flag32 flags;char pad8b0[0xd4];u32 m984;};
void f_004DD3B8(O4DD3* p,u32 a){p->flags.set(8);if(a==2)p->m984=0;}
