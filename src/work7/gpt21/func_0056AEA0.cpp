#include "range.h"
struct R{u16 tag,pad;u32 value,extra;};struct S{char pad[0x14];R records[3];};inline R*find(S*p,u16 tag){if(p->records[0].tag==tag)return p->records;if(p->records[1].tag==tag)return p->records+1;if(p->records[2].tag==tag)return p->records+2;return 0;}
u32 f_56AEA0(S* p){return find(p,8192)->value;}
