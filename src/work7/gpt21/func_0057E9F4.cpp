#include "range.h"
struct S{u32 pad0;void*data;u32 num;};extern void*func_0011EC9C(void*,u32);
void* f_57E9F4(S*p,u32 i){if(p->num<=i)return 0;return func_0011EC9C(p->data,i);}
