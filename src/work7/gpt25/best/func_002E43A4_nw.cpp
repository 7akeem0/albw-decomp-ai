#include "../range_types.h"
struct State{ s32 count; }; extern "C"  void func_00663E64(State*,s32);struct Obj{char pad[0x8cc];State state;s32 count()const;void tick();};
s32 Obj::count()const{return state.count;}
extern "C" void f_002E43A4(Obj*p){if(p->count()>60)func_00663E64(&p->state,2);}
