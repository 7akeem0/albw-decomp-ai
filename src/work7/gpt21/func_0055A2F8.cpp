#include "range.h"
struct S{char pad[0x2400];u8 flag,next;};u32 f(void*,S*p){u32 v=p->flag;if(v)return v;return p->next=1;}
