#include "../range_types.h"
struct Bits2E20 {u32 words[2];void set(s32 n){if((u32)n<50)words[n>>5]|=1u<<(n&31);}};
struct Child2E20 {char pad[0x24];Bits2E20 bits;};
struct Obj2E20 {char pad[0x7c];Child2E20*child;};
extern "C" void f_002E2074(Obj2E20*p,s32 n){p->child->bits.set(n);}
