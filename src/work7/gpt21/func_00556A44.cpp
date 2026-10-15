#include "range.h"
struct S{char pad[0x10];void*child;};
extern void* func_0052E5E4(void*,u32);
void* f_556A44(S*p,u32 i){if(i>=24)return 0;return func_0052E5E4(p->child,i);}
