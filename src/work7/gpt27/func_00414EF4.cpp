#include "range.h"
struct Obj{u8 pad[32];u16 flags;u8 pad2[6];f32 value;};
void func_00414EF4(Obj*p,f32 v){if(p->value!=v){p->value=v;p->flags|=4;}}
