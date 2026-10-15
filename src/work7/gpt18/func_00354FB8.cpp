#include "range.h"
struct Sub354F {u32 value;void func_004FD038(bool);};
struct Obj354F {char pad[0x59c];Flag32 flags;char gap[8];Sub354F sub;};
void func_00354FB8(Obj354F* p){p->flags.set(4);p->sub.func_004FD038(true);}
