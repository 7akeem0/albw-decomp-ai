#include "range.h"
void setTimer(TimerData22*p,u16 time,u16 duration){p->time=time;p->duration=duration;}
void setId(NpcAssign22*p,u32 id){p->actorId=id;}
void target(NpcAssign22*p,const u32*id,const Vec3*position,u8 kind,u32 time,u32 duration){
if(p->reduceTime())time>>=1;
setId(p,*id);p->position.x=position->x;p->position.y=position->y;p->position.z=position->z;p->storedKind=kind;p->time=time;p->duration=duration;
u8 parameter=p->storedParameter;p->kind=kind;setTimer(&p->timer,time,duration);p->parameter=parameter;p->clear=0;p->state=1;
}
