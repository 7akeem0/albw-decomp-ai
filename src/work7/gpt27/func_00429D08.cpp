#include "range.h"
struct M33{f32 m[9];void func_001151CC(const M33&);};
struct V3{f32 x,y,z;V3&operator=(const V3&);};
inline V3&V3::operator=(const V3&o){x=o.x;y=o.y;z=o.z;return *this;}
struct Owner429{u8 pad[8];M33 rotation,targetRotation;u8 gap50[0x24];u8 active;u8 gap[3];V3 current,target;};
void func_00429D08(Owner429*p){M33*r=&p->rotation;r->func_001151CC(p->targetRotation);p->active=1;p->current=p->target;}
