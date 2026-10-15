#include "range.h"
struct Control {u32 opaque;};struct Obj {u8 pad[0x59c];BitFlag32 flags;u8 pad5a0[8];Control ctl;};extern void func_004FD038(Control*,bool);
void f_002A604C(Obj*p){p->flags.reset(4);func_004FD038(&p->ctl,false);p->flags.reset(0x20);p->flags.reset(0x80);}
