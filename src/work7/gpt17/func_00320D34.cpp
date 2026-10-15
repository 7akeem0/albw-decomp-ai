#include "range.h"
struct Sub320D {u8 pad[0x2b4-0x10];BitFlag32 flags;void func_00320D48();};
struct O320D {u8 pad[0x10];Sub320D sub;};
void f_320D34(O320D* p){p->sub.flags.reset(1);p->sub.func_00320D48();}
