#include "range.h"
struct Parent {u8 pad[0xe0];Vec3 pos;};struct Obj {Parent*parent;u32 state;};
extern void func_0029BD88(Obj*,const Vec3*);extern void func_0066BD18(u32*,s32);
void f_0029BF74(Obj*p){if(p->state==3){func_0029BD88(p,&p->parent->pos);func_0066BD18(&p->state,4);}}
