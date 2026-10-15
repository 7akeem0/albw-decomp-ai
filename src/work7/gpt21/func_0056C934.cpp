#include "range.h"
struct Child {u32 pad[2];u32 version;};struct S {Child* child;};
bool f(S*p){u32 v=p->child->version;return v<=0x02010000u;}
