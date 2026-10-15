#include "range.h"
extern bool func_004FABDC(void*,u16,s32,bool);
void f_0021CFF4(Obj21CF*p,u32 n){if((u32)((n&255)-21)>7)return;u32 z=0;for(int i=0;i<3;++i)(&p->velocity.x)[i]=0;p->value=z;func_004FABDC(p,5,-1,false);}
