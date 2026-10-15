#include "range.h"
struct Trio3F {u32 a,b,c;};struct Obj3F {u8 pad[0x38];Trio3F value;};struct Global3F {u8 pad[0x60];Trio3F value;};
extern Global3F*data_00716238;extern "C" void func_003F6A8C(void*);extern "C" void func_003F6A20();
void func_003F1204(Obj3F*p){Trio3F t=p->value;Global3F*g=data_00716238;Trio3F*out=&g->value;out->a=t.c;out->b=t.b;out->c=t.a;func_003F6A8C(p);func_003F6A20();}
