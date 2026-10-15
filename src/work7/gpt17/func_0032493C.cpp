#include "range.h"
struct Obj{u32 value;f32 minimum;u32 flags;void clear(u32);};
void Obj::clear(u32 n){value=n;}
void f_0032493C(Obj*p){p->clear(0);p->flags=0xd80;p->minimum=-3.402823466e38f;}
