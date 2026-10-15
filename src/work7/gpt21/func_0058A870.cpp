#include "range.h"
struct S58A8 { char pad[0x655]; u8 value; };
s32 f_58A870(const S58A8* p,s32 n) { return n<0 ? p->value : n; }
