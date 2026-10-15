#include "range.h"
struct Trio3F21{u32 a,b,c;};struct Quad3F21{u32 a,b,c,flag;};
struct Obj3F21{u8 pad[0x38];Trio3F21 value;};struct Global3F21{u8 pad[0x60];Quad3F21 value;};
extern Global3F21*data_00716238;extern "C" void func_003F6A8C(void*);extern "C" void func_003F6A20();
void clear(Quad3F21*out){out->flag=0;}
void func_003F218C(Obj3F21*p){Trio3F21 t=p->value;Global3F21*g=data_00716238;Quad3F21*out=&g->value;out->a=t.c;out->b=t.b;out->c=t.a;clear(out);func_003F6A8C(p);func_003F6A20();}
