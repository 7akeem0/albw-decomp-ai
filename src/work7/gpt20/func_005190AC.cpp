#include "ladder_types.h"
struct Child5190{char pad[0x177];u8 flags;};
struct Owner5190{char pad[0xe4];Child5190* child;};
void f_005190AC(Owner5190* p){if(p->child)p->child->flags|=1;}
