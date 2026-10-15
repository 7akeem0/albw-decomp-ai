#include "range.h"
struct Obj {u8 pad[0x59c];BitFlag32 flags;u8 gap[0xb98-0x5a0];f32 gravity;};
extern void func_002F618C(Obj*,f32);extern f32 func_004F898C();
void f_002F2D10(Obj*p){func_002F618C(p,1.0f);p->flags.set(4);p->flags.set(0x80);p->gravity=func_004F898C();}
