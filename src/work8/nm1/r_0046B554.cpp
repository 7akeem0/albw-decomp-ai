#include "range.h"
struct M {u16 first;};struct Child {char pad[0x8c];M sub;};
extern void func_002317C0(M*,f32);
void f_0046B55C(Child* c){c->sub.first=0;func_002317C0(&c->sub,1.0f);}
