#include "range.h"
struct Child5844{char pad0[0x8e0];u8 kind;};struct Owner5844{char pad0[0x518];Child5844*child;};
bool f_005844C4(Owner5844*p){u32 k=p->child->kind;return k==0||k==3||k==4;}
