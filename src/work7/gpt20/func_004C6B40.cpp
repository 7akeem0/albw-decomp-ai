#include "ladder_types.h"
struct Child4C6B {char pad0[0x38];u32 value;};
struct O4C6B {char pad0[0x5b0];Child4C6B* child;};
void f_004C6B40(O4C6B* p,u32 n){if(p->child)p->child->value+=n;}
