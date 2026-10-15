#include "ladder_types.h"
struct O520F {char pad0[0x3a8];void* child;};
extern void func_0036D100(void*,void**);
void f_00520FA8(O520F* p,void** out){if(p->child)func_0036D100(p->child,out);else *out=0;}
