#include "range.h"
struct Child {u8 pad[0x1a8];s32 angle;};struct Manager {u8 pad[0x18];Child*child;};
extern Manager*data_00708998;
struct Obj {u8 pad[0x3e8];s32 angle;};
extern void func_0051D2CC(s32*,s32,f32);
void f_002B5608(Obj*p){Manager*&m=data_00708998;s32 angle=0;if(m&&m->child)angle=m->child->angle;func_0051D2CC(&p->angle,angle,0.125f);}
