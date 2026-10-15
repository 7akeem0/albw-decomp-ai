#include "range.h"
struct P{f32 a,b,c;};struct S{u8 pad[0x38];P args;};
struct G{u8 pad[0x60];f32 a,b,c;u8 gap[0x10];u32 flag;};
extern G*data_00716238;
extern "C" void func_003F6A20();extern "C" void func_003F6E1C(S*);
void done(G*g){g->flag=0;data_00716238=(G*)((u8*)g+0x80);}
extern "C" void f_003F21C4(S*s){P p=s->args;G*g=data_00716238;g->a=p.c;g->b=p.b;g->c=p.a;done(g);func_003F6E1C(s);}
