#include "range.h"
struct Obj{u8 pad[0x1c];Vec3 pos;u8 pad28[0x44-0x28];u8 flags;};
u8 with(u8 old,u8 val){return (old & 0xEF)|(val<<4);}void func_003FFE6C(Obj*p,const Vec3&v){p->pos=v;p->flags=with(p->flags,1);}
