#include "range.h"
extern GameActors24*data_00706E20;
extern void*data_00711F50;
extern void func_004F8638(void*,s32);
extern void func_001207F4(void*,void*);
extern void func_0052FD7C(u32*,void(*)(void*,void*),void*);
extern void func_00293F34(void*);
extern "C" void target(void*p){func_004F8638(p,-1);GameActors24*const&g=data_00706E20;func_0052FD7C(g->actors,func_001207F4,0);func_00293F34(data_00711F50);}
