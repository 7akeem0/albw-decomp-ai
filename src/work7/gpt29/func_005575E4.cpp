#include "range.h"
struct Owner5575 { char pad0[0xf4]; u8 value; };
extern u32 func_004EFFF8(void*);
bool f_005575E4(Owner5575* p,void* other) { return func_004EFFF8(other)!=p->value; }
