#include "range.h"
struct Obj35DE {char pad[0x9b0];Vec3 pos;};
extern void* data_0070D858;
extern void func_00172428(void*,s32,s32,const Vec3*);
void func_0035DE80(Obj35DE* p){func_00172428(data_0070D858,15,3,&p->pos);}
