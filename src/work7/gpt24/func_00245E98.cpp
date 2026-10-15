#include "range.h"
struct Obj245E24{char pad[0x3d0];Vec3_24 position;char pad3dc[0x990-0x3dc];u8 flag;};
struct Manager245E24;
extern Manager245E24*data_00709F30;
extern void func_001E6AB4(Obj245E24*);
extern bool func_004C6D98(Manager245E24*,const Vec3_24*,s32);
extern "C" void target(Obj245E24*p){func_001E6AB4(p);if(p->flag&&data_00709F30&&func_004C6D98(data_00709F30,&p->position,0))p->flag=0;}
