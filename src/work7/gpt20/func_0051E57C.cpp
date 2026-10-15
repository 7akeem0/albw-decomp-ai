#include "ladder_types.h"
struct Child51E5 {char pad0[0xd];u8 a,b;};
struct O51E57 {char pad0[0x1848];Child51E5* child;};
bool target(O51E57*p){Child51E5*c=p->child;if(c)return c->a==3&&c->b==3;return false;}
