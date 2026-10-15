#include "range.h"
struct S {char pad[0x1c];void* child;char pad20[0x42-0x20];s16 index;};
extern bool func_00552FC0(void*);
bool f_53F72C(S*p){return p->index==0x43 || !func_00552FC0(p->child);}
