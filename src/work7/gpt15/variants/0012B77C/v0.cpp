#include "../../range.h"
struct BF{u32 v;void set(u32 m){v|=m;}};struct S{char a[0x3a4];u32 anim;char b[0x1f4];BF flags;};extern "C" void func_004F88A0(S*,u32);extern "C" void func_0012B77C(S*p){func_004F88A0(p,p->anim);p->flags.set(0x80);}
