#include "range.h"
struct CopyVec3 {f32 x,y,z;CopyVec3&operator=(const CopyVec3&o){x=o.x;y=o.y;z=o.z;return*this;}};
struct Obj {u8 pad[0xca];u8 flag,active;u8 gap[4];CopyVec3 pos;u8 gapdc[0x11c-0xdc];f32 a,b;};
void f_0028C920(Obj*p,u8 on,const CopyVec3*v,f32 a,f32 b){p->flag=on;p->pos=*v;p->a=a;p->b=b;if(on)p->active=1;}
