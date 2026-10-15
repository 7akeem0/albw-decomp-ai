#include "ladder_types.h"
struct A4F94 {char pad0[0x28];u16 kind;};
u32 f_004F9434(A4F94* p){return p?(p->kind&0x7e0)>>5:0;}
