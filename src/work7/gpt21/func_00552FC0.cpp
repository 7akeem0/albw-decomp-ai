#include "range.h"
struct S{char pad[0x168];u8 active;char pad169[0x324-0x169];u8 flags;};
bool f_552FC0(const S*p){u8 f=p->flags;if(f&1)return true;if(f&8)return true;return p->active!=0;}
