#include "range.h"
struct Bits {u32 low:4;u32 kind:3;u32 flag:1;u32 high:24;};
struct S {u32 words[2];Bits flags;};
extern "C" void func_00404CF0(S*);
extern "C" void f_00404F88(S* s,u32 kind,u32 flag){s->flags.kind=kind;s->flags.flag=flag;func_00404CF0(s);}
