#include "range.h"
struct Sub{u8 pad[0xfc];f32 value;};
struct Obj{u8 pad[0x4c];Sub*child;};
void f_002D5AB0(Obj*p){Sub*s=p->child;s->value+=(1.0f-s->value)*0.05f;}
