#include "range.h"
struct Tag{u32 v;Tag(u32 x):v(x){}};
struct Record {u16 tag,pad;u32 value,extra;};
struct S {char pad[0x14];Record first,second;};
Record* find(S*p,Tag tag){if(p->first.tag==tag.v)return&p->first;if(p->second.tag==tag.v)return&p->second;return 0;}
u32 f_56ACF4(S*p){return find(p,Tag(0x6801))->value;}
