#include "../range_types.h"
struct State{ s32 count; }; extern "C"  void func_006615C4(State*,s32);struct Obj{char pad[0x40c];State state;s32 count()const;void tick();};
s32 Obj::count()const{return state.count;}
extern "C" void f_00288C88(Obj*p){if(p->count()>30)func_006615C4(&p->state,2);}
