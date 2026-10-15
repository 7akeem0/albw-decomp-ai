#include "range.h"
struct Obj20E324{char pad[0x8bc];u32 state;};
struct Game20E324{char pad[0x3dbbc];u32 actors[4];};
extern Game20E324*data_00706E20;
extern  void func_0065D630(u32*,s32);
extern void func_00120770(void*,void*);
extern void func_0052FD7C(u32*,void(*)(void*,void*),void*);
extern "C" void target(Obj20E324*p){func_0065D630(&p->state,44);Game20E324*g=data_00706E20;func_0052FD7C(g->actors,func_00120770,0);}
