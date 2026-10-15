#include "range.h"
struct Child58E0 { char pad[0xd]; u8 first,second; };
struct Owner58E0 { char pad[0x70]; Child58E0* child; u16 kind; };
bool f_0058E0D4(Owner58E0* p){return p->child&&(p->child->first||p->child->second)&&p->kind==1;}
