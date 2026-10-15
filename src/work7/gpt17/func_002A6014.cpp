#include "range.h"
struct Control {u32 opaque;};struct Obj {u8 pad[0x59c];BitFlag32 flags;u8 pad5a0[8];Control ctl;};extern void func_004FD038(Control*,bool);
void f_002A6014(Obj*p){p->flags.set(4);func_004FD038(&p->ctl,true);p->flags.set(0x20);p->flags.set(0x80);}
