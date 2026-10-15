#include "range.h"
struct Sub {u8 pad[0x134];f32 value;void set(f32 v){value=v;}};
struct Obj {u8 pad[0x10];Sub* child;u8 p14[0xec];f32 a,b;};
void f_0028C76C(Obj* p){p->child->set(1.0f);p->a=1.0f;p->b=1.0f;}
