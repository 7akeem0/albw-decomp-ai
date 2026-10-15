#include "range.h"
struct Obj {u8 pad[0x2e0];BitFlag32 flags;u8 p2e4[0xc8];f32 value;};
void f_002CE9EC(Obj* p){p->value=-1.0f;p->flags.set(4);}
