#include "range.h"
struct M {u16 first;};
struct S {char pad[0x74];M sub;};
extern void func_002317C0(M*,f32);
void f_0046BBC8(S* p){p->sub.first=2;func_002317C0(&p->sub,1.0f);}
