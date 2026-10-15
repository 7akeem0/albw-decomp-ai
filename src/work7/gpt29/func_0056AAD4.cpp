#include "range.h"
struct Record56AA { u16 tag,reserved; u32 middle,value; };
struct Owner56AA { char pad[0x14]; Record56AA first,second,third; };
Record56AA* find56AA(Owner56AA* p,u32 tag){if(p->first.tag==tag)return &p->first;if(p->second.tag==tag)return &p->second;if(p->third.tag==tag)return &p->third;return 0;}
u32 f_0056AAD4(Owner56AA* p){return find56AA(p,0x4000)->value;}
