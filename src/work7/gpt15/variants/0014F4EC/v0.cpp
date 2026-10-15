#include "../../range.h"
struct S{char pad[0x164];Flag32 flags;};extern "C" void func_0014F4EC(S*p){if(p){p->flags.setB(0x4000);p->flags.resetB(0x80000);p->flags.setB(0x4000);p->flags.resetB(0x10000);}}
