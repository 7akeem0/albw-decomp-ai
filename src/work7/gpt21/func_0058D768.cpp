#include "range.h"
struct C{char pad[13];u8 a,b;};struct S{char pad[216];C* v;};bool ready(C*c){return c->a==0&&c->b==0;}
bool f_58D768(S* p){if(p->v){bool r=ready(p->v);return !r;}return false;}
