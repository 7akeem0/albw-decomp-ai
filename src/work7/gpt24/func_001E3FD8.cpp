#include "range.h"
struct Model1E3F24{char pad[0x80];u32 matrix[12];char padb0[0x164-0xb0];u32 flags;};
struct Obj1E3F24{char pad[0x3d0];Vec3_24 pos;char pad3dc[12];u32 angle;char pad3ec[0x478-0x3ec];void*other;Model1E3F24*model;};
extern void func_004D7EB0(u32*,void*,u32,const Vec3_24*);
extern void func_004CEAF0(Model1E3F24*);
void call(u32*matrix,u32 angle,void*other,const Vec3_24*pos){func_004D7EB0(matrix,other,angle,pos);}
extern "C" void target(Obj1E3F24*p){Model1E3F24*m=p->model;u32*matrix=m->matrix;m->flags|=0x40000000;call(matrix,p->angle,p->other,&p->pos);func_004CEAF0(p->model);}
