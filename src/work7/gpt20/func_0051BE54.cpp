#include "ladder_types.h"
struct O{char pad0[0x10c];Child51A3*child;};
void target(O*p){Child51A3*c=p->child;if(c&&!c->gate&&!c->flag)c->flag=1;}
