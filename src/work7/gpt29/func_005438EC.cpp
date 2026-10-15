#include "range.h"
struct Child5438{char pad0[0xd];u8 a,b;};struct Owner5438{Child5438*child;char pad4[0x12];u16 flags;};
bool f_005438EC(Owner5438*p){return p->child->a==3&&p->child->b==3&&!(p->flags&1);}
