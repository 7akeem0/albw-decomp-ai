#include "range.h"
struct Source{char pad[0xc];Vec2 value;s8 id;};struct Sub{char pad[0x1c];Vec2 value;s32 id;};struct Dest{char pad[0x216c];Sub sub;};
inline void put(Sub*s,f32 x,f32 y,s32 id){s->value=Vec2(x,y);s->id=id;}void f(Source*p,Dest*d){put(&d->sub,p->value.x,p->value.y,p->id);}
