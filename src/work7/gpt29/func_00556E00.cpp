#include "range.h"
struct Child556E { char pad0[0x6cc]; f32 value; };
struct Owner556E { char pad0[0x10]; Child556E* child; };
bool f_00556E00(Owner556E* p) { return p->child->value==3.4028234663852886e38f; }
