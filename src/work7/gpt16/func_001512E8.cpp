#include "range.h"
struct V{f32 x,y,z;V(){}V plus(const V&o)const;V&operator=(const V&o){x=o.x;y=o.y;z=o.z;return*this;}};struct C{u8 pad[0x88];V value;u8 gap[0xc];u8 flag;};struct O{u8 pad[0x3d0];V pos;};struct P{O*owner;V offset;u8 gap[0xc];C*child;};
extern void func_00115C54(V*,const V&,const V&);
inline V V::plus(const V&o)const{V r;func_00115C54(&r,o,*this);return r;}
void f_001512E8(P*p){C*c=p->child;V v=p->offset.plus(p->owner->pos);c->value=v;c->flag=1;}
