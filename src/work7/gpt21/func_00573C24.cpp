#include "range.h"
struct Entry {char pad[0x10];u32 flags;char pad14[0x190-0x14];};
struct G {char pad[0x10];Entry entries[1];};
struct S {char pad[0x70];u8 index;};
extern G* data_007124F0;
bool f_573C24(S*p){u32 i=p->index;Entry*e=data_007124F0->entries;if(e[i].flags&0x220000)return true;return false;}
