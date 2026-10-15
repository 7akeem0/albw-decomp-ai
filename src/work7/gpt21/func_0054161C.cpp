#include "range.h"
struct C {char pad[0xd];u8 a,b;};
struct S {char pad[0x1c];C*child;};
bool f_54161C(S*p){if(p->child)return p->child->a==0&&p->child->b==0;return true;}
