#include "range.h"
struct Entry573C { char pad[0x10]; u32 flags; char tail[0x190-0x14]; };
struct Table573C { char pad[0x10]; Entry573C entries[256]; Entry573C& at(u32 i){Entry573C* p=entries;return p[i];} };
extern Table573C* data_007124F0;
struct Owner573C { char pad[0x70]; u8 index; };
bool f_00573C5C(Owner573C* p){u32 i=p->index;Entry573C* e=data_007124F0->entries;if(e[i].flags&0x110000)return true;return false;}
