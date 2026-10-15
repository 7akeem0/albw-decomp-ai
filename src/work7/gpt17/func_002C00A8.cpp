#include "range.h"
struct Obj {u8 pad[8];u32 value;u8 padC[0xa];u16 flags;void resetFlags();};
void Obj::resetFlags(){flags&=~0xbc;}
void f_002C00A8(Obj* p){p->value=0;p->resetFlags();}
