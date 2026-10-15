#include "range.h"
struct A{u32 count,unused;void**items;void*get(u32);};
struct O{u8 data[0x108];A array;};
extern "C" void sub_004A5D48(void*);
void*A::get(u32 i){A*p=this;return p->count>i?p->items[i]:0;}
extern "C"void f_004511E0(O*s){for(s32 i=0;i<3;++i)sub_004A5D48(s->array.get(i));}