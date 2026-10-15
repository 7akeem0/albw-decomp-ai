#include "range.h"
struct Sub {u32 first;u8 pad[8];f32 frame;u32 value;};
struct Obj {u8 pad[0x5ac];Sub* child;};
void f_0027CFB8(Obj* p){Sub* s=p->child;s->value=s->first;s->frame=0.0f;}
