#include "range.h"
struct Child{char pad[0x44];u32 num,max;void**data;};struct S{Child*child;};
void* f_5702A0(const S*p,u32 i){return p->child->num>i?p->child->data[i]:0;}
