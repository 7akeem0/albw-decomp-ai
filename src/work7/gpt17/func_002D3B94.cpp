#include "range.h"
struct Obj{u8 pad[0x10];f32 value;u8 p14[8];u32 timer;};
void f_002D3B94(Obj*p){f32 v=p->value;p->timer=60;f32 d=300.0f;p->value=v-d;}
