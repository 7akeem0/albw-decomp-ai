#include "range.h"
struct Component255D { char pad[0x100]; u16 unused; u16 count; bool increase(s32 n); };
struct Owner255D { char pad[0x40c]; Component255D component; };
struct Object255D { char pad[0x10]; Owner255D* owner; };
bool target(Object255D* p,s32 n){ return p->owner->component.increase(n); }
