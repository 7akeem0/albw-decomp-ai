#include "range.h"
struct Child{char pad[0x74];u32 sub;};struct S{char pad[0x16c];Child*child;};extern bool func_00532C78(u32*);
bool f_573A38(S*p){return !func_00532C78(&p->child->sub);}
