#include "range.h"
struct Child440{u8 pad[0x74];Ctrl231 ctrl;u8 gap80[0xe8-0x80];u8 active;};
struct Owner440{u8 pad[0x16c];Child440*child;};
extern "C" void func_0031C3A4(Child440*);
extern "C" void func_002317C0(void*,f32);
void func_00440124(Owner440*p){Child440*c=p->child;if(!c->active){func_0031C3A4(c);func_002317C0(&c->ctrl,1.0f);c->active=1;}}
