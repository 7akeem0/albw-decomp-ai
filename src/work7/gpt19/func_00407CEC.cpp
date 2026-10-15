#include "range.h"
struct Pair{u32 count;char* node;};struct S{char pad[0x18];Pair pair;};extern void func_003E696C(Pair*);
void* f_00407CEC(S*p){if(!p->pair.count)return 0;char*q=p->pair.node-0x1c;func_003E696C(&p->pair);return q;}
