#include "ladder_types.h"
struct Object4F81 {char pad[0x28];u16 m28;};
u32 func_004F81F0(const Object4F81* p) {return p ? p->m28&31:0;}
