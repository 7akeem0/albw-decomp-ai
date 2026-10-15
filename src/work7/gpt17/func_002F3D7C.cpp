#include "range.h"
struct Obj{u8 pad[0x59c];BitFlag32 flags;u8 pad5a0[0x86e];u8 active;};
extern void func_002F3D28(Obj*);
void f_002F3D7C(Obj*p){p->active=0;func_002F3D28(p);p->flags.set(7);}
