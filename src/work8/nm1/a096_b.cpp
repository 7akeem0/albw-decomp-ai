#include "range.h"
struct O{char pad[0x390];u32 count;void setCount(u32 n){u32* c=&count;*c=n;}};extern void func_003A0C98(O*);extern void func_002317C0(void*,f32);void f(O*p){p->setCount(p->count+1);func_003A0C98(p);func_002317C0((char*)p+0x3c,1.0f);}
