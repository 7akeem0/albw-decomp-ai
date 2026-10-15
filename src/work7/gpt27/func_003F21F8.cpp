#include "range.h"
struct Triple3F21F{u32 a,b,c;};
struct Owner3F21F{u8 pad[0x38];Triple3F21F value;};
struct Global3F21F{u8 pad[0x60];Triple3F21F value;};
extern "C" Global3F21F*data_00716238;
extern "C" void func_003F6A8C(void*);
extern "C" void func_003F6E1C(void*);
void func_003F21F8(Owner3F21F*p){Triple3F21F t=p->value;Global3F21F*g=data_00716238;Triple3F21F*out=&g->value;out->a=t.c;out->b=t.b;out->c=t.a;func_003F6A8C(p);func_003F6E1C(p);}
