#include "range.h"
struct Tag56AC94 { u32 value; Tag56AC94(u32 v):value(v){} };
struct Record56AC94 { u16 tag,reserved; s32 offset; u32 extra; };
struct Owner56AC94 { char pad[0x14]; Record56AC94 first,second; };
Record56AC94* find56AC94(Owner56AC94* p,Tag56AC94 tag){if(p->first.tag==tag.value)return &p->first;if(p->second.tag==tag.value)return &p->second;return 0;}
void* f_0056AC94(Owner56AC94* p){return(char*)p+find56AC94(p,Tag56AC94(0x6801))->offset;}
