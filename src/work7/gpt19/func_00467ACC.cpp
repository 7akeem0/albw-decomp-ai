#include "range.h"
struct S {char pad[0x11c];void* child;char gap[0x32c];u8 flag;};
extern void func_002BECAC(void*,bool);
void f_00467ACC(S* p){func_002BECAC(p->child,!p->flag);}
