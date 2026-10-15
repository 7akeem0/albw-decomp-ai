#include "ladder_types.h"
struct Child51D5{char pad[0x10];u8 flag;};
struct Owner51D5{char pad[0x184];Child51D5* child;};
bool isZero(Child51D5* p){return p->flag==0;}
bool f_0051D514(Owner51D5* p){bool z=isZero(p->child);return !z;}
