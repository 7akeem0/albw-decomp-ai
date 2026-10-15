#include "../range_types.h"
struct State{ s32 count; }; extern "C"  void func_00660718(State*,s32);struct Obj{char pad[0x8c8];State state;s32 count()const;void tick();};
s32 Obj::count()const{return state.count;}
extern "C" void f_00267B88(Obj*p){if(p->count()>60)func_00660718(&p->state,17);}
