#include "range.h"
struct C{char pad[0xd];u8 a,b;};struct S{char pad[0x28];C*child;};
bool ready(C*c){return c->a==0&&c->b==0;}bool f_547404(S*p){if(p->child){bool r=ready(p->child);return !r;}return false;}
