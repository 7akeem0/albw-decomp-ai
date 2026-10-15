#include "range.h"
struct S{u32 pad0;void*child;u8 flag;};extern u32 func_0056EE00(void*);
u32 f_56A6E0(S*p){if(!p->flag)return 0;return func_0056EE00(p->child);}
