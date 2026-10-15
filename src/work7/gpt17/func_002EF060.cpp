#include "range.h"
struct Obj{u8 pad[0x59c];BitFlag32 flags;};
extern void func_002F618C(Obj*,f32);
void f_002EF060(Obj*p){func_002F618C(p,1.0f);p->flags.set(4);p->flags.set(0x80);}
