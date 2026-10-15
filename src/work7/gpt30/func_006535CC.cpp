#include "npc_request148.h"
void setId(NpcRequest30*p,u32 resource){p->resource=resource;}
void setTimer(RequestPart30*p,u16 cost,u16 other){p->cost=cost;p->other=other;}
void target(NpcRequest30*p,const u32*resource,const Vec3*pos,u8 kind,u32 cost,u32 other){
    if(p->halfCost())cost>>=1;
    setId(p,*resource);
    p->position.x=pos->x;p->position.y=pos->y;p->position.z=pos->z;
    p->kind=kind;p->cost=cost;p->other=other;
    u8 phase=p->phase;
    p->request.kind=kind;setTimer(&p->request,cost,other);
    p->request.phase=phase;p->request.flag=0;p->flag=1;
}
