#include "ladder_types.h"
struct State_00513400{s32 count;};struct Owner_00513400{char pad[0x48c];State_00513400 state;s32 count()const;};
s32 Owner_00513400::count()const{return state.count;}
extern void func_0066B94C(State_00513400*,s32) ;
void f_00513400(Owner_00513400*p){if(p->count()==60)func_0066B94C(&p->state,4);}
