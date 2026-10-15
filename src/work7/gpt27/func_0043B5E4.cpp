#include "range.h"
struct Obj43B5{u8 pad[0x74];Ctrl231 ctrl;u32 word80,current,saved;};
extern "C" void func_001B6C04(void*);extern "C" void func_002317C0(void*,f32);extern "C" void func_0043B640(void*);
void func_0043B5E4(Obj43B5*p){func_001B6C04(p);func_002317C0(&p->ctrl,1.f);func_0043B640(p);p->saved=p->current;}
