#include "../../range.h"
struct S{char a[0x2c0];void*arg;char b[0x148];u32 sub;};extern "C" void func_002C40D8(S*);extern "C" void func_001344C0(void*,S*,void*);extern "C" void func_0013449C(S*p){func_002C40D8(p);func_001344C0(&p->sub,p,p->arg);}
