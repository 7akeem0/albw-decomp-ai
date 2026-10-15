#include "range.h"
struct Child447{u8 pad[0x5d];u8 active;u8 gap5e[0x78-0x5e];Ctrl231 ctrl;};
struct Owner447{u8 pad[0x210];Child447*child;};
extern "C" void func_002BF950(Child447*,bool);
extern "C" void func_002317C0(void*,f32);
void func_0044797C(Owner447*p){Child447*c=p->child;if(c->active){func_002BF950(c,true);func_002317C0(&c->ctrl,1.0f);}}
