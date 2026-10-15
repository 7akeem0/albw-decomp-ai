#include "range.h"
struct C{u32 count;void*data[1];};struct S{char pad[0x218];C*child;};
inline u32 offset(u32 i,u32 b){return b+i*4;}void*f_569D94(S*p,u32 i){C*c=p->child;if(!c)return 0;if(i>=c->count)return 0;u32 off=offset(i,4);return *(void**)((char*)c+off);}
