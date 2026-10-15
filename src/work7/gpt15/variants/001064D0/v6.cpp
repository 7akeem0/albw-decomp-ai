#include "../../range.h"
struct S { u8 pad[12]; S* child; u8 q[8]; u32 value; };
extern void func_0010B40C(S*,float);
__attribute__((weak)) void set(S*p,u32 n){p->value=n;}
void func_001064D0(S*p) {set(p->child,p->value);func_0010B40C(p,5.6666665f);}
