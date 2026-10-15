#include "range.h"
struct Sub {u32 opaque;void func_001080D4();};
struct Obj {u8 pad[0x8e];u8 flag;u8 p8f[0x19];Sub sub;};
void f_0025D624(Obj* p){p->sub.func_001080D4();p->flag=0;}
