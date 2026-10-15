#include "range.h"
struct C{char pad[0xd];u8 a,b;};struct S{char pad[0xb0];C*child;};
bool f_58D8C8(S*p){if(p->child)return p->child->a==3&&p->child->b==3;return false;}