#include "range.h"
struct C{char pad[0x3c];s32 count;u32 max;void**data;char p48[0x78-0x48];void*selected;};
struct O{char pad[0x70];C*child;u8 flags;};
extern "C" void func_00369ED0(C*,s32);
void f(O*p,s32 i){u8* fl=&p->flags;*fl|=4;func_00369ED0(p->child,i);}
