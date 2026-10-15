#include "range.h"
struct O{u8 pad[0x14];void*a;u32 b;void*child;};extern void func_00169688(void*,u32,u32,void*);extern void func_00133870(void*,u32,u32);void f222898(O*p,u32 n,u32 mode){if(p->child){func_00169688(p->child,n,mode,p->a);func_00133870(p->child,n,p->b);}}
