#include "range.h"
struct Child3E16 {char pad[0x1e];u16 flags;};
void f_003E1608(Child3E16* t,bool v){t->flags=(t->flags&~0x40)|(v<<6);}
