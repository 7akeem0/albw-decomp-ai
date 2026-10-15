#include "range.h"
struct S {char pad[0x24];void* child;char gap[0x50];u32 flag;};
extern void func_00407CB8(void*);
void f_0041B54C(S* p){if(p->flag)func_00407CB8(p->child);}
