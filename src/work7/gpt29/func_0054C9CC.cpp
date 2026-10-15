#include "range.h"
struct Child54C9 { char pad0[0x10c]; u32 flags; };
struct Owner54C9 { char pad0[0x14]; Child54C9* child; };
bool f_0054C9CC(Owner54C9* p) { u32 f=p->child->flags;return (f&0x4000) && !(f&0x2000); }
