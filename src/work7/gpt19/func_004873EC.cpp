#include "range.h"
struct S{u8 pad[0x18];u32 flags;};
extern "C" void func_001B6DE0(S*);
void f_004873EC(S* p){p->flags&=~0x40;func_001B6DE0(p);}
