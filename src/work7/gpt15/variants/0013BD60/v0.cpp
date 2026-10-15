#include "../../range.h"
struct BF{u32 v;void set(u32 m){v|=m;}};struct S{char pad[0x8ac];BF flags;};extern "C" void func_0060C930(S*,bool);extern "C" void func_0013BD60(S*p){func_0060C930(p,true);p->flags.set(8);}
