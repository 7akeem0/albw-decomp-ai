#include "range.h"
struct Child556E { char pad[0x168]; s8 enabled; char gap169[0x324-0x169]; u8 flags; char gap325[3]; u32 status; };
struct Owner556E { char pad[0x18]; Child556E* child; };
bool f_00556EA0(Owner556E* p){Child556E* c=p->child;if(c->flags&1)goto check;if(c->flags&8)goto check;if(!c->enabled)goto fail;check:if(c->status&4)return true;fail:return false;}
