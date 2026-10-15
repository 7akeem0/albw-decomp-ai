#include "range.h"
struct C{virtual void call(u32 a0);};struct S{char pad[28];C* v;};
void f_58B708(S* p,u32 a0){if(p->v)p->v->call(a0);}
