#include "range.h"
struct O{char pad[0x9c];u8 v;char rest[15];O* child;};inline void copy(O* s,O*d){d->v=s->v!=0;}void func_00330D80(O*p){O*q=p->child;copy(p,q);}