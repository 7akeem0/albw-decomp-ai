#include "range.h"
struct Entry54F9{char pad0[0xc];Vec3 value;char pad18[0x1c];};
struct Owner54F9{char pad0[0xc];u32 count;SafeSlots<Entry54F9,20> entries;};
void*f(Owner54F9*p,u32 i){if(p->count>i)return &p->entries[i].value;return p;}
