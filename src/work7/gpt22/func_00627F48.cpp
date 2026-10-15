#include "range.h"
struct Flags {u32 v; void reset(u32 m){v &= ~m;}};
struct S {u8 pad[0x8ac]; Flags flags;};
extern "C" void func_00627F58(S*);
void f_00627F48(S* p){p->flags.reset(0x10);func_00627F58(p);}
