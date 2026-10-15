#include "range.h"
struct Obj34{u8 pad[0x38];Vec3 value;};struct Global34{u8 pad[0x60];Vec3 value;u32 flag;u8 pad70[12];u32 flag7c;};
extern Global34*data_00716238;extern "C" void func_003F6E1C(void*);
void done(Global34*g){g->flag=0;g->flag7c=0;data_00716238=(Global34*)(g+1);}
void func_003F34C8(Obj34*p){Vec3 t=p->value;Global34*g=data_00716238;g->value.x=t.z;g->value.y=t.y;g->value.z=t.x;done(g);func_003F6E1C(p);}
