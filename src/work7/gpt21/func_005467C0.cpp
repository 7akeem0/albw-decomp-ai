#include "range.h"
struct S{char pad[0x30];VecCopy* value;};s32 f(S*p,VecCopy*out){*out=*p->value;return 0;}
