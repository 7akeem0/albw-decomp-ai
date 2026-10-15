#include "range.h"
struct Obj{u8 pad[0x590];u32 current;s32 maximum;f32 rate;};
void f_002C4498(Obj*p){p->current=0;p->rate=1.0f/(f32)p->maximum;}
