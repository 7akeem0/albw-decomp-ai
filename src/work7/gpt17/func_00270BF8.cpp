#include "range.h"
struct Obj {u32 first;u8 pad[0x48];u32 value;BitFlag8 flags;};
void f_00270BF8(Obj* p){p->flags.reset(1);p->value=0;p->first=0;}
