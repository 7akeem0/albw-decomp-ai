#include "range.h"
extern f32 func_004F898C();extern bool func_004FABDC(void*,u16,s32,bool);
void f_001A9428(Obj1A94*p){p->velocity.y=func_004F898C();p->rate=0.04f;func_004FABDC(p,1,-1,false);p->count=0;}
