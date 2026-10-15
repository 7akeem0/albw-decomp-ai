#include "range.h"
struct R{u32 words[0x143];};struct C{char pad[0x183c];R records[1];};struct S{char pad[0x38];C*child;};
R*f_581B24(S*p,s32 index){C*c=p->child;if(!c)return 0;if(index<0)return 0;R*r=c->records;return r+index;}
