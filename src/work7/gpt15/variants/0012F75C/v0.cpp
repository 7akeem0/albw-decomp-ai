#include "../../range.h"
struct C{char pad[0x804];f32 value;};struct S{char a[0x28d0];C*p;char b[0x33c];f32 value;};extern "C" void func_0012F75C(S*p,f32 v){p->value=v;p->p->value=v;}
