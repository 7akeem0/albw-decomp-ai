#include "ladder_types.h"
struct Pair49AD {u32 a,b;};
__svc(0x28) __value_in_regs Pair49AD getTick();
struct O49AD {char pad0[0x150];Pair49AD m150;void f();};
void O49AD::f(){m150=getTick();}
