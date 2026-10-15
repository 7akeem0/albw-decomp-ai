#include "range.h"
void setState(NpcMove22*p,u8 v){p->state=v;}
void copyVector(Vec3*dst,const Vec3*src){*dst=*src;}
void target(NpcMove22*p){if(p->state==1){setState(p,2);if(p->actorId>0){MovedActor22*a=func_0052FBDC(&data_00706E20->actors,p->actorId,0);if(a&&a->func_00588BE4()==ro_00693800){copyVector(&a->position368,&p->position);copyVector(&a->position3d0,&p->position);}}p->ready=1;}}
