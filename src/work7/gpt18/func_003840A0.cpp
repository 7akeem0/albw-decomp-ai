#include "range.h"
struct S{u32 value;};struct C{u8 pad[0x14];S*child;};struct O{u8 pad[0x1c];C*child;};extern "C" u32 func_003838A8(O*,u32);bool eq(const u32&a,u32 b){return a==b;}extern "C" bool func_003840A0(O*p,u32 a){u32 v=p->child->child->value;return eq(v,func_003838A8(p,a));}
