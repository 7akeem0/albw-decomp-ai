#include "range.h"
struct Obj {u8 pad[0x158];u8 state;u8 p159[7];BitFlag16 flags;};
void f_002B1FBC(Obj* p,s32 n,u32 mask){if(n<0)n=4;p->state=n;p->flags.set(mask);}
