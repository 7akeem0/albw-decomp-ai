#include "range.h"
struct Leaf53FE { char pad0[0xbb]; s8 enabled; };
struct Child53FE { char pad0[0x42]; s16 kind; char pad0x44[4]; Leaf53FE* leaf; };
s8 f_0053FEF0(Child53FE* c){ if(c->kind==0x61||c->kind==0x62) return c->leaf->enabled; return 1; }
