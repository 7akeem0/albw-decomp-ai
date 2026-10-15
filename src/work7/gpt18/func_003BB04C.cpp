#include "range.h"
struct S04C {u8 pad[0x2c];};struct O04C {u8 pad[0x10];S04C sub;u8 flag;};
extern "C" void func_00669864(S04C*,u32);
extern "C" void func_003BB04C(O04C*p){func_00669864(&p->sub,0);p->flag=0;}
