#include "range.h"
struct Sub2559 { char pad[0xf9]; u8 count; bool consume(s32 n); };
struct Owner2559 { char pad[0x40c]; Sub2559 sub; };
struct Object2559 { char pad[0x10]; Owner2559* owner; };
bool target(Object2559* p, s32 n) { return p->owner->sub.consume(n); }
