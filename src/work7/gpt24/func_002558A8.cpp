#include "range.h"
struct Object2558 {char pad[0x28];void*ptrs[23];char pad84[0x94-0x84];u32 words[23];};
bool target(Object2558*p,s32 i){if((u32)(i-18)>4)return false;if(!p->ptrs[i])return false;p->words[i]=0;return true;}
