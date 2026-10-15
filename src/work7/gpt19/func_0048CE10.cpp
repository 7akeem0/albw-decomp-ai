#include "range.h"
struct C {u8 pad[0x3C];u8 flag;void clear();};
struct S {u8 pad[0x10];s32 count;u32 max;C** items;};
void C::clear(){flag=0;}
extern "C" void f_0048CE10(S* s){for(s32 i=0;i<s->count;++i)s->items[i]->clear();}
