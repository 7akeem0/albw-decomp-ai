#include "range.h"
struct C{char pad[0x30];s8 value;};struct O{char pad[0x78c];void* child;char p790[0x10];C* arg;};extern void func_004BC61C(O*);extern void func_00151148(void*,s8);void f(O*p){func_004BC61C(p);if(p->child)func_00151148(p->child,p->arg->value);}
