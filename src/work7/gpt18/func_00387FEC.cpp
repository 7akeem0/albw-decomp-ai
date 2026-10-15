#include "range.h"
struct Child387F {char pad[0x164];u32 flags;};
struct Obj387F {char pad[0xa8];Child387F* child;};
void func_00387FEC(Obj387F* p,Child387F* c){p->child=c;if(c)c->flags|=1;}
