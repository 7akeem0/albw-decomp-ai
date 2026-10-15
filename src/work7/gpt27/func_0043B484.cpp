#include "range.h"
struct Obj43B4{u8 pad[0x71];u8 active;};extern void*data_0070B850;
extern "C" void func_001B6C04(Obj43B4*);extern "C" void func_0016656C(void*,Obj43B4*);
void func_0043B484(Obj43B4*p){func_001B6C04(p);if(p->active)func_0016656C(data_0070B850,p);}
